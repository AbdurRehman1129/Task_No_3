#include<iostream>
using namespace std;

class Blood_Pressure
{
private:
	int upperBP;
	int lowerBP;
public:
	Blood_Pressure(int u = 0, int l = 0)
	{
		upperBP = u;
		lowerBP = l;
	}
	void set_uBP(int upperBP)
	{
		this->upperBP = upperBP;
	}
	void set_lBP(int lowerBP)
	{
		this->lowerBP = lowerBP;
	}
	int get_uBP()
	{
		return upperBP;
	}
	int get_lBP()	
	{
		return lowerBP;
	}

};

class Patient
{
private:
	Blood_Pressure BP;
	string name;
public:
	Patient(string n = "")
	{
		name = n;
	}
	void inputDetails()
	{
		int u, l;
		cout << "Enter patient name : ";
		cin >> name;
		cout << "Enter upper BP : ";
		cin >> u; 
		BP.set_uBP(u);
		cout << "Enter lower BP : ";
		cin >> l;
		BP.set_lBP(l);
	}
	void checkBP() 
	{
		if (BP.get_uBP() == 120 && BP.get_lBP() == 80)
		{
			cout << "\n"<<name<< "'s BLOOD PRESSURE IS NORMAL"<<endl;
		}
		else
		{
			cout << "\n"<<name<< "'s BLOOD PRESSURE IS NOR NORMAL"<<endl;
		}
	}
};

int main()
{
	Patient patient;
	patient.inputDetails();
	patient.checkBP();
	return 0;
}