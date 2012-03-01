// sysidni1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;
string DecToBin(unsigned long int x);
int Dub1 (unsigned long number);
int _tmain(int argc, _TCHAR* argv[])
{
	unsigned long int x;
	cout<<"Vvedit dovge cile bezznakove chuslo:  ";
	cin>>x;
	cout<<"Vu vvelu: "<<DecToBin(x);
	cout<<"\nRezultat: "<<Dub1(x);
	system("pause");
return 0;
}

//perevodumo chuslo z 10-voi v 2-vy
string DecToBin(unsigned long int x)
{
	unsigned long int sum=0,des=1; 
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
int Dub1 (unsigned long number)
{
    number &= (number << 1);    // otrumaemo 0, jaksho nemae sysidnih 1
    return number==0;
} 