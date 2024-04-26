#include <iostream>
#include <typeinfo>

using namespace std;

namespace FruitBasket {
		class Fruit{
		protected : 
			string name, color ;
			double weight;
		public : 
			virtual void test() = 0;
			Fruit(){
				name = "Phal";
				color = "No color";
				weight = 1000;
			}
			Fruit (string name, string color,double weight) {
				this -> name = name;
				this -> color = color;
				this -> weight = weight;
			}
			void display(){
				cout<<"Name : "<<name<<"\nColor : "<<color<<"\nweight : "<<weight<<endl;
			}
			
	};
	
	
	class Apple : public Fruit{
		public : 
			Apple (string name, string color,double weight) : Fruit (name, color ,weight) {
				this -> name = name;
				this -> color = color;
				this -> weight = weight;
			}

			void test(){
				cout << "Test of Apple is sweet ."<<endl;
			}
			void appleJam(){
				cout << "Create an Apple Jam ."<<endl;
			}

			
	};
	
	class Orange : public Fruit{
		public : 
			Orange (string name, string color,double weight) : Fruit (name, color ,weight) {
				this -> name = name;
				this -> color = color;
				this -> weight = weight;
			}
			void test(){
				cout << "Test of Orange is Sour ."<<endl;
			}
			void orangeJuice(){
				cout << "Create an Orange Juice ."<<endl;
			}

			
	};
	
	class Mango : public Fruit{
		public : 
			Mango (string name, string color,double weight) : Fruit (name, color ,weight) {
				this -> name = name;
				this -> color = color;
				this -> weight = weight;
			}
			void test(){
				cout << "Test of Mango is God ."<<endl;
			}
			void mangoPulp(){
				cout << "Create an Mango pulp. ."<<endl;
			}

			
	};
		
		
		
}






int main1(){

//	typedef FruitBasket :: Fruit Fruit;
	FruitBasket :: Fruit* fruits[10];
		
	typedef FruitBasket :: Apple Apple;
	typedef FruitBasket :: Orange Orange;
	typedef FruitBasket :: Mango Mango;
	
	Mango *m;
	Apple *a;
	Orange *o;
//	Fruit* friuts[10];
	
	int choice;
	int index = 0 ;
	do{
		cout<<"1. Apple : "<<endl;
		cout<<"2. Orange : "<<endl;
		cout<<"3. Mango : "<<endl;
		cout<<"4. Show All : "<<endl;
		cout<<"5. Exit : "<<endl;
		
		string name, color;
		double weight;
		
		cout<<"Enter Choice : ";
		cin>>choice;
		
		
		switch(choice){
			case 1 : 
				if(index < 4){
					cout<<"----Apple-----"<<endl;
					cout<<"Enter fruit name : ";
					cin>>name;
					cout<<"Enter fruit color : ";
					cin>>color;
					cout<<"Enter fruit wight : ";
					cin>>weight;
					
					a = new Apple(name,color,weight);
					fruits[index] = a;
					index ++;
					cout<<endl;
					
				}else{
					cout<<"Basket is FuLLLLL."<<endl;
					
				}
				break;
				
			case 2 : 
				cout<<"----Orange-----"<<endl;
				cout<<"Enter fruit name : ";
				cin>>name;
				cout<<"Enter fruit color : ";
				cin>>color;
				cout<<"Enter fruit wight : ";
				cin>>weight;
				
				o = new Orange(name,color,weight);
				fruits[index] = o;
				index ++;
				cout<<endl;
				break;
			case 3 : 
				cout<<"----Mango-----"<<endl;
				cout<<"Enter fruit name : ";
				cin>>name;
				cout<<"Enter fruit color : ";
				cin>>color;
				cout<<"Enter fruit wight : ";
				cin>>weight;
				
				m = new Mango(name,color,weight);
				fruits[index] = m;
				index ++;
				cout<<endl;
			break;
			
			case 4 :
				for(int i=0 ; i<index; i++){
					fruits[i]  -> display();
					fruits[i] -> test(); 
//					fruit[i] -> orangeJuice();
					if(typeid(*fruits[i])==typeid(Apple)){
						Apple *aObj = dynamic_cast <Apple*>(fruits[i]);
						aObj -> appleJam();
					}
					if (typeid(*fruits[i])==typeid(Orange)){
						Orange *bObj =dynamic_cast<Orange*>(fruits[i]);
						bObj->orangeJuice();
					}
					if (typeid(*fruits[i])==typeid(Mango)){
						Mango *mObj =dynamic_cast<Mango*>(fruits[i]);
						mObj->mangoPulp();
					}
				}
				break;
				
			case 5 : 
				cout<<"Exiting...."<<endl;
				break;
				
			default :
				cout<<"Invalid choice ."<<endl;	
				break;	
			}
		
	}while(choice != 5);
	
	return 0;
	
}
