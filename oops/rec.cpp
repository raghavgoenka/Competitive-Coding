#include<iostream>
using namespace std;
class Rectangle
{
    int length,breadth;
    int area;
    public: Rectangle(){
        length=0;
        breadth=0;
        area=0;
        cout<<"Default constructor\n";
    }
    Rectangle(int a,int b=1);
    int computeArea();
    int computePerimeter();
    Rectangle& setDimensions(const int &len,const int bre=1);
};

Rectangle::Rectangle(int l,int b):length(l),breadth(b),area(l*b)
{
    cout<<"Inside parameterised constructor\n";
}

int Rectangle::computeArea()
{
    area=length*breadth;
    return area;
}
int Rectangle::computePerimeter()
{
    return 2*(length+breadth);
}
Rectangle& Rectangle::setDimensions(const int &len,const int bre){
    cout<<"Inside set Dimension function\n";
    length=len;
    breadth=bre;
    return *this;
}
int main()
{
    Rectangle *r1=new Rectangle();
    Rectangle *r2=new Rectangle(1,2);
    Rectangle *r3=new Rectangle(3);
    Rectangle &r4=r1->setDimensions(4);
    cout<<"r1:area and perimeter "<<r1->computeArea()<<" "<<r1->computePerimeter()<<"default constructor";
    cout<<"\nr1:area and perimeter "<<r4.computeArea()<<" "<<r4.computePerimeter()<<"setdimension";
    cout<<"\nr2:area and perimeter "<<r2->computeArea()<<" "<<r2->computePerimeter()<<"parameterised constructor";
  
    cout<<"\nr3:area and perimeter "<<r3->computeArea()<<" "<<r3->computePerimeter()<<"parameterised constructor";
    delete r1,r2,r3;
    return 0;
}