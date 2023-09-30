#pragma once
#include<iostream>
using namespace std;
#include<string>
#include"contact.h"
class contactbook
{
private:
	int m_count;

	int m_size;
	contactt* m_contacts;
public:
	contactbook(int);
	virtual ~contactbook();
	void addnewcontact();
	void editcontact(int);
	void deletcontact(int);
	void showall() const;
	void search_con(string) const;

};

