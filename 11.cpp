#include<iostream>
using namespace std;
float r_area(float,float);
float t_area(float,float);
float c_area(float);
main()
{
        float l,b,r,bs,h;
        cout<<"Enter length and breadth of rectangle:";
        cin>>l>>b;
        cout<<"Enter base and height of triangle:";
        cin>>bs>>h;
        cout<<"Enter radius of circle:";
        cin>>r;
        
        cout<<"\nArea of rectangle is "<<r_area(l,b);
        cout<<"\nArea of triangle is "<<t_area(bs,h);
        cout<<"\nArea of circle is "<<c_area(r);
}
float r_area(float l,float b)
{
    return(l*b);
}
float t_area(float bs,float h)
{
   return((bs*h)/2);
}
float c_area(float r)
{
    return(3.14*r*r);
}

