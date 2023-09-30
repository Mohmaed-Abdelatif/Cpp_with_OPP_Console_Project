#include "contact.h"

contactt::contactt()
{
	m_phone_size = 5;

	m_phones = new phonenumber[m_phone_size];

	m_phone_count = 0;
	m_gender = 0;

}

contactt::~contactt()
{
	delete[]m_phones;

}

void contactt::setuserid(int id)
{
	m_id = id;
}

void contactt::setcity(string city)
{
	m_city = city;
}

void contactt::setemailaddress(string email_address)
{
	m_email_address = email_address;
}

void contactt::setgender(int gendar)
{
	m_gender = gendar;
}

void contactt::readinput()
{
	cout << "Enter Contact information:-\n ";
	cout << "Name: ";
	cin >> m_name;
	cout << "Gendar(0 to male - 1 to female): ";
	cin >> m_gender;
	int n = 0;
	cout << "City: ";
	cin >> m_city;
	cout << "Email Address: ";
	cin >> m_email_address;
	cout << "How many phones(0-" << m_phone_size << ")? ";
	cin >> n;
	for (size_t i = 0; i < n; i++)
	{
		string pho, type;
		cout << "Phone number(" << i + 1 << "): ";
		cin >> pho;
		cout << "type: ";
		cin >> type;

		//creat new phone object
		phonenumber* new_phone = new phonenumber(pho, type);
		//store to phone array
		m_phones[m_phone_count++] = *new_phone;
	}
}

int contactt::getuserid() const
{
	return m_id;
}




bool contactt::search(string key) const
{
	//searsh with name 
	if (m_name.compare(key) == 0) {
		return true;
	}

	//search with phone
	if (m_phone_count > 0) {
		for (size_t i = 0; i < m_phone_count; i++)
		{
			if (m_phones[i].ismatched(key)) {
				return true;
			}

		}
	}

	return false;
}

void contactt::show() const
{
	cout << "------------------------\n";
	cout << "Id: " << m_id << endl << "Name: " << m_name << endl
		<< "Gender: " << (m_gender == 0 ? "male" : "female") << endl
		<< "City: " << m_city << endl
		<< "Email Address: " << m_email_address << endl;
	if (m_phone_count > 0)
	{
		cout << "Phone List:\n";
		for (size_t i = 0; i < m_phone_count; i++)
		{
			cout << i + 1 << "-";
			m_phones[i].get();

		}

	}
	cout << endl;
}

