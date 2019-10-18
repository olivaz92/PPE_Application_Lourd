#include "ImageWidget.h"
#include <QtWidgets>

ImageWidget::ImageWidget(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	
	QPixmap p(":/QtGuiApplication2/Resources/image.jpg");
	ui.label->setPixmap(p);

	connect(ui.pushButton, &QAbstractButton::clicked, this, &ImageWidget::showHideImage);
}

ImageWidget::~ImageWidget()
{
}


void ImageWidget::showHideImage(bool visible)
{
	ui.label->setVisible(visible);

	m_nbPressed += 1;
	emit imageVisibilityClicked(m_nbPressed);
}