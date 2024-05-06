#include<iostream>
#include<iomanip>
using namespace std;

class movie
{
	private:
		char movie_name[100];
		float adultp;
		float childp;
		int no_adp;
		int no_chdp;
		float grossper;
		float amt;
		int total;
		float amtd;
		float net;
	public:
		void getdata()
		 {
		 	 cout<<"Enter Movie name:-";
		 	 cin.getline(movie_name,100);
		 	 cout<<endl;
		 	 cout<<"Adult ticket price:-";
		 	 cin>>adultp;
		 	 cout<<endl;
		 	 cout<<"child ticket price:-";
		 	 cin>>childp;
		 	 cout<<endl;
		 	 cout<<"number of adult ticket sold :";
		 	 cin>>no_adp;
		 	 cout<<endl;
		 	 cout<<"number of child ticket sold :";
		 	 cin>>no_chdp;
		 	 cout<<endl;
		 	 cout<<"percentage of the gross amount tp be donated:";
		 	 cin>>grossper;
		 	 cout<<endl;
		 }
		
		void display()
		{
			getdata();
			total=no_adp+no_chdp;
			amt=(adultp*no_adp)+(childp*no_chdp);
			amtd=grossper*amt/100;
			net=amt-amtd;
			
			cout<<"Movie Name: "<<right<<setw(30)<<setfill('.')<<movie_name<<endl;
			cout<<"Number of tickets sold: "<<setbase(10)<<right<<setw(15)<<setfill('.')<<setprecision(2)<<total<<endl;
			cout<<"Gross Amount: "<<setbase(10)<<right<<setw(25)<<setfill('.')<<fixed<<setprecision(2)<<amt<<endl;
			cout<<"Percentege of gross amount donated: "<<setw(10)<<right<<setprecision(2)<<grossper<<"%"<<endl;
			cout<<"Amount donated:- "<<setbase(10)<<right<<setw(15)<<setfill('.')<<setprecision(2)<<amtd<<endl;
			cout<<"Net sale"<<setbase(10)<<right<<setw(25)<<setfill('.')<<setprecision(2)<<net<<endl;
		}
		Movie()
		{
			display();
		} 
};
int main()
{
	movie m;
	return 0;
}
