#include <bits/stdc++.h>
#include<iostream>

using namespace std;

class Base
{
    virtual void vfun(){} 
};

class Derived:public Base {};

int main()
{
    Base *p1 =  new Derived;
    Derived *p2 = dynamic_cast<Derived*>(p1);
    if(p1 != NULL)
        cout<<"Cast of Base* to Derived* successful.\n";
    else    
        cout<<"Cast unsuccessful.\n";
    cout<<"p1:"<<typeid(*p1).name()<<endl;
    cout<<"p2:"<<typeid(*p2).name()<<endl;
    return 0;
}