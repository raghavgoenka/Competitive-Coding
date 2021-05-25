#include<iostream>
using namespace std;
class dyn{
    int a;
    int b;
    public :
        dyn()
        {
            
        }
        dyn(int x, int y)
        {
            a = x;
            b = y;
            
        }
        void set (int x,int y) //no use
        {
            a = x;
            b = y;
            
        }
        void getb()
        {
            cout << b;
            
        }
};
int main()
{   dyn pp;
    pp=dyn(1,9);
    pp.getb();
    dyn *p = new dyn[2];
   p[0]=dyn(4, 1);
    p[1]=dyn(4, 5);
    p[1].getb();
    
}