#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Students
{ private:
    float mk1,mk2,mk3;
	string usn,name;
	public:
		void getStudentdata();
		void displayStudentdata();
};
void Students::getStudentdata(){
	cout << "Enter USN: ";
	cin >> usn;
	cout << "Enter Name: ";
	cin >> name;
	cout << "Enter Marks: ";
    cin>>mk1>>mk2>>mk3;
}
void Students::displayStudentdata()
{float average;
    int minn=mk1;
	if(mk2<minn)
		{minn=mk2;}
	else if(mk3<minn)
		{minn=mk3;}
    float sum=(mk1+mk2+mk3-minn);
	average=(sum)/2.0;
	cout << "USN :" << usn << endl;
	cout << "Name :" << name << endl;
	cout << "Average :" << average << endl;
}

int main()
{
	Students *students;
    int m;
	
    cout << "Enter the number of student: ";
	
    cin >> m;
    students=new Students[m];
	
    for(int i=0;i<m;i++){
		students[i].getStudentdata();
	}
    cout << "Student's data:" << "\n";
	for(int i=0;i<m;i++)
	{
		cout << "Student :" << i+1 << endl;
		students[i].displayStudentdata();
	}	
    

	
	
}