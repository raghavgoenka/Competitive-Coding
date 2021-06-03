#include <iostream>
#include <string>
using namespace std;

class Student{
    int usn;
    string name;
    static int objCount;
   public:
    friend void display(const Student&);
    Student(){usn=0; name="raghav"; objCount++;}
    Student(string sname,int n){usn=n; name=sname; objCount++;}
    Student(const Student &arg)
    {
        name=arg.name; 
    usn=arg.usn; 
    objCount++;
    }

    Student& operator=(const Student &rhs){
        usn = rhs.usn;
        name = rhs.name;
        return *this;
    } 
    static int getCount(){return objCount;}
};
int Student::objCount = 0;
void display(const Student& s){
    cout << "USN : " << s.usn << endl;
    cout << "Name : " << s.name << endl;;
}

int main(){
    Student s1,s2;
    Student s3("abc",123);
    s2 = s3;
    
    display(s1);
    display(s2);
    display(s3);
    cout<<"No. of objects created " << Student::getCount() << endl;
    return 0;
}