#include<iostream>
using namespace std;
class STUDENT
{
    protected:
        int USN,age;
        char name[20];
};
class UGSTUDENT : public STUDENT
{
    int sem;
    double fee,sti;
    public:
    void getdata()
    {
        cout<<"Enter the USN of the student ";
        cin>>USN;
        cout<<"Enter the name of the student ";
        cin>>name;
        cout<<"Enter the age of student ";
        cin>>age;
        cout<<"Enter the semester ";
        cin>>sem;
        cout<<"Enter the fee ";
        cin>>fee;
        cout<<"Enter the stipend ";
        cin>>sti;
    }
    void display()
    {
        cout<<USN<<"\t"<<name<<"\t"<<age<<"\t"<<sem<<endl;
    }
    int getage()
    {return age;}
};
class PGSTUDENT : public STUDENT
{
    int sem;
    double fee,sti;
    public:
    void getdata()
    {
        cout<<"Enter the USN of the student ";
        cin>>USN;
        cout<<"Enter the name of the student ";
        cin>>name;
        cout<<"Enter the age of student ";
        cin>>age;
        cout<<"Enter the semester ";
        cin>>sem;
        cout<<"Enter the fee ";
        cin>>fee;
        cout<<"Enter the stipend ";
        cin>>sti;
    }
    void display()
    {
        cout<<USN<<"\t"<<name<<"\t"<<age<<"\t"<<sem<<endl;
    }
    int getage()
    {return age;}
};
int main()
{
    PGSTUDENT pg[2];
    UGSTUDENT ug[2];
    int ageug=0,agepg=0,i;
    float avgug=0,avgpg=0;
    cout<<"\nEnter Under Graduate students details"<<endl;
	for(i=0;i<2;i++)
	ug[i].getdata();
    cout<<"\n-----UG STUDENT DETAILS-----";
    cout<<"\nUSN\tNAME\tAGE\tSEM"<<endl;
    for(i=0;i<2;i++)
    ug[i].display();
    for(i=0;i<2;i++)
    {
        ageug+=ug[i].getage();
    }
    avgug=ageug/2.0;
    cout<<"\nEnter Post Graduate students details"<<endl;
	for(i=0;i<2;i++)
	pg[i].getdata();
    cout<<"\n-----PG STUDENT DETAILS-----";
    cout<<"\nUSN\tNAME\tAGE\tSEM"<<endl;
    for(i=0;i<2;i++)
    pg[i].display();
    for(i=0;i<2;i++)
    {
        agepg+=pg[i].getage();
    }
    avgpg=agepg/2.0;
    cout<<"Average age of ug students is "<<avgug<<"\nAverage age of pg students is "<<avgpg<<endl;
    return 0;
}