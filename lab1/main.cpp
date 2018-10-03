#include <iostream>
#include <string>
#include "Header.h"
using namespace std;

int main()
{

	//cin >> num >> denom;
	TFrac dr(-4,1);
	TFrac frac("3/-9");
	TFrac c(0,1);
	c = dr + frac;
	c = dr - frac;
	c = dr * frac;
	//c = dr / frac;
	//TFrac s=;
	//cout << s.GetNum()<< " "<< s.GetDenom();
	//cout<<dr.LargerTFrac(frac);
	//TFrac dr(num, denom);
	//dr=dr.ReverseTFrac();
	//cout << dr.GetNumerator();
	//cout << dr.GetNum();
	cout << c.GetFraction() << endl;
	cout << dr.GetFraction() << endl;
	cout << frac.GetFraction();
	system("PAUSE");
}
