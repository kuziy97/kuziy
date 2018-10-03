#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include "Header.h"
using namespace std;


TFrac::TFrac(int numerator, int denominator)
	{
		if (denominator != 0) {
			a = numerator / (NOD(numerator, denominator));
			b = denominator / (NOD(numerator, denominator));
			if ((a < 0 && b < 0) || (a > 0 && b < 0)) {
				a *= -1;
				b *= -1;
			}
		}
		else
		{
			cout << "Error" << endl;
			a = 0;
			b = 1;
		}
	}
/*void TFrac::Reduction()
{
	int i = 2;
	do
		if (a%i == 0 && b%i == 0)
		{
			a /= i;
			b /= i;
		}
		else
			i++;
	while (i <= a && i <= b);
}*/
int TFrac::NOD(int vl, int v2)
{
	if (vl == 0 || v2 == 0) return 1;
	while (v2)
	{
		int temp = v2;
		v2 = vl%v2;
		vl = temp;
	}
	//cout << vl<<endl;
	return abs(vl);
}
TFrac::TFrac (std::string fraction)
	{
		std::size_t p = fraction.find('/');
		std::string snumerator = fraction.substr(0, p);
		std::string sdenominator = fraction.substr(p + 1);
		if (sdenominator != "0") {
			a = std::stoll(snumerator);
			//cout << a << "aaaa" << endl;
			b = stoll(sdenominator);
			int c = NOD(a, b);
			a /= c;
			b /= c;
			if ((a < 0 && b < 0) || (a > 0 && b < 0)) {
				a *= -1;
				b *= -1;
			}
		}
		else
		{
			cout << "oshibka" << endl;
			a = 0;
			b = 1;
		}
		//Reduction();
	}
	long long TFrac::fromSToLL(std::string str) {
		long long c = 0; int n = str.size();
		for (int i = 0; i < n; i++) {
			c += (str.at(n - i - 1) - '0') * pow(10, i);
		}
		return c;
	}
	void TFrac::CopyTFrac()
	{
		TFrac copy(a,b);
	}
	TFrac TFrac::SummTFrac(TFrac d)
	{
		 TFrac summ((a*d.b + b*d.a), (b * d.b));
		 return summ;
	}
	TFrac TFrac::MultiplyTFrac(TFrac d)
	{
		TFrac Multiply((a*d.a), (b*d.b));
		return Multiply;
	}
	TFrac TFrac::SubtractTFrac(TFrac d)
	{
		TFrac sub((a*d.b - d.a*b),(b*d.b));
		return sub;
	}
	TFrac TFrac::DelTFrac(TFrac d)
	{
			TFrac del((a*d.b), (d.a*b));
			return del;
	}
	TFrac TFrac::SquareTFrac()
	{
		TFrac square(a*a, b*b);
		return square;
	}
	TFrac TFrac::ReverseTFrac()
	{
		TFrac reverse(b,a);
		return reverse;
	}
	TFrac TFrac::MinusTFrac()
	{
		TFrac minus((-a), (b));
		return minus;
	}
	bool TFrac::EqualityTFrac(TFrac d)
	{
		if ((a*d.b) == (d.a*b)) return true;
		else return false;
	}
	bool TFrac::LargerTFrac(TFrac d)
	{
		if ((a*d.b) > (d.a*b)) return true;
		else return false;
	}
	float TFrac::GetNumerator()
	{
		return a;
	}
	float TFrac::GetDenominator()
	{
		return b;
	}
	string TFrac::GetNum()
	{
		return to_string(a);
	}
	string TFrac::GetDenom()
	{
		return to_string(b);
	}
	string TFrac::GetFraction()
	{
		if (a == 0) return "0";
		string s;
		s += to_string(a);
		s += '/';
		s += to_string(b);
		return s;
	}
	TFrac TFrac::operator + (TFrac d) 
	{
		return SummTFrac(d);
	}
	TFrac TFrac::operator - (TFrac d)
	{
		return SubtractTFrac(d);
	}
	TFrac TFrac::operator * (TFrac d)
	{
		return MultiplyTFrac(d);
	}
	TFrac TFrac::operator / (TFrac d)
	{
		return DelTFrac(d);
	}

