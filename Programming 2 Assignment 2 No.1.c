#include<iostream>

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
        std::cout<<"Computer is turned on"<<std::end1;
    }
};

//derived class Client
class Client;
public Computer
{
    public:
    /data
    int numClients;
    //functions
    void connect()
{
    std::cout<<"Client is connected to the server"<< std::end1;
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
        std::cout<<"Server is serving the clients"<< std::end1;
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
