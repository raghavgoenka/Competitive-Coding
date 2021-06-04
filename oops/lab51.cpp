#include<iostream>
#include<math.h>
using namespace std;
class shape
{
    protected:
        double area,perimeter;
    public :
        shape (){};
        virtual void initialize()=0;
        virtual void computearea()=0;
        virtual void  computeperimeter()=0;
        virtual void display()=0;
        virtual ~shape() {};

};
class Triangle :public shape{
    double a,b,c;
    public :
        void initialize()
        {
            cout <<"Enter the three sides of triangle"<<endl;
            cin >>a>>b>>c;
        }
        void computearea()
        {
            float  s;
            s = (a+b+c)/2;
            s=s*(s-a)*(s-b)*(s-c);
            area = sqrt(s);
        }
        void computeperimeter()
        {
            perimeter = (a+b+c);
        }
        void display()
        {
            cout << "The Area of the traingle  = "<<area<<endl;
            cout << "The perimeter of the triangle = "<<perimeter <<endl;
        }
};
class Rectangle : public shape{
    double d,e;
    public :
        void initialize()
        {
            cout <<"Enter the length and breadth of the rectangle"<<endl;
            cin >> d >>e;
        }
        void computearea()
        {
            area  = d*e;
        }
        void computeperimeter()
        {
            perimeter = 2 * ( d+e);
        }
        void display()
        {
            cout <<"The Area of the Rectangle = "<<area <<endl;
            cout <<"The perimeter of the Rectangle = "<<perimeter<<endl;
        }
};
int main()
{
    shape *s[3];
    int ch;
    for (int i=0;i<3;i++)
    {
        cout <<"1.Triangle\n2.Rectangle\nPick the shape: \n";
        cin >> ch;
        if (ch == 1)
        {
            s[i] = new Triangle();
            s[i] -> initialize();
            s[i]->computearea();
            s[i] ->computeperimeter();
        }
        else
        {
            s[i] = new Rectangle();
            s[i] -> initialize();
            s[i]->computearea();
            s[i] ->computeperimeter();
        }
        
    }
    for (int j=0;j<3;j++)
        {
            s[j]->display();
        }
return 0;
}