#pragma once
#include<iostream>
using namespace std;
#include<string>
class phonenumber
{
private:
	string m_phone;
	string m_type;
public:
	phonenumber();
	virtual ~phonenumber();
	phonenumber(string, string);
	void setphone(string);
	void settype(string);
	bool ismatched(string) const;
	void get() const;
};
