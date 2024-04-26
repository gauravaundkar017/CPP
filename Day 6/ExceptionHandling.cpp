#include <iostream>
using namespace std;
int division(int a, int b){
    if (b==0)
        throw 0;
    else
        return a/b;
}

int main(){
    try{
        int a,b;

        cin>>a>>b;

        // if (b==0)
        //     throw 0;
        
        int c = division(a,b);
        cout<<"C : "<<c<<endl;
    }catch(int n){
        if (n == 0)
            cout<<"Division Related Excption"<<endl;
    }catch(...){
        cout<<"Exception occur"<<endl;
    }
	return 0;


}