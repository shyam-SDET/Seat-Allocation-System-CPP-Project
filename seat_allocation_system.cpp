#include <iostream>
#include <conio.h>
#include <fstream>
#include<string>
#include <windows.h>
using namespace std;
class student
{
	public:
		char name[50];
		char reg_no[50];
		void add()
		{
			cin.ignore();
			cout<<"Enter name            :: ";	cin.get(name,50);	cin.ignore();
			cout<<"Enter registration no :: ";	cin.get(reg_no,50);
		}
		void search()
		{
			cout<<"Name            :: "<<name<<endl;
			cout<<"Registration no :: "<<reg_no<<endl;
			cout<<"------------------------"<<endl;
		}
		void show_all()
		{
			cout<<"Name            :: "<<name<<endl;
			cout<<"Registration no :: "<<reg_no<<endl;
			cout<<"------------------------"<<endl;
		}
};
int main()
{
	system("COLOR 0A");
	int choice;
c:	cout<<"----------------------------"<<endl;
	cout<<"Choose the option"<<endl;
	cout<<"1.add\n2.search\n3.show all\n4.exit"<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1://add
		{
			////////////////////////////
			system("cls");
			cout<<"loading";
			Sleep(700);
			system("cls");
			cout<<"loading.";
			Sleep(700);
			system("cls");
			cout<<"loading..";
			Sleep(700);
			system("cls");
			cout<<"loading...";
			Sleep(700);
			system("cls");
			////////////////////////////////
			student obj;
			obj.add();
			fstream file("shyam",ios::app);
			file.write((char*)&obj,sizeof(obj));
			file.close();
			goto c;
			break;
		}
		case 2://search
			{
				////////////////////////////
				system("cls");
				cout<<"loading";
				Sleep(700);
				system("cls");
				cout<<"loading.";
				Sleep(700);
				system("cls");
				cout<<"loading..";
				Sleep(700);
				system("cls");
				cout<<"loading...";
				Sleep(700);
				system("cls");
				////////////////////////////////

				int f=0;
				student obj;
				char name_s[50];
				int a=0;
				cin.ignore();
				cout<<"Enter name to search :: ";cin.get(name_s,50);
				fstream file("shyam",ios::in);
                while(file.read((char*)&obj,sizeof(obj)))
                {

                        if(strcmp(obj.name,name_s)==0)
                        {
                        	f=1;
                        	cout<<"Saet no :: "<<a<<endl;
                        	obj.search();
						}
						a++;
                }
                file.close();
				if(f==0)
				{
					cout<<"Not found"<<endl;
				}
				goto c;
				break;
			}

		case 3://show all list
			{
				////////////////////////////
				system("cls");
				cout<<"loading";
				Sleep(700);
				system("cls");
				cout<<"loading.";
				Sleep(700);
				system("cls");
				cout<<"loading..";
				Sleep(700);
				system("cls");
				cout<<"loading...";
				Sleep(700);
				system("cls");
				////////////////////////////////
				student obj;
				int a=0;
				fstream file("shyam",ios::in);
                while(file.read((char*)&obj,sizeof(obj)))
                {
                	cout<<"-----------------------"<<endl;
                	cout<<"Seat no :: "<<a<<endl;
                        obj.show_all();
                        a++;
                        Sleep(200);
                }
                file.close();
                goto c;
				break;
			}
		case 4:
			{
				return 0;
			}

		default:
			{
				////////////////////////////
				system("cls");
				cout<<"loading";
				Sleep(700);
				system("cls");
				cout<<"loading.";
				Sleep(700);
				system("cls");
				cout<<"loading..";
				Sleep(700);
				system("cls");
				cout<<"loading...";
				Sleep(700);
				system("cls");
				////////////////////////////////
				cout<<"Wrong input"<<endl;
				goto c;
			}

	}
}
