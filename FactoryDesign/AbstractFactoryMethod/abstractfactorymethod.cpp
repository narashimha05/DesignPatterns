#include <iostream>

using namespace std;

class Burger{
    public:
        virtual void prepare() = 0;
};

class BasicBurger : public Burger {
public:
    void prepare() override {
        cout << "Preparing Basic Burger" << endl;
    }
};

class StandardBurger : public Burger {
public:
    void prepare() override {
        cout << "Preparing Standard Burger" << endl;
    }
};

class PremiumBurger : public Burger {
public:
    void prepare() override {
        cout << "Preparing Premium Burger" << endl;
    }
};

class BasicWheatBurger : public Burger {
public:
    void prepare() override {
        cout << "Preparing Basic Wheat Burger" << endl;
    }
};

class StandardWheatBurger : public Burger {
public:
    void prepare() override {
        cout << "Preparing Standard Wheat Burger" << endl;
    }
};

class PremiumWheatBurger : public Burger {
public:
    void prepare() override {
        cout << "Preparing Premium Wheat Burger" << endl;
    }
};

class GarlicBread{
    public:
        virtual void prepare() = 0;
};

class BasicGarlicBread : public GarlicBread {
public:
    void prepare() override {
        cout << "Preparing Basic Garlic Bread" << endl;
    }
};

class StandardGarlicBread : public GarlicBread {
public:
    void prepare() override {
        cout << "Preparing Standard Garlic Bread" << endl;
    }
};

class PremiumGarlicBread : public GarlicBread {
public:
    void prepare() override {
        cout << "Preparing Premium Garlic Bread" << endl;
    }
};

class BasicWheatGarlicBread : public GarlicBread {
public:
    void prepare() override {
        cout << "Preparing Basic Wheat Garlic Bread" << endl;
    }
};

class StandardWheatGarlicBread : public GarlicBread {
public:
    void prepare() override {
        cout << "Preparing Standard Wheat Garlic Bread" << endl;
    }
};

class PremiumWheatGarlicBread : public GarlicBread {
public:
    void prepare() override {
        cout << "Preparing Premium Wheat Garlic Bread" << endl;
    }
};

class MealFactory{
    public:
        virtual Burger* createBurger(string& type) = 0;
        virtual GarlicBread* createGarlicBread(string& type) = 0;
};

class SinghBurger : public MealFactory{
    public:
        Burger* createBurger(string& type) override {
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

        GarlicBread* createGarlicBread(string& type) override {
        if (type == "basic") {
            return new BasicGarlicBread();
        } else if (type == "standard") {
            return new StandardGarlicBread();
        } else if (type == "premium") {
            return new PremiumGarlicBread();
        } else {
            cout << "Invalid burger type! " << endl;
            return nullptr;
        } 
        }
};

class KingBurger : public MealFactory{
    public:
        Burger* createBurger(string& type) override {
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

        GarlicBread* createGarlicBread(string& type) override {
        if (type == "basic") {
            return new BasicWheatGarlicBread();
        } else if (type == "standard") {
            return new StandardWheatGarlicBread();
        } else if (type == "premium") {
            return new PremiumWheatGarlicBread();
        } else {
            cout << "Invalid burger type! " << endl;
            return nullptr;
        }
        }
};

int main(){
    string BurgerType = "Basic";
    string GarlicBreadType = "Basic";
    MealFactory* MealFactory = new SinghBurger();
    Burger* burger = MealFactory->createBurger(BurgerType);
    GarlicBread* garlicbread = MealFactory->createGarlicBread(GarlicBreadType);
    burger->prepare();
    garlicbread->prepare();
    return 0;

}
