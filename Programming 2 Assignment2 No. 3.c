#include<iostream>

using namespace std;

int main()
{

    string courseName;
    int studentLevel;

    cout<< "University student courses: ICT, Law and Business"<<end1;
    cout<<"What course are you studying?";
    cin>>courseName;

    //Check course name
    if(courseName== "ICT")
    {
        cout<<"What level are you studying? \n 1. Certificate \n 2. Diploma \n 3. Degree (BSC-IT)";
        cin>>studentLevel;

        //Check student level
        if(studentLevel==1)
        {
            cout<<"You are studying a Certificate in ICT"<<end1;
        }
        else if(studentLevel==2)
        {cout<<"You are studying a Diploma in ICT"<<end1;
        }
        else if(studentLevel==3)
        {cout<<"You are studying a Degree in BSC-IT. \n What stage are you in? \n 1. Stage 1 \n 2. Stage \n 3. Stage 3";
        cin>>studentLevel;

        //Check student level
        if(studentLevel==1)
        {
            cout<<"You are in Stage 1 of BSC-IT"<<end1;
        }
        else if(studentLevel==2)
        {
            cout<<"You are in Stage 2 of BSC-IT"<<end1;
        }
        else if(studentLevel==3)
        {
            cout<<"You are in Stage 3 of BSC-IT"<<end1;
        }
        else
        {
            cout<<"Invalid input"<<end1;
        }
        }
        else
        {
            cout<<"Invalid input"<<end1;
        }
    }
    else if(courseName=="Law")
    {
        cout<<"You are studying Law"<<end1;
    }
    else if(courseName=="Business")
    {
        cout<<"You are studying Business"<<end1;
    }
    else
    {
        cout<<"Invalid input"<<end1;
    }

    return 0;
}
