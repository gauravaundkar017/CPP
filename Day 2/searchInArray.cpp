/*5:Write a program to accept array  from user .Accept number from user and search number is present in array or not.*/

#include <iostream>
using namespace std;

bool searchNumber(int *arr,int size,int num){
    for (int i = 0; i < size; ++i) {
        if (arr[i] == num) {
            return true; 
        }
    }
    return false; 
}
int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    // Dynamically allocate memory for the array

    int *arr = new int[size];

    cout << "Enter " << size << " elements of the array:\n";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
    int num;
    cout << "Enter the number to search for: ";
    cin >> num;

    if (searchNumber(arr, size, num)) {
        cout << num << " is present in the array.\n";
    } else {
        cout << num << " is not present in the array.\n";
    }

    delete[] arr;
    

    return 0;
}