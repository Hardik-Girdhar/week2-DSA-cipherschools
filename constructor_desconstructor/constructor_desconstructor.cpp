#include<iostream>
using namespace std;

class Complex
{
    // public:
    private:

    float real;
    float img;

    public:

    Complex(int real_value, int img_value)
    {
        real = real_value;
        img=img_value;
    }

    void set_parameter(int real,int img)
    {
        this->real = real;
        this->img = img;
    }

    void Sqdistancefromorigin()
    {
        float dist;

        dis = real*real + img*img;

        cout<<"the distance from origin is"<<dist;
        return;
    }
};


class New_account
{
    public:

    int amount;
    int days;

    // void initial()
    New_account(int amount_initial, int days_initial)
    {
        amount = 0;
        days = 0;

        cout<<"the constructor is called now";
    } 

    void print_account_details()
    {
        cout<<"the amount is "<<amount;
        cout<<"the number of days is "<<days<<endl;
    }

    ~New_account()
    {
        cout<<"now the use of the object is complete and the object is getting destroyed";
    }
};

class motorbike
{
    public:

    int num_wheels;
    int light;
};

int main()
{
    // Complex a,b;

    // a.set_parameter(3,4);
    // a.Sqdistancefromorigin();

    New_account a(0,0);

    a.print_account_details();

    // a.initial();

    // a.amount++;
    // a.days++;

    New_account b(100,5);
    b.print_account_details();

    cout<<"here all the doucntoins and calculation take place"<<endl;

    Complex(3,3);
    Complex(3,5);

    return 0;
}
