#include<iostream>
using namespace std;

struct person{
	
	int toes;
	int knees;
	int shoulder;
	int head;

	 };
   
int main ()
   {
   	
		person person;
		{
		cout<<"toes"<<endl;
		cin>>person.toes;
		cout<<"knees"<<endl;
		cin>>person.knees;
		cout<<"shoulder"<<endl;
		cin>>person.shoulder;
		cout<<"head"<<endl;
		cin>>person.head;
	   }
		return 0;
   }
