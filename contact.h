#pragma once
#include<iostream>
using namespace std;
#include<string>
#include<ctime>
#include"phonenumber.h"
class contactt
{
private:
	int m_id;
	string m_name;
	int m_gender;
	string m_city;
	string m_note;
	time_t addeddate;
	string m_email_address;
	phonenumber* m_phones; //composition class

	int m_phone_size;

	int m_phone_count;
public:
	contactt();
	virtual ~contactt();
	void setuserid(int);
	void setgender(int);
	void setcity(string);
	void setemailaddress(string);
	void readinput();
	int getuserid() const;
	bool search(string) const;
	void show() const;

};

