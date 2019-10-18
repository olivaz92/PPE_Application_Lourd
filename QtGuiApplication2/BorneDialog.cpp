#include "BorneDialog.h"

BorneDialog::BorneDialog(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);	
}

void BorneDialog::setBorne(Borne const& borne)
{
	ui.lineEdit->setText(borne.getName());
}

BorneDialog::~BorneDialog()
{
}
