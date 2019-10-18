#pragma once

#include <QObject>
#include <vector>
#include "Borne.h"

class Model : public QObject
{
	Q_OBJECT
public:
	Model();
	~Model();

	//! load bornes
	void loadBornes();

	std::vector<Borne> getBornes() const;
	void addBorne(Borne borne);

	//! @return Borne for id. If id invalid, borne id will be -1
	Borne getBorne(int id) const;

signals:
	//! signal emited when calling addBorne
	void newBorne(Borne);

private:
	std::vector<Borne> m_bornes;
};

