#include<iostream>
using namespace std;

class calcu 
{
	int sum,sub,multiply,div;
	public:


   		calcu(int a, int b) 
   		{
       		sum = a + b;
       		sub = a - b;
       		multiply = a * b;
       		div = a / b;
   		}

   		void display() 
		{
       		cout<<"sum is : "<<sum<<endl;
       		cout<<"Difference is :"<<sub<<endl;
       		cout<<"Multiplication is :"<<multiply<<endl;
       		cout<<"Division is :"<<div<<endl;
   		}
};

main() 
{

   int a, b;

   cout<<"Enter two numbers:";
   cin>>a>>b;

   calcu obj(a, b);
   obj.display();

}
