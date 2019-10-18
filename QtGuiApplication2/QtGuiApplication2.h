#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtGuiApplication2.h"
#include "WidgetFirstTab.h"		
#include "billingtabwidget.h"		
#include "Model.h"		

class QtGuiApplication2 : public QMainWindow
{
	Q_OBJECT

public:
	QtGuiApplication2(QWidget *parent = Q_NULLPTR);

private:
	void imageVisibilityClickedSlot(int nbTimes);

private:
	Model m_model;

	Ui::QtGuiApplication2Class ui;
	WidgetFirstTab* m_tabWidgetFirstTab;
	BillingTabWidget* m_tabBilling;
	
};
