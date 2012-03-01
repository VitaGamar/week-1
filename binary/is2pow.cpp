
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;
unsigned long int step2(unsigned long int x1);
string DecToBin(unsigned long int x);
 int _tmain(int argc, _TCHAR* argv[])
{
	unsigned long int x;
	cout<<"vveditj chuslo: ";
	cin>>x;
	cout<<" Dvijkovuj ekvivalent :"<<DecToBin(x);
	x=step2(x);
	cout<<"jakwo stepin 2ijku - to 1:  "<<x;
	cout<<" Dvijkovuj ekvivalent :"<<DecToBin(x);
	system("pause");
	return 0;
}
 //funkcia povertae 1, jaksho chuslo je stepenem dvijku
unsigned long int step2(unsigned long int x1)
{
	return (x1&(x1-1))|0x1;  //jaksho chuslo je stepenem 2, to rezyltatom x1&(x1-1) byde 0
}
// funkcija dlja perevody z 10voji sustemu chuslennja v 2vy
string DecToBin(unsigned long int x)
{
	unsigned long int sum=0,des=1; 
	char ch;
	string s, s1;
	while(x>0)
	{
		ch=x%2;  // v ch - ostacha vid dilennja na 2
		s1=ch+'0';  // otrumyemo chuslo
		s.insert(0,s1);  //i vstavlajemo jogo v pochatok rjadka
		x/=2;
	}
	return s;
}