#include "phonenumber.h"

phonenumber::phonenumber()
{
	//no intialize
}

phonenumber::phonenumber(string phone_number, string phone_type)
{
	setphone(phone_number);
	settype(phone_type);

}

phonenumber::~phonenumber()
{
	//npthing to distroy
}

void phonenumber::setphone(string phone_number)
{
	m_phone = phone_number;
}

void phonenumber::settype(string phone_type)
{
	m_type = phone_type;

}

bool phonenumber::ismatched(string phone) const
{
	if (m_phone.compare(phone) == 0) {
		return true;
	}

	return false;

}

void phonenumber::get() const
{
	cout << "phone: " << m_phone << "\t" << "type: " << m_type << endl;
}
