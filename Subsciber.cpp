#include<iostream>
#include <string>
using namespace std;

class Subscriber {
    private:
    string name;
    string phone_number;
    double airtime_amount;
    int bonus_points;

    public:
    Subscriber(string n, string p, double a){
        name=n;
        phone_number=p;
        airtime_amount=a;
        bonus_points=compute_bonuspoints();
    }
    int
    compute_bonuspoints(){
        if(airtime_amount>=2000.00)
        {
            return 500.00;
        }
        else if(airtime_amount>=1000.00 && airtime_amount<2000.00)
        {
            return 300;
        }
        else if(airtime_amount>=500.00 && airtime_amount< 1000.00)
        {
            return 100;
        }
        else if(airtime_amount>=100.00 && airtime_amount< 500.00)
            {
            return 50;
        }
        else {
            return 0;
        }
    }
    void display_info(){
        cout<<name<<":(PHONE NO:"<<phone_number<<"):AWARDED"<<bonus_points<<"BONGA POINTS. STAY WITH SAFARICOM. THE BETTER OPTION!"<<endl;
    }
};

int main(){
    string name,
    phone_number;
    double airtime_amount;
    cout<<"Enter Subscriber name:";
    getline(cin, name);
    cout<<"Enter Phone number:";
    getline(cin, phone_number);
    cout<<"Enter Airtime amount:";
    cin>>airtime_amount;

    Subscriber
    subscriber(name, phone_number,airtime_amount);
    subscriber.display_info();
    return 0;
}
