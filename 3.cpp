#include<iostream>
using namespace std;
class in_line{
	public:
		inline float multi(float x,float y){
		return (x*y);
		}
		inline float cube(float x){
		return (x*x*x);
		}
};
main(){
	in_line obj;
	float value1,value2;
	
	cout<<"Enter 1st value : ";
	cin>>value1;
	cout<<"Enter 2nd value : ";
	cin>>value2;
	cout<<"\nMultiplication value is : "<<obj.multi(value1,value2);
    cout<<"\n\nCube value of value1 is ["<<obj.cube(value1)<<"] and cube value of value2 is ["<<obj.cube(value2)<<" ]\n";
       
}

 
