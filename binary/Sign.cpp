// chu_dodatnje.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;
#define sli  signed long int

string DecToBin( sli x)
{
	 sli sum=0,des=1; 
	char ch;
	string s, s1;
	while(x>0)
	{
		ch=x%2;
		s1=ch+'0';
		s.insert(0,s1);
		x/=2;
	}
	return s;
}

sli zero_or_x(sli x)
{
	return (x>>31)&x;
}

int _tmain(int argc, _TCHAR* argv[])
{
	sli x, res,n;
	cout<<"\n Vveditj dodatnje dovge cile chuslo: ";
	cin>>x;
	res=zero_or_x(x);
	cout<<"\n Rezyltat:  "<<res;
	system("pause");
	return 0;
}

