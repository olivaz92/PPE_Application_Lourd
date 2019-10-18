#include "WidgetFirstTab.h"
#include "BorneDialog.h"

WidgetFirstTab::WidgetFirstTab(Model& model, QWidget *parent)
	: QWidget(parent), m_model(model)
{
	ui.setupUi(this);

	connect(ui.addButton, &QAbstractButton::clicked, this, &WidgetFirstTab::addButtonClicked);
	connect(&m_model, &Model::newBorne, this, &WidgetFirstTab::addBorneSlot);
	connect(ui.listWidget, &QListWidget::itemDoubleClicked, this, &WidgetFirstTab::itemDoubleClicked);

	//get existing Bornes from model and add it to list
	std::vector<Borne> bornes = model.getBornes();
	for (Borne b : bornes)
	{
		addBorneSlot(b);
	}
}

WidgetFirstTab::~WidgetFirstTab()
{
}

void WidgetFirstTab::addButtonClicked()
{
	Borne b;
	b.setName(ui.lineEdit->text());
	m_model.addBorne(b);
}

void WidgetFirstTab::addBorneSlot(Borne const& borne)
{
	ui.listWidget->addItem(borne.getName());
}

void WidgetFirstTab::itemDoubleClicked(QListWidgetItem* item)
{
	Borne b;
	b.setName(item->text());

	BorneDialog dlg;
	dlg.setBorne(b);
	dlg.exec();
}
