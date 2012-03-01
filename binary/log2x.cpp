// log2x.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;
#define uli unsigned long int 

string DecToBin(unsigned long int x) // funkcija dlja perevody z 10voji
				    // sustemu chuslennja v 2vy
{
	char ch;
	string s, s1;
	while(x>0)
	{
		ch=x%2;		// v ch - ostacha vid dilennja na 2
		s1=ch+'0';	// otrumyemo chuslo
		s.insert(0,s1);  //i vstavlajemo jogo v pochatok rjadka
		x/=2;		
	}
	return s; 
}

 /*Використовуючи тільки бітові та арифметичні операції, 
написати функцію, яка для заданого беззнакового довгого цілого числа x 
повертає значення k=log2(x) , тобто 2^k<=x<=2^(k+1)  
(можна використати оператор циклу).*/

int log2x(uli x)
{
	int n=-1;
	uli ch=0x1;	
	while(ch<=x)
	{
		n++; 		//stepinj dvijku
		ch=ch<<1;	// ekvivalentno mnozhennjy na 2
	}
	return n;
}
int _tmain(int argc, _TCHAR* argv[])
{
	uli x;
	cout<<"Vveditj chuslo: ";
	cin>>x;
	cout<<" Dvijkovuj ekvivalent :"<<DecToBin(x);
	x=log2x(x);
	cout<<"\n Stepinj: "<<x;
	cout<<" Dvijkovuj ekvivalent :"<<DecToBin(x);
	system("pause");
	return 0;
}

