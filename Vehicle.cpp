#include <iostream>
#include <string>
using namespace std;

class Vehicle{
    private:
    string make;
    string model;
    string engine_number;
    float sale_price;

    public:
    void set_vehicle(string m, string mod, string en, float sp){
        make = m;
        model = mod;
        engine_number = en;
        sale_price = sp;
    }
            float get_profit(){
                float profit = sale_price * 0.15;
                return profit;
            }
        };

        int main(){
            Vehicle car;
            string make, model, engine_number;
            float sale_price;

            cout<<"Enter the make of the vehicle:";
            cin>>make;
            cout<<"Enter the model of the vehicle:";
            cin>>model;
            cout<<"Enter the engine_number of the vehicle:";
            cin>>engine_number;
            cout<<"Enter the sale price of the vehicle:";
            cin>>sale_price;

            car.set_vehicle(make, model, engine_number,sale_price);
            cout<<"he profit earned frm the profit is:"<<car.get_profit()<<endl;

            return 0;
        }

