/*Q2.Write a Program to sort the Array , First half in Ascending order and
the Second in Descending order.
*/

#include <iostream>
using namespace  std;

int main(){
    int size = 5, temp = 0, i, j; 
    int arr[size] = {4,3,2,1,5};
    for ( i = 0; i < size; i++)
    {
        for ( j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }

        }
    }

    for ( i = 0; i < size/2; i++)
    {

        cout<< arr[i]<<" ";
        
    }
    for ( i = size - 1; i >= size/2; i--)
    {
        cout<< arr[i]<<" ";
    }

    
    return 0;

}