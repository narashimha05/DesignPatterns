#include <iostream>
using namespace std;

class Burger{
    public:
        virtual void prepare() = 0;
        virtual ~Burger();
};

class BasicBurger : public Burger{
    public:
        void prepare() override{
            cout<<"this is from basic burger.";
        }

};
class StandardBurger : public Burger{
    public:
        void prepare() override{
            cout<<"this is from Standard burger.";
        }

};
class PremiumBurger : public Burger{
    public:
        void prepare() override{
            cout<<"this is from Premium burger.";
        }

};


class BasicWheatBurger : public Burger{
    public:
        void prepare() override{
            cout<<"this is from basic wheat burger.";
        }

};
class StandardWheatBurger : public Burger{
    public:
        void prepare() override{
            cout<<"this is from Standard wheat burger.";
        }

};
class PremiumWheatBurger : public Burger{
    public:
        void prepare() override{
            cout<<"this is from Premium wheat burger.";
        }

};

class BurgerFactory{
    public:
        virtual Burger* CreateBurger(string& type) = 0;
};

class SinghBurger : public BurgerFactory{
    public:
        Burger* CreateBurger(string& type) override {
        if (type == "basic") {
            return new BasicBurger();
        } else if (type == "standard") {
            return new StandardBurger();
        } else if (type == "premium") {
            return new PremiumBurger();
        } else {
            cout << "Invalid burger type! " << endl;
            return nullptr;
            }
        }
        
};

class KingBurger : public BurgerFactory{
    public:
        Burger* CreateBurger(string& type) override {
        if (type == "basic") {
            return new BasicWheatBurger();
        } else if (type == "standard") {
            return new StandardWheatBurger();
        } else if (type == "premium") {
            return new PremiumWheatBurger();
        } else {
            cout << "Invalid burger type! " << endl;
            return nullptr;
            }
        }
        
};



int main(){
    string type = "basic";
    BurgerFactory* myBurgerFactory = new SinghBurger();
    Burger* burger = myBurgerFactory->CreateBurger(type);
    burger->prepare();
    return 0;
}