/*Animal Hierarchy:
Problem Statement: Create a hierarchy of animal classes. Start with a base class Animal and then create derived classes like Mammal, Bird, and Fish. Each of these derived classes should have specific properties and methods related to their respective categories of animals.*/
#include <iostream> 
using namespace std;

class Animal
{
private:
    string name;
    int age;
public:
    Animal (){
    this -> name = "Animal";
    this -> age = 0;
}
    Animal(string name, int age){
    this -> name = name;
    this -> age = age;
}
    void eat(){
        cout << "Animal is eating" << endl;
    }
    void makeSound(){
        cout << "Animal is make Sound" << endl;
    }
    void display(){
        cout << "Animal is "<<name<<" with age "<<age<<" ." << endl;
    }
};

class Mammal : public Animal{
    public:
    Mammal(string name, int age) : Animal(name, age) {}
    
    void nurseYoung() {
        cout << "Mammal is nursing its young" << endl;
    }

};

class Bird : public Animal{
    public :
    Bird (string name, int age) : Animal(name, age) {}

    void flying(){
        cout << "Bird is Flying." << endl;
    }
};
class Fish : public Animal{
    public :
    Fish (string name, int age) : Animal(name, age) {}

    void Swim(){
        cout << "Fish is swimming." << endl;
    }
};



int main(){

    Animal a("Dog",5);
    a.display();
    a.eat();
    a.makeSound();



    Fish f("rahu", 10);
    f.eat();
    f.display();
    f.Swim();

    return 0;


}