#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
class VectorEg
{
    int n;
    vector<int> v = {1, 2, 3, 4, 5, 6};
    

public:
    void read();
    void display();
    void size();
    void emptyCheck();
    void erase();
    void elementIndex();
};
void VectorEg::display()
{
    cout << "Elements in vector v are : ";
    for (auto const &vec : v)
        cout << vec << " ";
    cout << endl;
}
void VectorEg::read()
{
    cout << "Enter number of elements to be inserted : ";
    cin >> n;
    cout << "Enter Elements : ";
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        v.push_back(num);
    }
}
void VectorEg::size()
{
    cout << "The size of vector v is : " << v.size() << endl;
}
void VectorEg::emptyCheck()
{
    if (v.empty())
        cout << "Vector v is empty" << endl;
    else
        cout << "Vector v is not empty" << endl;
}
void VectorEg::erase()
{
    vector<int>::iterator itr;
    itr = v.begin();
    cout << "Enter position to remove a element";
    cin >> n;
    v.erase(itr + n);
}
void VectorEg::elementIndex()
{
    cout << "Enter element to find : ";
    cin >> n;
    vector<int>::iterator it = find(v.begin(), v.end(), n);
    int index = distance(v.begin(), it);
    if (it != v.end())
        cout << "Element Found at index " << index << endl;
    else
        cout << "Element Not Found" << endl;
}
int main()
{
    VectorEg vector1;
    vector1.display();
    vector1.size();
    vector1.emptyCheck();
    vector1.read();
    vector1.display();
    vector1.erase();
    vector1.display();
    vector1.elementIndex();
    return 0;
}