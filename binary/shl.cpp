// shl.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
#define uli unsigned long int
uli shl(uli ch, int r);
string DecToBin(uli x);

int _tmain(int argc, _TCHAR* argv[])
{
	uli a, res;
	int p;
	cout<<"Vvedit bezznakove dovge cile chuslo: ";
	cin>>a;
	cout<<"Vveditj chuslo, na jake zsynytu: ";
	cin>>p;
	cout<<"Vu vvelu: "<<DecToBin(a);
	res=shl(a, p);
	cout<<"Zsynyte chuslo: "<<res<<"\n dvijkovuj ekvivalent: "<<DecToBin(res);
	system("pause");
	return 0;
}

//perevodumo chuslo z 10-voi v 2-vy
string DecToBin(uli x)
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

uli shl(uli ch, int r){
	 return (ch<<r) | (ch>>32-r);
}