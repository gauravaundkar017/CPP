/*1:Write a program to create an array of integers and perform following operations on that array like 
finding the , average, maximum and minimum number in that array. Accept the numbers of the 
array from user. */

#include <iostream>
using namespace std;
int sumOfArray(int *arr){
    int sum = 0;
    for (int j = 0; j < 5; ++j) {
            sum += arr[j];
    }
    return sum;
}
void minMax(int arr[]){
    int temp,j;
    for (j = 0; j < 5; ++j) {
        for (int i = j + 1; i < 5; i++)
        {
            if (arr[j]<arr[i])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
            
        }
        
    }

    // for (j = 0; j < 5; ++j) {
    //     cout << arr[j]<<" ";
    // }
    cout <<endl;
    cout<<"Minimum Num = " << arr[4]<<" Maximum Number = "<<arr[0];

}

int main(){
    int j;
    int arr[5] = {1, 5 , 4, 2, 3};
    cout << "Array is : ";
    for (j = 0; j < 5; ++j) {
        cout << arr[j]<<" ";
    }
    
    int sum = sumOfArray(arr);
    cout <<endl;
    cout <<"Sum of Array = "<<sum<<endl;

    int size = sizeof(arr)/sizeof(arr[1]);
    cout <<"size of Array = "<<size<<endl;

    int averageOfArray = sum / size ;
    cout <<"Average of Array = "<<averageOfArray<<endl;


    minMax(arr);

    
    
    
    return 0;

}