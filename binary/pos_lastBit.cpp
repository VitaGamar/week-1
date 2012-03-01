// pos_lastBit.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;
#define uli unsigned long int
string DecToBin(uli x) ;
int PosLastBit(uli n);

int _tmain(int argc, _TCHAR* argv[])
{
	uli x;
	cout<<"Vvedit chuslo: ";
	cin>>x;
	cout<<"Vu vvelu: "<<DecToBin(x);
	cout<<PosLastBit(x);	
	system("pause");
	return 0;
}
//povertae nomer pozucii ostannogo odunuchnogo bita
int PosLastBit(uli n){
	int k = 0;
	if((n & 0xFFFF) == 0)  {  //jaksho v molodshuh 16 bitah nemae 1 - zsyvaemos, zbilshyemo nomer pozucii
		k = 16; n >>= 16;}
	if((n & 0x00FF) == 0) {  //jaksho v molodshuh 8 bitah nemae 1 - zsyvaemos, zbilshyemo nomer pozucii
		k += 8, n >>= 8;}
							//prodovzhyemo analogichno, doku ne znajdemo ostannju odunuchky
	if((n & 0x000F) == 0) {
		k += 4, n >>= 4;}
	if((n & 0x0003) == 0) {
		k += 2, n >>= 2;}
	if((n & 0x0001) == 0) 
		k += 1;	
	return k;
}

// funkcija dlja perevody z 10voji sustemu chuslennja v 2vy
string DecToBin(uli x) 
{
 char ch;
 string s, s1;
 while(x>0)
 {
  ch=x%2;  // v ch - ostacha vid dilennja na 2
  s1=ch+'0'; // otrumyemo chuslo
  s.insert(0,s1);  //i vstavlajemo jogo v pochatok rjadka
  x/=2;  
 }
 return s; 
}