#include <iostream>
#include <string>
using namespace std;

class Voter{
    private:
    string voter_card_id;
    string national_id_number;
    string first_name;
    string middle_name;
    string surname;
    string polling_station;
    string date_of_birth;
    string gender;

    public:
    // Constructor to initialize all member variables
    Voter() : voter_card_id(""), national_id_number(""), first_name(""), middle_name(""), surname(""), polling_station(""), date_of_birth(""), gender("") {}

    // Destructor to clean up memory if needed
    ~Voter() {}

    // Function to set all member variables to their default values
    void reset_voter() {
        voter_card_id = "";
        national_id_number = "";
        first_name = "";
        middle_name = "";
        surname = "";
        polling_station = "";
        date_of_birth = "";
        gender = "";
    }

    // Function to add a new voter
    void add_voter(){
        reset_voter(); // reset all member variables to default values before adding a new voter
        cout<<"Enter your voter card ID: ";
        cin>>voter_card_id;
        cout<<"Enter your national ID: ";
        cin>>national_id_number;
        cout<<"Enter your first name: ";
        cin>>first_name;
        cout<<"Enter your middle name: ";
        cin>>middle_name;
        cout<<"Enter your surname: ";
        cin>>surname;
        cout<<"Enter polling station: ";
        cin>>polling_station;
        cout<<"Enter date of birth (in dd-mm-yyyy format): ";
        cin>>date_of_birth;
        cout<<"Enter your gender: ";
        cin>>gender;
    }

    // Function to display voter details
    void display_voter(){
        cout<<"Voter card ID: "<<voter_card_id<<endl;
        cout<<"National ID number: "<<national_id_number<<endl;
        cout<<"Name: "<<first_name<<" "<<middle_name<<" "<<surname<<endl;
        cout<<"Date of birth: "<<date_of_birth<<endl;
        cout<<"Gender: "<<gender<<endl;
    }
};

int main(){
    Voter v;
    v.add_voter();
    cout<<endl<<"Voter details:"<<endl;
    v.display_voter();
    return 0;
}
