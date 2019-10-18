#pragma once

#include <QWidget>
#include "ui_ImageWidget.h"

class ImageWidget : public QWidget
{
	Q_OBJECT

public:
	ImageWidget(QWidget *parent = Q_NULLPTR);
	~ImageWidget();

	void showHideImage(bool visible);

signals:
	void imageVisibilityClicked(int);

private:
	Ui::ImageWidget ui;
	int m_nbPressed = 0;
};
