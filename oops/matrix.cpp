#include<iostream>
using namespace std;
class matrix{
    int arr[100][100];
    int row;
    int col;
    public:
    matrix()
    {
        row=0;col=0;
    }
    matrix(int r,int c)
    {
        row=r;
        col=c;
        
    }
    void input();
    bool operator==(matrix &m);
    matrix operator+(matrix &m);
    matrix operator-(matrix &m);
    friend ostream& operator<<(ostream& out,matrix& m);
    
};
void matrix::input()
    {
        cout<<"Enter the elements"<<endl;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                cin>>arr[i][j];
            }
        }
    }
bool matrix::operator==(matrix &m)
    {
        if(row==m.row && col==m.col)
        {
            return true;
        }
        return false;
    }
matrix matrix::operator+(matrix &m)
    {
        matrix m1;
        m1.row=m.row,m1.col=m.col;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
              m1.arr[i][j]=arr[i][j]+m.arr[i][j];
            }
        }
        return m1;
    }
matrix matrix::operator-(matrix &m)
    {
        matrix m1;
        m1.row=m.row,m1.col=m.col;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                m1.arr[i][j]=arr[i][j]-m.arr[i][j];
            }
        }
        return m1;
    }
ostream& operator<<(ostream& out,matrix& m)
{
    for(int i=0;i<m.row;i++)
    {
        for(int j=0;j<m.col;j++)
        {
            out << m.arr[i][j]<<" ";
        }
        out << endl;
    }
    return out;
}
int main()
{
    int r,c;
    cout<<"Enter the number of rows and columns"<<endl;
    cin>>r>>c;
    matrix m1(r,c);
    m1.input();
    cout<<"Enter the number of rows and columns"<<endl;
    cin>>r>>c;
     matrix m2(r,c);
    m2.input();
     if(m1==m2)
     {
         matrix m3,m4;
         m3=m1+m2;
         m4=m1-m2;
         cout<<"Matrix obtained after addition\n";
         cout<<m3;
         cout<<"Matrix obtained after addition\n";
         cout<<m4;
     }
     else{
         cout<<"They are not compatible\n";
     }
     return 0;
    
}