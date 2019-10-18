#pragma once

#include <QDialog>
#include "ui_BorneDialog.h"
#include "Borne.h"

class BorneDialog : public QDialog
{
	Q_OBJECT

public:
	BorneDialog(QWidget *parent = Q_NULLPTR);
	~BorneDialog();

	void setBorne(Borne const& borne);


private:
	Ui::BorneDialog ui;
};
