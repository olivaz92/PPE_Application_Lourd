#include "Borne.h"
#include <QUuid>

Borne::Borne(int id, QString const& name) : m_id(id), m_name(name)
{
}

Borne::~Borne()
{
}

int Borne::getId() const
{
	return m_id;
}

void Borne::setId(int id)
{
	m_id = id;
}

QString Borne::getName() const
{
	return m_name;
}

void Borne::setName(QString const& name)
{
	m_name = name;
}
