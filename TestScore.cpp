#include <iostream>
using namespace std;
int main()
{
	int q1;
	int q2;
	int q3;
	int md;
	int fn;


	cout<<"===============QUIZZES============\n";
	cout << "Enter first quizz (10) : ";
	cin >>q1;
	cout << "Enter second quizz (10) : ";
	cin>>q2;
	cout << "Enter third quizz (10) : ";
	cin>>q3;
	cout<<"===============MID-TERM===========\n";
	cout<<"Enter mid-term (40) : ";
	cin>>md;
    cout<<"===============FINAL==============\n";
	cout<<"Enter Final (50) : ";
	cin>>fn;
	float qts;
	qts = static_cast<float>(q1+q2+q3)/3;

	cout<<"Quizz Total : "<<qts<<endl;
	
	cout<<"Mid term : "<<md<<endl;

	cout<<"Final : "<<fn<<endl;
	cout<<"Total : "<<fn+qts+md<<endl;
	cout<<"Your score is : ";
	cout<< (qts >=60 ? "PASS" : "FAIL") << endl;
	return (0);
		
	
	

}