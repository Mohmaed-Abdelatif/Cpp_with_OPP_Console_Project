#include "contactbook.h"

contactbook::contactbook(int contactsize)
{
	m_size = contactsize;
	m_contacts = new contactt[m_size];
	m_count = 0;
}

contactbook::~contactbook()
{
	delete[] m_contacts;
}

void contactbook::addnewcontact()
{
	contactt* new_contact = new contactt();
	new_contact->setuserid(m_count + 1);
	new_contact->readinput();
	m_contacts[m_count++] = *new_contact;
}

void contactbook::editcontact(int contact_id)
{
	if (m_count == 0)
	{
		cout << "No Contact Exist\n";
	}
	bool edite = false;
	for (size_t i = 0; i < m_count; i++)
	{
		if (m_contacts[i].getuserid() == contact_id)
		{//some edite
			m_contacts[i].readinput();


			edite = true;
			break;
		}
	}
	if (edite)
	{
		cout << "User Edited\n";
	}
	else
	{
		cout << "No Contact Exist\n";
	}
}

void contactbook::deletcontact(int contact_id)
{
	if (m_count == 0)
	{
		cout << "No Contact Exist\n";
	}


	bool deleted = false;
	for (size_t i = 0; i < m_count; i++)
	{
		if (m_contacts[i].getuserid() == contact_id)
		{//delet from array //?????????????

			if (i == m_count - 1)
			{
				m_count--;
			}
			else
			{
				m_contacts[m_count - 1].setuserid(i + 1);
				m_contacts[i] = m_contacts[m_count - 1];
				m_count--;
			}

			deleted = true;
			break;
		}
	}
	if (deleted)
	{
		cout << "User Deleted\n";
	}
	else
	{
		cout << "No Contact Exist\n";
	}

}

void contactbook::showall() const
{
	if (m_count == 0)
	{
		cout << "NO Contacts Exist\n";
	}
	for (size_t i = 0; i < m_count; i++)
	{
		m_contacts[i].show();
	}
}


void contactbook::search_con(string name) const
{
	int found_counter = 0;
	for (size_t i = 0; i < m_count; ++i)
	{
		if (m_contacts[i].search(name))
		{

			m_contacts[i].show();
			found_counter++;
		}
	}
	if (found_counter == 0)
	{
		cout << "No Contact found\n";
	}
	else
	{
		cout << found_counter << "contacts found\n";
	}
}

