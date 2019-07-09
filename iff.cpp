#include<iostream>
using namespace std;
int main()
{
	float h;
	int w;
	float bdm;
	cout <<"Enter Weight(Kilogram) : ";
	cin>> w;
	cout <<"Enter High(Metre) : ";
	cin>> h;
	
	bdm = w/(h*h);
	cout << "Your Body mass index = " << bdm << endl;
	
	
       if( bdm<=18.50)
	   {
       cout<<("                Thin!            \n");
       }
      else if(bdm>=18.51&&bdm<=22.90){
		  cout<<"Normal";
	  }
	  else if(bdm>=.51&&bdm<=22.90){
		  cout<<"Fat Level 1";
	  }

 	
	return 0;
}