// zp-toj_n-bitiv.cpp : Defines the entry point for the console application.
//
//funkcija, jaka povertaje dodatne dovge cile chuslo, jake mistutj blok 
//odunuchnux bitiv dovzhunoy n, po4unay4u z p-togo bita
// Bitu nymeryjytsja vid 0 zliva napravo
#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;

unsigned long int newuli(int pos, int n)
{
	unsigned long int x=~0;   // vsi odunuchku
	int z=x<<pos;		// zsyvaemo tak wchob sprava vid p bylu sami nyli
	int y=~(x<<(pos+n));	//obnuliuemo vsi bitu z livogo boky do pos+n
	x=y&z;			// cja operacija onylut vsi bitu zliva i sprava
	return x;		//  vid potribnux nam bitiv
}

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

int _tmain(int argc, _TCHAR* argv[])
{
	int p, n;
	unsigned long int x;
	cout<<" Vveditj nomer pozuciji i kilkistj odunuchok : ";
	cin>>p>>n;
	x=newuli(p,n);
	cout<<"\n z "<<p<<" pozuciji "<<n<<" odunuchok  " <<x<<endl;
	cout<<"\n v 2ovij sustemi chuslennja :"<<DecToBin(x);
	system("pause");
	return 0;
}

