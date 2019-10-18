#pragma once

#include <QString>

class Borne
{
public:
	Borne(int id = -1, QString const& name = "");
	~Borne();

	int getId() const;
	void setId(int id);

	QString getName() const;
	void setName(QString const& name);

private:
	int m_id = -1;
	QString m_name;
};

