#include<iostream>
using namespace std;
#include"contactbook.h"


#include<string>

int main()
{
	//create contact objects "array of objects"
	contactbook contact(100);

	int c = -1;
	while (c != 0)
	{
		cout << "==============================\n"
			<< "1-Add New Users\n"
			<< "2-Delete a Contact\n"
			<< "3-Search\n"
			<< "4-Display All Contact\n"
			<< "5-Edit a Contact\n"
			<< "0-Quit\n"
			<< "Enter Your Choice: ";
		cin >> c;
		cout << "==============================\n";
		switch (c)
		{
		case 1:
			//add new contact
			contact.addnewcontact();
			break;
		case 2:
			//delate contact
		{
			int id = 0;
			cout << "Enter Contact Id To Delet\n";
			cin >> id;
			contact.deletcontact(id);
		}
		break;
		case 3:
			//search
		{
			char x = 'x';
			cout << "Search waith name or phone (n,p)?\n";
			cin >> x;
			if (x == 'n' || x == 'N')
			{
				string key;
				cout << "Enter Key Word to Searsh\n";
				cin >> key;
				contact.search_con(key);
			}
			/*else if (x == 'p' || x == 'P')
			{
				string key;
				cout << "Enter phone to Searsh\n";
				cin >> key;
				contact.search_con_phone(key);

			}*/

			break;
		}
		case 4:
			//print all contacts
			contact.showall();
			break;
		case 5:
			//edit contact
		{
			int id = 0;
			cout << "Enter Contact Id To edit\n";
			cin >> id;
			contact.editcontact(id);
		}


		}

	}
	cout << "Thanks\n";
	return 0;
}
