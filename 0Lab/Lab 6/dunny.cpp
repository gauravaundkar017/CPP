#include <iostream>
#include <typeinfo>
using namespace std;
class Emp{
    protected : 
        int id;
        string name;
    public :
        Emp(int id, string name){
            this->id = id;
            this->name = name;
        }
        virtual void display(){
            cout<<id<<"  "<<name<<endl;
        }
};

class Man : public Emp{  //inhe
    protected : 
        int sal;
        
    public :
        Man(int id, string name, int sal) : Emp(id, name){
            this->sal = sal;
        }
        void display(){    // overriding
            Emp:: display();
            cout<<"  "<<sal<<endl;
        }
        void manTask(){
            cout<<"Man Task"<<endl;
        }
};


int main(){
    // Emp e(1,"asd");
    // e.display();
    // Man m (1, "as", 540);
    // m.display();
    // int arr[10];
    // arr[0] = 1
    Emp* emps[10]; //arr
    int id;
    
    
    string name ;
    int sal;
    int count = 0;
    int ch;
    do
    {
        
        cout<<"Choice = " ; 
        cin>>ch;
        switch (ch)
        {
        case 1:{
            cout<<"Emp"<<endl;
            cin>>id>>name;

            emps[count ++] = new Emp(id, name); //upcasting
            
            break;
        }
        case 2:
            cout<<"Man"<<endl;
            cin>>id>>name>>sal;

            emps[count ++] = new Man(id, name, sal);
            
            break;

        case 3:
            cout<<"display"<<endl;
            for (int i = 0; i < count; i++)
            {
                emps[i]->display();
                
            }
            
            
            break;
        case 4:
            cout<<"------Man task-----"<<endl;
            for (int i = 0; i < count; i++)
            {
                if (typeid(*emps[i]) == typeid(Man))
                {
                    Man* m = dynamic_cast<Man*>(emps[i]);
                    m->manTask();
                    /* code */
                }
                // if (typeid(*emps[i]) == typeid(Emp))
                // {
                //     Emp* e = dynamic_cast<Emp*>(emps[i]);
                //     e->display();
                //     /* code */
                // }
                
                
            }
            
            
            break;
        
        default:
            break;
    }
    } while (ch != 0);
    

    return 0;
}