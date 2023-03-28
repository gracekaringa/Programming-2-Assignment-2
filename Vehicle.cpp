#include <iostream>
#include <string>
using namespace std;

class Vehicle{
    private:
    string make;
    string model;
    string engine_number;
    double sale_price;

    public:
    void set_vehicle(string mk, string md, string en, double sp){
        make=mk;
        model=md;
        engine_number=en;
        sale_price=sp;
    }
            double get_profit(){
                return 0.15*sale_price;
            }
        };

        int main(){
            Vehicle car;
            car.set_vehicle("Nissan", "Sunny", "123456789", 20000.0);
            cout<<"Profit:"<<car.get_profit()<<endl;

            return 0;
        }


