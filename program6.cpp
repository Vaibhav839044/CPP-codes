#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char button;
	cout<<"Input a character: ";
	cin>>button;

	switch(button)
	{
		case 'a':
		cout<<"Hello"<<endl;
		break;
		case 'b':
		cout<<"Namste"<<endl;
		break;
		case 'c':
		cout<<"Hola"<<endl;
		break;

		default:
		cout<<"I am still learning more: "<<endl;
		break;


	}
	getch(); 
}