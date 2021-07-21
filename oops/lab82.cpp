#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
class VectorEg
{
    int n;
    vector<int> v{1,2,3,4,5,6};

public:
    
    void display();
    void sortVector();
    void sum();
};
void VectorEg::display()
{
    cout << "Elements in vector v are : ";
    for (auto const &vec : v)
        cout << vec << " ";
    cout << endl;
}

void VectorEg::sortVector()
{
    cout << "Sorted Vector : ";
    sort(v.begin(), v.end(),greater<int>());
    for (auto vec : v)
        cout << vec << " ";
    cout << endl;
}
void VectorEg::sum()
{ 
 cout << "Sum = "
         << accumulate(v.begin(), v.end(), 0);
}
int main() 
{
    VectorEg vector1;
    cout << "Before Sorting" << endl;
    vector1.display();
    cout << "After Sorting" << endl;
    vector1.sortVector();
    vector1.sum();
    return 0;
}