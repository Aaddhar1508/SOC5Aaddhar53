#include<iostream>
using namespace std;
class Calculator
{
public:
int add(int a,int b)
{ 
return a+b;
}
int add(int c,int d,int e)
{
return c+d+e;
}
};
int main()
{
Calculator c;
cout<<"addition is="<<c.add(3,5)<<endl;
cout<<"addition is="<<c.add(6,4,7)<<endl;
return 0;
}
