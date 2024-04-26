#include <iostream>
#include <vector>
using namespace std;

void display(int arr[2][2][2]){
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0 ; j<2 ; j++){
            for (int k = 0; k < 2; k++)
            {
                cout<<"["<<i<<"] "<<" ["<<j<<"] ["<<k<<"] = "<<arr[i][j][k]<<endl;
            }
            
        }
    }
    
}
void displayV(vector<vector<vector<int>>> v){
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0 ; j<2 ; j++){
            for (int k = 0; k < 2; k++)
            {
                cout<<"["<<i<<"] "<<" ["<<j<<"] ["<<k<<"] = "<<v[i][j][k]<<endl;
            }
            
        }
    }

}


int main (){

    int arr[2][2][2] = { { {1,2} , {3,4}},{{5,6}, {7,8}} };
    vector<vector<vector<int>>> v = { { {1,2} , {3,4}},{{5,6}, {7,8}} };
    display(arr);
    displayV(v);
    return 0 ;
}