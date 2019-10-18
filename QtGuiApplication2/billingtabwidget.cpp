#include "billingtabwidget.h"
#include "mustache.h"
#include <cmath>
#include <QTimer>
#include <QFile>
#include <QWebEngineView>
#include <QtWidgets>
#include <QMetaType> 


BillingTabWidget::BillingTabWidget(Model& model, QWidget *parent) :
    QWidget(parent),
	m_model(model)
{
    m_ui.setupUi(this);
	
	QVBoxLayout* layout = new QVBoxLayout(m_ui.widgetBill);
	m_webview = new QWebEngineView();
	m_webview->setZoomFactor(3.0);
	m_webview->adjustSize();
	layout->addWidget(m_webview);
	
    //CONNECTION
	connect(&m_model, &Model::newBorne, this, &BillingTabWidget::addBorneSlot);
    connect(m_ui.cbBornes, QOverload<int>::of(&QComboBox::currentIndexChanged), this, &BillingTabWidget::refreshBill);
    
    //Init events
    updateBornes();
}


void BillingTabWidget::refreshBill()
{
	int currentId = m_ui.cbBornes->currentData().isValid() ? m_ui.cbBornes->currentData().toInt() : -1;

	if(currentId == -1)
	{
		m_webview->setHtml("Nothing");
		return;
	}

   
	Borne borne = m_model.getBorne(currentId);
   
	QVariantHash dataContext;
	dataContext["borne_name"] = borne.getName();
	dataContext["borne_id"] = borne.getId();
	dataContext["TODO"] = "TODO";

	//Price
	int number = borne.getId(); //get information from complete model : here it's stupid
	dataContext["price"] = 42; //get information from complete model
	dataContext["total_price"] = number * 42; //get information from complete model
	dataContext["number"] = number; 

	//Read file directly from resources with help of QFile
	QFile data(":/QtGuiApplication2/template.html");
	if (data.open(QFile::ReadOnly))
	{
		QByteArray res = data.readAll();

		Mustache::Renderer renderer;
		Mustache::QtVariantContext context(dataContext);
		m_webview->setHtml(renderer.render(res, &context));
	}
	else
	{
		m_webview->setHtml("ERROR");
	}
}

void BillingTabWidget::updateBornes()
{
	std::vector<Borne> bornes = m_model.getBornes();
	
    int currentId = m_ui.cbBornes->currentData().isValid() ? m_ui.cbBornes->currentData().toInt() : -1;
    int index = 0;
    m_ui.cbBornes->clear();
    
	for(size_t i(0);i < bornes.size();++i)
    {
        Borne const& borne = bornes[i];
		addBorneSlot(borne);

        if(borne.getId() == currentId)
            index = currentId;
    }
    m_ui.cbBornes->setCurrentIndex(index);
}


void BillingTabWidget::addBorneSlot(Borne const& borne)
{
	QString const str("[%1] (id: %2)");
	m_ui.cbBornes->addItem(str.arg(borne.getName()).arg(borne.getId()), borne.getId());
}