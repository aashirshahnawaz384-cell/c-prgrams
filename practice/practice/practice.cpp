#include<iostream>
#include<string>
using namespace std;
int main()
{
	string day;
	float classtime;
	cout << "Enter class time:" << endl;
	cin >> classtime;
	cout << "Enter day:";
	cin >> day;
	if (day == "monday" && classtime == 8.00)
	{
		cout << "NO classes for monday" << endl;
	}
	if (day == "monday" && classtime == 9.00 || classtime == 10.00 || classtime == 10.55)
	{
		cout << "your class is of ict" << endl;
	}
	if (day =="tuesday" && classtime == 11.00 || classtime == 12.00 || classtime == 1.00 || classtime == 2.00)
	{
		cout << "your class is of basic electronic lab";

	}
	if (day == "tuesday" && classtime == 8.00 || classtime == 9.00 || classtime == 10.00 || classtime == 10.55)
	{
		cout << "your class is of ict lab" << endl;
	}
	if(day=="tuesday"&&classtime==11.00||classtime==12.00||classtime==12.55)
	{
		cout << "your class is of ideology and constitution of pakistan" << endl;
	}
	
}