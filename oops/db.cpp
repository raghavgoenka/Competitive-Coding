#include <iostream>
using namespace std;
class DB;
class DM
{
    int met,cent;
    public:void input()
    {
        cout<<"Enter the distance in meters and centimeters"<<endl;
        cin>>met>>cent;
    }
    void disp()
    {
        cout<<"The distance in meters and centimeters"<<endl;
        cout<<met<<" meters "<<cent<<" centimeters ";
    }
    friend void sum(DM&,DB);
    friend void sum(DB&,DM);
};
class DB
{
    int feet,inch;
    public:void input()
    {
        cout<<"Enter the distance in feet and inches"<<endl;
        cin>>feet>>inch;
    }
    void disp()
    {
        cout<<"The distance in feet and inches"<<endl;
        cout<<feet<<" feet " <<inch<<" inches ";
    }
    friend void sum(DM&,DB);
    friend void sum(DB&,DM);
};
void sum(DM &dm,DB db)
{  float x=db.feet*30.48;
    x+=db.inch*2.54;
    int y=x;
    dm.met+=y/100;
    dm.cent+=y%100;
    dm.met+=dm.cent/100;
    dm.cent=dm.cent%100;
}
void sum(DB &db,DM dm)
{   float x=dm.met*39.37;
    x+=dm.cent*0.3937;
    int y=x;
    db.feet+=y/12;
    db.inch+=y%12;
    db.feet+=db.inch/12;
    db.inch=db.inch%12;
}
int  main()
{  DM d1;
    DB d2;
    int ch;
    d1.input();
    d2.input();
    cout<<"Enter 1 to get output in meters and centimeters \n Enter 2 to get output in feet and inches"<<endl;
    cin>>ch;
    if(ch==1)
    {sum(d1,d2);d1.disp();
    }
    else
    {sum(d2,d1);d2.disp();
    }return 0;}

