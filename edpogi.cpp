#include <iostream>
using namespace std;

int main ()
{
	for(int x=1;x<=100;x++)
	{
		if(x%3==0 && x%5==0)
		{
			cout<<"Ed Pogi"<<endl;
		}
		else if(x%5==0)
		{
			cout<<"ed"<<endl;
		}
		else if(x%3==0)
		{
			cout<<"Pogi"<<endl;
		}
		else
		{
			cout<<x<<endl;
		}
	}
	
	return 0;
}
