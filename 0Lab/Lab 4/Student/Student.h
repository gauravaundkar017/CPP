#include <iostream>
using namespace std;

namespace StudentClsss{

    class Student{
        int rollNo;
        float m1, m2, m3, m4, m5;

        float calTotal(){
            return m1 + m2 + m3 + m4 + m5;
        }
        float percentage(){
            return (m1 + m2 + m3 + m4 + m5)/5;
        }

        void grade(){
            int p = percentage();
            if (p >= 91)
            {
                cout<<"Garde : A "<<endl;
            }else if(p >= 81 && p<= 90){
                cout<<"Garde : B "<<endl;
            }else if(p >= 81 && p<= 90){
                cout<<"Garde : C "<<endl;
            }else if(p >= 71 && p<= 80){
                cout<<"Garde : D "<<endl;
            }else if(p >= 61 && p<= 70){
                cout<<"Garde : E "<<endl;
            }else{
                cout<<"Garde : F "<<endl;
                cout<<"Reamrk : Student is failed. "<<endl;
            }
        }


        public : 
            void acceptInfo(){
                cout<<"Roll Number : ";
                cin>>rollNo;
                

                cout<<"Mark of subject 1 : ";
                cin>>m1;
                

                cout<<"Mark of subject 2 : ";
                cin>>m2;
                

                cout<<"Mark of subject 3 : ";
                cin>>m3;
             

                cout<<"Mark of subject 4 : ";
                cin>>m4;
              

                cout<<"Mark of subject 5 : ";
                cin>>m5;
                

            }

            void displayMarkMemo(){
                cout<<"\n\nStudent Information : "<<endl; 
                cout<<"Roll Number : "<< rollNo<<endl; 
                cout<<"Mark of subject 1 : "<<m1<<endl; 
                cout<<"Mark of subject 2 : "<<m2<<endl; 
                cout<<"Mark of subject 3 : "<<m3<<endl; 
                cout<<"Mark of subject 4 : "<<m4<<endl; 
                cout<<"Mark of subject 5 : "<<m5<<endl; 


                cout<<"\n\nToat Marks of Student : "<<calTotal()<<endl; 
                cout<<"Toat percentage of Student : "<<percentage()<<" %"<<endl; 
                cout<<"Grade of Student : "; 
                grade();
                cout<<"\n\n"<<endl;
                 
            }
            

    };
}
