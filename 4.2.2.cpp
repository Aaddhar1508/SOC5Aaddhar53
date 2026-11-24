#include<iostream>
using namespace std;
 class Animal
{
 public:
  virtual void walk()
{
cout<<"animal walks"<<endl;
}
};
class Cow:public Animal
{
 public:
      void walk()
{
 cout<<"cow walks"<<endl;
}
};
int main()
{
Animal *ptr;
Cow c;
ptr=&c;
ptr->walk();
return 0;
}
