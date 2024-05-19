#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double A=100;
	double B=2001.5251;
	double c=201455.2646;
	 
	cout<<hex<<left<<showbase<<nouppercase;
	cout<<(long long)A<<endl;
	
	cout<<setbase(10)<<right<<setw(15)
	     <<setfill('_')<<showpos
	     <<fixed<<setprecision(2);
	     
    
    cout<<B<<endl;
    
    cout<<scientific<<uppercase
        <<noshowpos<<setprecision(9);
		
	cout<<c<<endl;
    
}
