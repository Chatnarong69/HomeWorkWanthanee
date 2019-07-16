//Program calcurate grade */
#include<iostream>
using namespace std;
int main()
{
	int score;
	cout << "Enter your score (0 - 100): ";
	cin >> score;
	cout << "You get grade : ";
	if (score >= 90 && score <= 100)
	{cout << "A\n";}
	else if (score >= 80 && score <= 89)
	{cout << "B\n";}
	else if (score >= 70 && score <= 79)
	{cout << "C\n";}
	else if (score >= 60 && score <= 69)
	{cout << "D\n";}
	else if (score >= 0 && score <= 59)
	{cout << "F\n";}
	else if (score >= 100)
	{cout << "ERROR!!! FAILED to calculate your score, Please enter your score between 0 - 100\n";}
	return 0;
}