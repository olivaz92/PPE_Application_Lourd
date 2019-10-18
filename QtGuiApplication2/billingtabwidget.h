#ifndef BILLINGTABWIGDTE_H
#define BILLINGTABWIGDTE_H

#include <QWidget>
#include <QWebEngineView>
#include "ui_billingtabwidget.h"
#include "Model.h"

class BillingTabWidget : public QWidget
{
    Q_OBJECT

public:
    BillingTabWidget(Model& model, QWidget *parent = nullptr);

private:
	void addBorneSlot(Borne const& borne);
	void updateBornes();
    void refreshBill();

private:
    Ui::BillingTabWidget m_ui;
	Model& m_model;
	QWebEngineView* m_webview;
};

#endif // BILLINGTABWIGDTE_H
