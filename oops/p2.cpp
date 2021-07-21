#include <bits/stdc++.h>
#include <string>
using namespace std;
#define N 1000
class data_of_passenger
{
public:
    vector<string> passengerName;
    vector<string> source;
    vector<string> destination;
    vector<int> age;
    vector<int> pnr;
    vector<int> coach_number;
    vector<int> seat_number;
    vector<bool> status;
    int count = 1000;
    void booking_unsuccessful(string name, int age_num)
    {
        cout << "2 Arg constructor called" << endl;
        this->passengerName.push_back(name);
        this->age.push_back(age_num);
        this->pnr.push_back(count);
        this->status.push_back(false);
        this->coach_number.push_back(0);
        this->seat_number.push_back(0);
        count++;
    }
    void booking_successful(string source_name, string destination_name, string name, int age_num, int coachNumber, int seatNumber)
    {
        this->passengerName.push_back(name);
        this->source.push_back(source_name);
        this->destination.push_back(destination_name);
        this->age.push_back(age_num);
        this->pnr.push_back(count);
        this->status.push_back(true);
        this->coach_number.push_back(coachNumber);
        this->seat_number.push_back(seatNumber);
        this->count++;
    }
};
// INHERITANCE
class Train : public data_of_passenger
{
protected:
    string trainName;
    int trainCoaches[15] = {72};

public:
    bool is_vacant()
    {
        for (int i = 0; i < 10; i++)
        {
            if (trainCoaches[i] > 0)
            {
                return true;
            }
        }
        return false;
    }
    int vacant_coach()
    {
        for (int i = 0; i < 10; i++)
        {
            if (trainCoaches[i] > 0)
                return i;
        }
        return 0;
    }
    int vacant_seat()
    {
        for (int i = 0; i < 10; i++)
        {
            if (trainCoaches[i] > 0)
            {
                int seat_num = trainCoaches[i];
                trainCoaches[i]--;
                return seat_num;
            }
        }
        return 0;
    }
    void trainMenu()
    {
        cout << "******TRAIN BOOKING SECTION******" << endl;
        cout << "1. Book Ticket" << endl;
        cout << "2. Print Ticket" << endl;
        cout << "3. PNR Status" << endl;
        cout << "4. Seat Type" << endl;
        cout << "5. Exit" << endl;
    }
    void book_train_ticket()
    {
        string name, source, destination;
        int age, coachNumber, seatNumber;
        cout << "Enter Source : ";
        cin >> source;
        cout << "Enter Destination : ";
        cin >> destination;
        cout << "Enter your name : ";
        cin >> name;
        cout << "Enter age : ";
        cin >> age;
        if (is_vacant())
        {
            coachNumber = vacant_coach();
            seatNumber = vacant_seat();
            cout << "-----------------------------" << endl;
            cout << "*******BOOKING DETAILS*******" << endl;
            cout << "-----------------------------" << endl;
            cout << "*******SEAT CONFIRMED*******" << endl;
            cout << "Source : " << source << " -----> Destination : " << destination << endl;
            cout << "Coach Number : " << coachNumber << endl;
            cout << "Seat Number : " << seatNumber << endl;
            cout << "PNR Number : " << count << endl;
            cout << "Name : " << name << endl;
            cout << "Age : " << age << endl;
            booking_successful(source, destination, name, age, coachNumber, seatNumber);
        }
        else
            booking_unsuccessful(name, age);
    }
    void print_train_ticket()
    {
        int pnr_number;
        cout << "Enter your PNR : ";
        cin >> pnr_number;
        cout << "******TICKET******" << endl;
        cout << "PNR NUMBER : " << pnr_number << endl;
        pnr_number -= 1000;
        cout << "Source : " << source[pnr_number] << " -----> Destination : " << destination[pnr_number] << endl;
        cout << "Passenger Name : " << passengerName[pnr_number] << endl;
        cout << "Age : " << age[pnr_number] << endl;
        cout << "Coach Number : " << coach_number[pnr_number] + 1 << endl;
        cout << "Seat Number : " << seat_number[pnr_number] << endl;
    }
    void pnr_status()
    {
        int pnr_number;
        cout << "Enter your PNR : ";
        cin >> pnr_number;

        if (pnr_number > 999 && pnr_number < count)
        {
            pnr_number -= 1000;
            if (status[pnr_number] == true)
                cout << "Seat Confirmed" << endl;
            else
                cout << "Waiting" << endl;
        }
        else
            cout << "Invalid PNR" << endl;
    }
    void berth_type(int s)
    {
        std::cout << std::fixed;
        std::cout << std::setprecision(2);
        if (s > 0 && s < 73)
            if (s % 8 == 1 ||
                s % 8 == 4)
                cout << s << " is a lower berth\n";

            else if (s % 8 == 2 ||
                     s % 8 == 5)
                cout << s << " is a middle berth\n";

            else if (s % 8 == 3 ||
                     s % 8 == 6)
                cout << s << " is a upper berth\n";

            else if (s % 8 == 7)
                cout << s << " is a side lower berth\n";

            else
                cout << s << " is a side upper berth\n";

        else
            cout << s << " invalid seat number\n";
    }
    void seat_type()
    {
        int seat;
        cout << "Enter your Seat Number : ";
        cin >> seat;
        berth_type(seat);
    }
    void Select()
    {
        int choice = 0;

        while (1)
        {
            trainMenu();
            cout << "Enter choice : " << endl;
            cin >> choice;
            switch (choice)
            {
            case 1:
                book_train_ticket();
                break;
            case 2:
                print_train_ticket();
                break;
            case 3:
                pnr_status();
                break;
            case 4:
                seat_type();
                break;
            case 5:
                exit(0);
                break;
            }
        }
    }
};
int main()
{
    Train Rajdhani;
    Rajdhani.Select();
    return 0;
}