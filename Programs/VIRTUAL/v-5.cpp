/* 5. Write a C++ program to create an abstract class Animal with abstract methods eat() and sleep(). 
Create derived classes Lion, Tiger, and Deer that extend the Animal class and implement the eat() and sleep() 
methods differently based on their specific behavior.*/

#include<iostream>
using namespace std ;

class Animal {
    public :

    virtual void eat() = 0;
    virtual void sleep()  = 0;
    
};

class lion : public Animal {

    public :
        
            void eat()  {
                cout<<"Lion eat Deer" <<endl;
            }
            void sleep()  {
                cout<<"Lion sleep for 10 hour " <<endl;
            }
    };

class Tiger : public Animal {

    public :
        void eat()  {
            cout<<"Tiger eat goat" <<endl;
        }

        void sleep()  {
            cout<<"Tiger sleep for 8 hour " <<endl;
        }
    };

class Deer : public Animal {

    public :
        
            void eat()  {
                cout<<"Deer eat grass" <<endl;
            }
            void sleep()  {
                cout<<"Deer sleep for 6 hour " <<endl;
            }
    };

    int main(){

        lion obj;
        obj.eat();
        obj.sleep();

        Tiger obj1;
        obj1.eat();
        obj1.sleep();

        Deer obj2;
        obj2.eat();
        obj2.sleep();

        return 0;

    }

        /* Output :
        
        Lion eat Deer
        Lion sleep for 10 hour 
        Tiger eat goat
        Tiger sleep for 8 hour 
        Deer eat grass
        Deer sleep for 6 hour 
        
         */