// swap2bits.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;
#define uli unsigned long int
//obminue 2 sysidnih paru bitiv
int Swap2Bits(uli x){
uli mask, z, y;
	mask=0xCCCCCCCC; //=1100 1100..
	y=(x&mask)>>2; //vudiljaemo paru bitiv cherez 2, pochunaychu z 2
	z=(x&(mask>>2))<<2; //a teper inshi paru(wsho zalushulusja)
return (z|y);  //nakladaemo cherez or 
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

int _tmain(int argc, _TCHAR* argv[])
{
	uli x, res;
	cout<<"\n Vveditj dodatnje dovge cile chuslo: ";
	cin>>x;
	cout<<"  Dvijkovuj ekvivalent :"<<DecToBin(x);
	res=Swap2Bits(x);
	cout<<"\n Rezyltat:  "<<res;
	cout<<" \n Dvijkovuj ekvivalent :"<<DecToBin(res);
	system("pause");
	return 0;
}
