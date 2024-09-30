#include<iostream>
using namespace std;

class Distance
{
	int feet;
	float inches;
public:
	void getdist()
	{
		cin >> feet >> inches;
	}
	void showdist()
	{
		cout << feet << inches;
	}
	int adddist(Distance d1, Distance d2) {
		d1.feet = d1.feet + d2.feet;
		d1.inches = d1.inches + d2.inches;
		if (d1.inches >= 12.0)
		{
			d1.inches -= 12.0;
			d1.feet++;
			return (d1.feet, d1.inches);
		}
		
	}
	int subdist(Distance d1, Distance d2)
	{
		d1.feet = d1.feet - d2.feet;
		d1.inches = d1.inches - d2.inches;
		if (d1.inches < 0)
		{
			d1.inches += 12.0;
			d1.feet--;
		}
		return (d1.feet, d1.inches);
	}
};
int main()
{
	Distance d1, d2;
	cout << "Enter first distance : ";
	d1.getdist();
	cout << "Enter second distance : ";
	d2.getdist();
	int addist = d1.adddist(d1, d2);
	cout << "Distance added" << addist;
	int subbdist = d1.subdist(d1, d2);
	cout << "Distance Subtracted" << subbdist;
	return 0;
}