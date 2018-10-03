#pragma once
#include <string>
using namespace std;
class TFrac
{
private:
	int a, b;
	int NOD(int, int);
public:
	TFrac(int, int);
	TFrac(std::string);
	long long fromSToLL(std::string);
	//void Reduction();
	void CopyTFrac();
	TFrac SummTFrac(TFrac d);
	TFrac MultiplyTFrac(TFrac d);
	TFrac SubtractTFrac(TFrac d);
	TFrac DelTFrac(TFrac d);
	TFrac SquareTFrac();
	TFrac ReverseTFrac();
	TFrac MinusTFrac();
	bool EqualityTFrac(TFrac d);
	bool LargerTFrac(TFrac d);
	float GetNumerator();
	float GetDenominator();
	string GetNum();
	string GetDenom();
	string GetFraction();
	TFrac operator + (TFrac);
	TFrac operator - (TFrac);
	TFrac operator * (TFrac);
	TFrac operator / (TFrac);
};
