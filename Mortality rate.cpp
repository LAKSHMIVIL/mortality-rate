// Mortality rate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

class Illness
{
protected:float d1, pop;
	int MortalityRate;
public:
	void getdeathrate()
	{
		cin >> d1 >> pop;
	}

public:
	virtual int GetMortalityRate() = 0;
};

class Virus :public Illness
{ 
	
public:

	int GetMortalityRate()
	{
		MortalityRate = d1 / pop * 100;

		return MortalityRate;
	}
};

class CovidVirus :public Illness
{
	
public:
	int GetMortalityRate()
	{
		MortalityRate = d1/ pop * 100;

		return MortalityRate;
	}
};

class HivVirus :public Illness
{

public:
	int GetMortalityRate()
	{
		MortalityRate = d1 / pop * 100;

		return MortalityRate;
	}
};

class BirdFlue :public Illness
{
	
public:
	int GetMortalityRate()
	{
		MortalityRate = d1 / pop * 100;

		return MortalityRate;
	}
};

int main()
{
	Virus v1;
	cout<<" enter no of death due to virus and total deaths occured\n";
	v1.getdeathrate();
	cout<< "\nthe mortality rate of several virus infections is\n" << v1.GetMortalityRate();

	CovidVirus v2;
	cout << " \nenter no of death due to covidvirus and total deaths occured\n";
	v2.getdeathrate();
	cout << "\nthe mortality rate of covid virus infections is\n" << v2.GetMortalityRate();

	HivVirus v3;
	cout << " \nenter no of death due to hivvirus and total deaths occured\n";
	v3.getdeathrate();
	cout << "\nthe mortality rate of hiv virus infections is\n" << v3.GetMortalityRate();

	BirdFlue v4;
	cout << "\n enter no of death due to birdflu and total deaths occured\n";
	v4.getdeathrate();
	cout << "\nthe mortality rate of bird flue  infections is\n" << v4.GetMortalityRate();

}