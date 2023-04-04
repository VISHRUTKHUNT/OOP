#include <iostream>
using namespace std;
template <class T>
swap_numbers(T& m, T& n)
{
    T t;
    t = m;
    m = n;
    n = t;
    
}
  
main()
{
    int a, b;
    a = 10, b = 20;
  
    // Invoking the swap()
    swap_numbers(a, b);
    cout << a << " " << b << endl;
    
}
