#include<cstring>
#include<iostream>
using namespace std;


int main()
{
	int i, count=0;
	char binaryString[10];
	strcpy(binaryString, "1010010010");
	for ( i=0;i<10;i++)
	{
		if (binaryString[i]=='1')
		count++;
   }
   cout<<count;
   return 0;
}

