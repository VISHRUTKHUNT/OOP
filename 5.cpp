#include<iostream>
using namespace std;
class cricketer{
	public:
	int r1,r2,r3,r4,r5,n_o;
	
		
		void cric()
		{
			cout<<"\n Run in 1st innings : ";
			cin>>r1;
			cout<<"\n Run in 2nd innings : ";
			cin>>r2;
			cout<<"\n Run in 3rd innings : ";
			cin>>r3;
			cout<<"\n Run in 4th innings : ";
			cin>>r4;
			cout<<"\n Run in 5th innings : ";
			cin>>r5;
			cout<<"\n Not out innings : ";
			cin>>n_o;
		}
};
 class Batsman : public cricketer{
 	public:
 		int to_run,best_per,o_i;
 		double aveg;
 		
		void bats()
		{
           to_run = r1+r2+r3+r4+r5;
		   o_i = 5-n_o;	
		   aveg = to_run/o_i;
		   
		   		
		}
		void display(){
			cout<<"\n total run of batsman : "<<to_run;
			cout<<"\n Average score of batsman : "<<aveg;
			
		}
 }; 

main(){
       Batsman obj;
       obj.cric();
       obj.bats();
       obj.display();


}
