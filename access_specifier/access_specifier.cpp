#include<iostreamn>
using namespace std;

class Student
{   
    public:

    string name;
    int attendance;
    float total_marks;

    void calculate_percentage()
    {
        cout<<total_marks<<"%";
    }
};

class Bank_Client
{   
    public:

    string name;
    int credit_number;
    int cvv;
    string username;
    string password;
};

int main()
{
    // Student a,b,c;

    // a.name="Rohit";
    // a.attendance=90;
    // a.total_marks=69;

    // a.calculate_percentage();

    Bank_Client a,b,c;

    a.name="rohit";
    a.password ="enjoyc++";
    a.cvv=788;
    a.credit_number=123456789;

    cout<<"the password of rohit is"<<a.password;
    cout<<endl;
    cout<<a.cvv;
    cout<<a.credit_number;
}
