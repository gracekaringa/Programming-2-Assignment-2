#include<iostream>
using namespace std;
//base class Computer
class Computer
{
    public:
    //data
    int RAM;
    int storage;
    //functions
    void turnOn()
    {
        cout<<"Computer is turned on"<< endl;
    }
};

//derived class Client
class Client:public Computer
{
    public:
    //data
    int numClients;
    //functions
    void connect()
{
   cout<<"Client is connected to the server"<< endl;
}
};

//derived class Server
class Server : public Computer
{
    public:
    //data
    int numServers;
    //functions
    void server()
    {
        cout<<"Server is serving the clients"<< endl;
    }
};

int main()
{
    //object of class computer
    Computer c;
    c.RAM = 8;
    c.storage = 1000;
    c.turnOn();

    //object of class
}
