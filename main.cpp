#include <iostream>
#include <fstream>
#include <iomanip>
#include <windows.h>

using namespace std;

void menu();

class Customers
{
public:
    string name, gender, address;
    int age, mobileNo, cusID;
    char all[999];

    void deDetails()
    {
        ofstream out("old-customers.txt", ios::app);
        {
            cout <<"Enter Customer ID: ";
            cin >>cusID;
            cout <<"Enter your name: ";
            cin >>name;
            cout <<"Enter Age: ";
            cin >> age;
            cout << "Enter Mobile Number: ";
            cin>> mobileNo;
            cout<<"Enter Address: ";
            cin>>address;
            cout<<"Enter Gender: ";
            cin>> gender;
        }
        out << "\nCustomer ID: " << cusID << "\nName: " << name << "\nAge: " << age << "\nMobile Number: " << mobileNo << "\Address: " << address << "\nGender: "<<gender<< endl;
        out.close();
        cout <<"\nSaved \Note: we save your details record for future purpose\n" << endl;
    }
    void showDetails()
    {
        ifstream in("old-customers.txt");
        {
            if(!in)
            {
                cout << "Rile error!" << endl;
            }
            while(!(in.eof()))
            {
                in.getline(all,999);
                cout << all << endl;
            }
            in.close();
        }
    }

};

class Cabs
{
public:
    int cabChoice;
    int kilometers;
    float cabCost;
    float lastCabCost;

    void cabDetails()
    {
        cout << "We collaborated with fastest, safest, and smartest cab service around the country" << endl;
        cout << "-----------ABC Cabs-----------\n" << endl;
        cout << "1. Rent a Standard Cab - Rs.15 for 1KM" << endl;
        cout << "2. Rent a Luxury Cab - Rs.25 per 1KM" << endl;


        cout << "\nTo calculate the cost for your journey: " << endl;
        cout << "Enter which kind of cab you need: ";
        cin >> cabChoice;
        cout << "Enter kilometers you have to travel: ";
        cin >> kilometers;

        int hireCab;

        if(cabChoice == 1){
            cabCost = kilometers * 15;
            cout << "\nYour tour cost "<< cabCost << "rupees fro a standard Cab"<< endl;
            cout <<"press 1 to hire this cab : or";
            cout << "Press 2 to select another cab: ";
            cin >> hireCab;
            system("CLS");

            if(hireCab == 1){
                lastCabCost = cabCost;
                cout << "\n You have successfully hired a standard cab" << endl;
                cout << "Goto Menu and take receipt" <<endl;
            }
            else if(hireCab ==  2)
            {
                cabDetails();
            }
            else{
                cout << "INvalid Input! Redirecting to previous menu \nPlease wait!" << endl;
                Sleep(999);
                system("CLS");
                cabDetails();
            }

        }

        else if(cabChoice == 2){
                cabCost = kilometers * 15;
            cout << "\nYour tour cost "<< cabCost << "rupees fro a standard Cab"<< endl;
            cout <<"press 1 to hire this cab : or";
            cout << "Press 2 to select another cab: ";
            cin >> hireCab;
            system("CLS");

            if(hireCab == 1){
                lastCabCost = cabCost;
                cout << "\n You have successfully hired a standard cab" << endl;
                cout << "Goto Menu and take receipt" <<endl;
            }
            else if(hireCab ==  2)
            {
                cabDetails();
            }
            else{
                cout << "INvalid Input! Redirecting to previous menu \nPlease wait!" << endl;
                Sleep(999);
                system("CLS");
                cabDetails();
            }

        }
        else{
            cout << "Invalid Input! Redirecting to Main Menu \nPlease wait!" << endl;
            Sleep(1100);
            system("CLS");
            menu();
        }

        cout<<"\nPress 1 to redirect Main Menu";
        cin >> hireCab;
        system("CLS");
        if(hireCab == 1){
            menu();
        }
        else{
            menu();
        }



    }

};

class Booking
{
public:
    int choiceHotel;
    int packChoice1;
    int gotoMenu;
    float hotelCost;

    void hotels()
    {
        string hotelNo[] = {"Avendra", "ChoiceYou", "ElephantBay"};
        for(int a = 0; a < 3; a++){
            cout << (a+1) << ".Hotel" << hotelNo[a] <<endl;
        }

        cout << "\nCurrently we collaborated with above hotels!" << endl;

        cout << "Press any key to back or\nEnter Number of the hotel you want to book or see details: ";
        cin >> choiceHotel;

        system("CLS");


            if(choiceHotel == 1){
            cout << "-------WELCOME TO HOTEL AVENDRA-------\n" << endl;

            cout << "The Garden, food and beverage. Enjoy all you can drink, Stay cool and get chilled in the summer sun." << endl;

            cout << "Packages offered by Avendra:\n" << endl;

            cout << "1. Standard Pack" << endl;
            cout << "\tAll basic facilities you need just for: Rs.5000.00" << endl;
            cout << "2. Premium Pack" << endl;
            cout << "\tEnjoy Premium: Rs.10000.00" << endl;
            cout << "3. Luxury Pack" << endl;
            cout << "\tLive a Luxury at Avendra: Rs.15000.00" << endl;


            cout << "\nPress another key to back or\nEnter Package number you want to book: ";
            cin >> packChoice1;

            if (packChoice1 == 1){
                hotelCost = 5000.00;
                cout << "\nYou have successfully booked Standard Pack at Avendra" << endl;
                cout << "Goto Menu and take the receipt" << endl;
            }
            else if (packChoice1 == 2){
                hotelCost = 10000.00;
                cout << "\nYou have successfully booked Premium Pack at Avendra" << endl;
                cout << "Goto Menu and take the receipt" << endl;
            }
            else if (packChoice1 == 3){
                hotelCost = 15000.00;
                cout << "\nYou have successfully booked Luxury Pack at Avendra" << endl;
                cout << "Goto Menu to take the receipt" << endl;
            }
            else{
                cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
                Sleep(1100);
                system("CLS");
                hotels();

            }

            cout << "\nPress 1 to Redirect Main Menu: ";
            cin >> gotoMenu;
            system("CLS");
            if(gotoMenu == 1){
                menu();
            }
            else{
                menu();
            }

            }

            else if(choiceHotel == 2){
            cout << "-------WELCOME TO HOTEL CHOICEYOU-------\n" << endl;

            cout << "Swimming Pool | Free WiFi | Family Rooms \n Fitness Center | Restaurant & Bar" << endl;

            cout << "Packages Offered by ChoiceYou:\n" << endl;

            cout << "1. Family Pack" << endl;
            cout << "\t Rs.15000.00 for a day" << endl;
            cout << "2. Couple Pack" << endl;
            cout << "\t Rs.10000.00 for a day" << endl;
            cout << "3. Single Pack" << endl;
            cout << "\t 5000.00 for a day" << endl;

            cout << "\nPress another key to back or\nEnter Package number you want to book: ";
            cin >> packChoice1;

            if (packChoice1 == 1){
                hotelCost = 15000.00;
                cout << "You have successfully booked Family Pack at ChoiceYou" << endl;
                cout << "Goto Menu and take the receipt" << endl;
            }
            else if (packChoice1 == 2){
                hotelCost = 10000.00;
                cout << "You have successfully booked Couple Pack at ChoiceYou" << endl;
                cout << "Goto Menu and take the receipt" << endl;
            }
            else if (packChoice1 == 3){
                hotelCost = 5000.00;
                cout << "You have successfully booked Single Pack at ChoiceYou" << endl;
                cout << "Goto Menu and take the receipt" << endl;
            }
            else{
                cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
                Sleep(1100);
                system("CLS");
                hotels();
            }

            cout << "\nPress 1 to Redirect Main Menu: ";
            cin >> gotoMenu;
            system("CLS");
            if(gotoMenu == 1){
                menu();
            }
            else{
                menu();
            }
        }

        else if(choiceHotel == 3){
            cout << "-------WELCOME TO HOTEL ELEPHANTBAY-------\n" << endl;
            cout << "Set in tropical gardens on the banks of the Maha Oya river While Seeing Elephants" << endl;
            cout << "Amazing offer in this summer: Rs.5000.00 for a one day!!!" << endl;

            cout << "\nPress another key to back or\nPress 1 to book this special package: ";
            cin >> packChoice1;

            if (packChoice1 == 1){
                hotelCost = 5000.00;
                cout << "You have successfully booked ElephantBay Special Pack" << endl;
                cout << "Goto Menu and take the receipt" << endl;
            }
            else{
                cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
                Sleep(1100);
                system("CLS");
                hotels();
            }
            cout << "\nPress 1 to Redirect Main Menu: ";
            cin >> gotoMenu;
            system("CLS");
            if(gotoMenu == 1){
                menu();
            }
            else{
                menu();
            }
        }
        else{
            cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
            Sleep(1100);
            system("CLS");
            menu();
        }
    }
};

class Charges
{

};

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
