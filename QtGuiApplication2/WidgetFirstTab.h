#pragma once

#include <QWidget>
#include "ui_WidgetFirstTab.h"
#include "Model.h"

class WidgetFirstTab : public QWidget
{
	Q_OBJECT

public:
	WidgetFirstTab(Model& model, QWidget *parent = Q_NULLPTR);
	~WidgetFirstTab();

private:
	void addButtonClicked();
	void addBorneSlot(Borne const& borne);
	void itemDoubleClicked(QListWidgetItem* item);

private:
	Model& m_model;
	Ui::WidgetFirstTab ui;
};
