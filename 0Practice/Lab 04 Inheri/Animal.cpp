/*Animal Hierarchy:
Problem Statement: Create a hierarchy of animal classes. Start with a base class Animal and then create derived classes like Mammal, Bird, and Fish. Each of these derived classes should have specific properties and methods related to their respective categories of animals.*/
#include <iostream>
#include <string>

using namespace std;


class Animal
{
private:
    string name ;
    int age ;
public:
    Animal (string name, int age) : name(name), age(age){}

    virtual void sound() = 0;
    virtual void move() = 0;
    void info(){
        cout<<"Animal name is "<<name<<" having age "<<age<<"."<<endl;
    }

    virtual ~Animal(){}
};

class Mammal : public Animal{
    int numOfLegs;
    public : 
        Mammal(string name, int age,int numOfLegs) : Animal (name, age), numOfLegs(numOfLegs){}
        void sound(){
            cout << "Mammal sound" << endl;
        }
        void move(){
            cout << "Mammal moves by walking or running" << endl;
        }
        void info(){
            info();
            cout<< "Number of legs : "<<numOfLegs << endl;
        }
        void Mind(){
            cout << "Mammals has sharp mind " << endl;
        }
};
class Bird : public Animal {
    string color;
public:
    Bird(string name, int age,string color) : Animal(name, age), color(color) {}
    void sound(){
        cout << "Bird sound" << endl;
    }
    void move() {
        cout << "Bird moves " << endl;
    }
    void info(){
        info();
        cout<< "Colour of bird : "<<color << endl;
    }
    void fly(){
            cout << "Birds can fly " << endl;
    }
};
class Fish : public Animal {
public:
    Fish(string name, int age) : Animal(name, age) {}
    void sound()  {
        cout << "Fish sound" << endl;
    }
    void move() {
        cout << "Fish moves by swimming" << endl;
    }
};
void menu(){
    cout<< "\n1. Add Mammal " << endl;
    cout<< "2. Add Bird " << endl;
    cout<< "3. Add Fish " << endl;
    cout<< "4. Display details " << endl;
    cout<< "5. Special properties of mammal and bird " << endl;
    cout<< "6. Exit " << endl;
    cout<< "Enter your choice : ";

}

int main(){
    int numOfAnimals = 10;
    Animal* Animals[numOfAnimals];
    int numOfLegs;
    string name , color;
    int age ,ch, countAnimal = 0;

    do
    {
        menu();
        cin>>ch;
        switch (ch)
        {
        case 1:
            cout<<"Name    Age  NumerOfLegs"<<endl;
            cin>>name>>age>>numOfLegs;
            Animals [countAnimal ++] = new Mammal( name,  age, numOfLegs);
            cout<<"========================================="<<endl;
            break;


        case 2:
            cout<<"Name    Age  color"<<endl;
            cin>>name>>age>>color;
            Animals [countAnimal ++] = new Bird( name,  age, color);
            cout<<"========================================="<<endl;
            break;
        case 3:
            cout<<"Name    Age  "<<endl;
            cin>>name>>age;
            Animals [countAnimal ++] = new Fish( name,  age);
            cout<<"========================================="<<endl;
            break;

        case 4:
            cout<<"Display details"<<endl;
            for (int i = 0; i < countAnimal; i++)
            {
                /* code */

                Animals[i]->info();
                Animals[i]->move();
                Animals[i]->sound();
                cout<<"===================================="<<endl;

            }
            
            break;
        case 5:
            cout<<"Specific details"<<endl;
            for (int i = 0; i < countAnimal; i++)
            {

                if (typeid(*Animals [i]) == typeid(Mammal))
                {
                    cout<<"Type of Animal is "<<typeid(*Animals[i]).name()<<"."<<endl; 
                    cout<<"Mammal type at idex:"<<i<<endl;
                    Mammal *m = dynamic_cast<Mammal*>(Animals[i]);
                    m->Mind();

                }

                if (typeid(*Animals [i]) == typeid(Bird))
                {
                    cout<<"Type of animal is "<<typeid(*Animals[i]).name()<<"."<<endl;
                    cout<<"Bird type at idex:"<<i<<endl;
                    Bird *b = dynamic_cast <Bird*> (Animals[i]);
                    b->fly();
                    /* code */

                }
                
                              
                cout << "---------------------------" << endl;
            }
            break;
            
        case 6:
            cout<<"Exiting......"<<endl;
            
            cout<<"===================================="<<endl;

            
            
            break;
        
        default:
            break;
        }
    } while (ch != 6);

    delete Animals[countAnimal];
    return 0;
}


