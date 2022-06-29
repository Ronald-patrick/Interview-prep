#include<bits/stdc++.h>
using namespace std;

class Vehicle{
    public:
        virtual int getPrice() = 0; // Pure virtual Function
        virtual string getName() = 0; 
        void toString(){
            cout<<"Print Object";
        };
};

class Car : public Vehicle{
    private:
    int price;
    string name;

    public:
    Car() {}
    Car(int price,string name){
        this->price = price;
        this->name = name;
    }
    int getPrice(){
        return price;
    }
    string getName(){
        return name;
    }
    void toString(){   // Method overidding
        cout<<name<<" : "<<price;
    }
};

int main()
{
    Car *c = new Car(230000,"Ford");
    cout<<c->getName();
    cout<<c->getPrice();
    cout<<endl;
    c->toString();
    return 0;
}