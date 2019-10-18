#include "Model.h"
#include <cmath>

Model::Model()
{
	
}


Model::~Model()
{
}

void Model::loadBornes()
{
	//
	/*QSqlDabatase db(..);
	QSqlQuery query("select * from bornes");

	while (query.next()) 
	{		
		Borne b;
		b.setName(query.value(0).toString());
		m_bornes.push_back(b);
	}*/

	/*
	QNetworkAccessManager networkAccess;
	QNetworkRequest request(...);
	QNetworkReply* reply = networkAccess.get(request);
	//Wait response and convert to JSON
	for (QJSonObject o : obj)
	{
		Borne b;
		b.setName(row["name"]);
		m_bornes.push_back(b);
	}*/

	m_bornes.push_back(Borne(1, "Borne N°1"));
	m_bornes.push_back(Borne(2, "Borne N°2"));
	m_bornes.push_back(Borne(3, "Borne N°3"));
}

std::vector<Borne> Model::getBornes() const
{
	return m_bornes;
}

void Model::addBorne(Borne borne)
{
	if (borne.getId() == -1)
	{
		//find max id
		int maxId = 0;
		for (Borne b : m_bornes)
			maxId = std::max(b.getId(), maxId);
		borne.setId(maxId + 1);
	}
	m_bornes.push_back(borne);
	emit newBorne(borne);
}

Borne Model::getBorne(int id) const
{
	for (Borne b : m_bornes)
	{
		if (b.getId() == id)
			return b;
	}

	return Borne(-1);
}
