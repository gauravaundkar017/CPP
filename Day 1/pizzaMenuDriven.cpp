#include <iostream>
using namespace std;

int main(){
    cout<<"1.New York style \n2.Chicago deep-dish \n3.Margherita \n4.Sicilian \n5.California \n6.Exit";
    int menu, quantityOfPizza = 0, totalCost = 0;
    do
    {
        cout<<"\nEnter your order : ";
        cin>>menu;
        switch (menu)
        {
        case 1:
            cout<<"Enter quntity of New York style Pizza : ";
            cin>>quantityOfPizza;

            quantityOfPizza *= 100;
            totalCost += quantityOfPizza;
            
            break;
        
        case 2:
            cout<<"Enter quntity of Chicago deep-dish Pizza : ";
            cin>>quantityOfPizza;

            quantityOfPizza *= 200;
            totalCost += quantityOfPizza;
            
            break;
        
        case 3:
            cout<<"Enter quntity of Margherita Pizza : ";
            cin>>quantityOfPizza;

            quantityOfPizza *= 150;
            totalCost += quantityOfPizza;
            
            break;
        
        case 4:
            cout<<"Enter quntity of Sicilian Pizza : ";
            cin>>quantityOfPizza;

            quantityOfPizza *= 120;
            totalCost += quantityOfPizza;
            
            break;
        
        case 5:
            cout<<"Enter quntity of California Pizza : ";
            cin>>quantityOfPizza;

            quantityOfPizza *= 500;
            totalCost += quantityOfPizza;
            
            break;
        
        case 6:
            cout<<"Thank You..! Visit Again.";         
            break;
        
        default:
            cout<<"You Enter wrong menu order number : "<<endl;

            break;
        }
    } while (menu != 6);
    cout<<"Total Cost : "<<totalCost;

}