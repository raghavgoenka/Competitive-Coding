#include <iostream>
#include <string>
using namespace std;

class Player{
private:  
    string name;
    int health;
    int xp;
public:    
    Player(){
        name = "None";
        health = 0;
        xp = 0;
        cout << "default constructor" << endl;
    }
    Player(string n,int h, int x){
        name = n;
        health = h;
        xp = x;
        cout << "constructor with 3 args" << endl;
    }
   Player(Player &p)
   {
       name=p.name;
       health=p.health;
       xp=p.xp;
       cout<<"copy constructor called"<<endl;
   }
    
    string get_name(){
        return name;
    }
    int get_h(){
        return health;
    }
    int get_xp(){
        return xp;
    }
    ~Player(){
        cout << "Destructor called" << endl;
    }
public: 
void display(){
    cout << name<< health <<xp << endl;
}

};




int main()
{
    Player none;
    Player rohan("Rohan",10,3);

   rohan.display();
    Player raghav=rohan;
   raghav.display();
  
    return 0;
}