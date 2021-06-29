#include<iostream>
#include<cstring>
#include<string>
using namespace std;

template<class T> class stack{
    T arr[20];
    int top;
    public:
        stack(){
            top = -1;
        }
        void push(T ele){
            arr[++top] = ele;
        }
        T pop(){
            return arr[top--];
        }
        bool isEmpty(){
            return top == -1 ? true : false;
        }
        T tp(){
            return arr[top];
        }
};
int main(){
    char *st = new char[15];
    strcpy(st,"raghav");
    stack<char> ss;
    for(int i=0; i<strlen(st); i++){
        ss.push(st[i]);
    }
    while(ss.isEmpty() == false){
        cout << ss.tp();
        ss.pop();
    }
    cout << endl;
    return 0;
}