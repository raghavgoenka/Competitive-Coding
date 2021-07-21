#include <bits/stdc++.h>
using namespace std;

vector<pair<int,double>> ratios;
 
template<class T> int maximum(){
    T ans = 0;
    int index;
    for(auto it : ratios){
        if(it.second>ans){
            ans = it.second;
            index = it.first;
        }
    }
    return index;
}

class Car{
    protected:
        int initial, final, price;
        double fuel;
        double mileage, fuel_effi, ratio;
        string name;
    public:
        Car(){};
        void initialize(){
            cout << "\nEnter the name of the car: ";
            cin >> name;
            cout << "Enter the initial odometer reading of the car: ";
            cin >> initial;
            cout << "Enter the amount of fuel used (in litres): ";
            cin >> fuel;
            cout << "Enter the final odometer reading of the car: ";
            cin >> final;
            cout << "Enter the price of the car: ";
            cin >> price;
        }
        virtual void compute(int i)=0;
        friend ostream &operator<<(ostream &os,Car &s1);
        ~Car(){};
};

class petrolCar : public Car{
    
    public:
        void compute(int i){
            fuel_effi = fuel - (double)(fuel*2/100);
            mileage = (double)(final - initial)/fuel_effi;
            ratio = mileage/ (double)price;
            ratios.push_back({i,ratio});

}
};

class dieselCar : public Car{
   
    public:
        void compute(int i){
            fuel_effi = fuel - (double)(fuel*4/100);
            mileage = (double)(final - initial)/fuel_effi;
            ratio = mileage/ (double)price;
            ratios.push_back({i,ratio});
          
        }
};

ostream &operator<<(ostream &os,Car &car) { 
    cout << "\n      " << car.name << endl;
    cout << endl;
    cout << "---------------------" << endl;
    cout << "      Details" << endl;
    cout << "---------------------" << endl;
    if(typeid(car) == typeid(petrolCar)){
        cout << "Type of fuel: Petrol" << endl;
        cout << "Price: " << car.price << endl;
        cout<<"Mileage: "<<car.mileage<<endl;

    }
    
    else{
        cout << "Type of fuel: Diesel" << endl;
        cout << "Price: " << car.price << endl;
        cout<<"Mileage: "<<car.mileage<<endl;
    }
    return os;
} 

int main(){
    cout << "\nEnter the number of cars that you tested: ";
    int n; cin >> n;
    Car *car[n];
    int ch;
    for(int i=0; i<n; i++){
        cout << "\nEnter '1' for a Petrol Car\nEnter '2' for a Diesel Car\n";
        cin>> ch;
        if(ch == 1){
            car[i] = new petrolCar();
            car[i]->initialize();
            car[i]->compute(i);
        }
        else if(ch == 2){
            car[i] = new dieselCar();
            car[i]->initialize();
            car[i]->compute(i);
        }
        else{
            cout << "Invalid input\n";
        }
    }
    int index = maximum<int>();
    cout << "\n---------------------" << endl;
    cout << "THE BEST CAR AMONG " << n << endl;
    cout << "---------------------" << endl;
    cout << *car[index] << endl;
    return 0;
}