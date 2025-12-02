#include <iostream>
using namespace std;

// this is not a factory design. It's a design principle.

class Burger{
    public:
        virtual void prepare() = 0; // pure virtual function
        virtual ~Burger() {} // virtual destructor
};

class BasicBurger : public Burger{
    public:
        void prepare() override {
            cout<< "preparing basic burger."<<endl;
        }
};
class StandardBurger : public Burger{
    public:
        void prepare() override {
            cout<< "preparing standard burger."<<endl;
        }
};
class PremiumBurger : public Burger{
    public:
        void prepare() override {
            cout<< "preparing Premium burger."<<endl;
        }
};

class BurgerFactory{
    public:
        Burger* createBurger(string& type){
            if(type=="basic"){
                return new BasicBurger();
            }
            else if(type=="standard"){
                return new StandardBurger();
            }
            else if(type=="premium"){
                return new PremiumBurger();
            }else{
                cout<<"Invalid Input"<<endl;
                return nullptr;
            }

    }
};

int main(){
    string type="standard";
    BurgerFactory* myBurgerFactory = new BurgerFactory();
    Burger* burger = myBurgerFactory->createBurger(type);
    burger->prepare();
    return 0;
}



