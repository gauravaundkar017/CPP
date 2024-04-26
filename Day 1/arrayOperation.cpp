#include <iostream>

using namespace std;

// Function to calculate the sum of elements in the array
int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

// Function to find and print even and odd numbers in the array
void findEvenOdd(int arr[], int size) {
    cout << "Even numbers: ";
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0)
            cout << arr[i] << " ";
    }
    cout << endl << "Odd numbers: ";
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0)
            cout << arr[i] << " ";
    }
    cout << endl;
}


//Prime number
bool isPrime(int num){
    if (num == 0 || num == 1)
    {
        return false;
    }
    for (int i = 2; i < num; i++)
    {
        if (num%i == 0)
        {
            return false;
        }
        
    }
    return true;
    
    
}

//sorting array
void sortArray(int arr[], int size){
    int i, j, temp;
    for ( i = 0; i < size; i++)
    {
        for ( j = i + 1; j < size; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            
        }
        
    }
    cout<<"Sorted Array in desending format : ";
    for ( i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    cout<<"\nSorted Array in assending format : ";
    for ( i = size; i >= 0; i--)
    {
        cout<<arr[i]<<" ";
    }
    
    

}

void reverseArray(int arr[], int size){
    int i;
    cout<<"Reversed Array";
    for ( i = size; i >= 0; i--)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;
}

void searchElement(int arr[], int size, int element){
    int i;
    for ( i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            element = arr[i];
        }
            
        
    }
    if (element)
    {
        cout<<"Element is present : "<<element<<endl;
   
            
    }else{
        cout<<"Element is not present : "<<endl;

    }
    

    cout<<endl;
}

void concatenateArrays(int arr[], int arr1[], int size, int size1){

    int arr2[size + size1];
    for (int i = 0; i < size; i++)
    {
        arr2[i] = arr[i]; 
    }
    
    for (int i = size; i < size + size1; i++)
    {
        arr2[i] = arr1[i - size]; 
    }
    
    cout << "Array concatinationated : ";

    for (int i = 0; i < size + size1; i++) {
        cout << arr2[i] << " ";
    }

    

}

void doubleTheElemnents(int arr[],int size){
    cout<<"New Array : ";

    for (int i = 0; i < size; i++)
    {
        arr[i] *= 2; 
        cout<<arr[i]<<" ";
    }

}


int main() {
    int arr[100], size, choice;
    bool foundPrime;
    
    cout << "Enter the size of the array: ";
    cin >> size;
    
    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    do {
        cout << "\nMenu:\n";
        cout << "1. Sum of array\n";
        cout << "2. Find even and odd numbers\n";
        cout << "3. Find Prime numbers\n";
        cout << "4. For sorting array\n";
        cout << "5. For Reversing array\n";
        cout << "6. Search element in Array...\n";
        cout << "7. Array concatination...\n";                                                                      
        cout << "8. Double the array elements.\n";
        cout << "9. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Sum of array: " << sumArray(arr, size) << endl;
                break;
            case 2:
                findEvenOdd(arr, size);
                break;
            case 3:
                cout << "Prime numbers in the array: ";
                foundPrime = false;

                for (int i = 0; i <=size ; i++)

                {
                    if (isPrime(arr[i]))
                    {
                        cout<<arr[i]<<" ";
                        foundPrime = true;
                    }
                    
                }
                if (!foundPrime)
                    cout << "None";
                cout << endl;
                
                break;

            case 4:
                cout << "Sorting Array\n";
                sortArray(arr,size);
                break;

            case 5:
                cout << "Reversing Array...\n";
                reverseArray(arr,size);

                
                break;
            case 6:
                cout << "Search element in Array...\n";
                cout << "Enter element : ";
                int element;
                cin>>element;
                searchElement(arr, size, element);

                break;
            case 7:
                cout << "Array concatination...\n";
                // cout << "Enter second array : "<<endl;
                int size1, arr1[100];

                cout << "Enter the size of the array: ";
                cin >> size1;
                
                cout << "\nEnter second array " << size1 << " elements :" <<endl;
                for (int i = 0; i < size; i++) {
                    cin >> arr1[i];
                }

                // int arr2[size + size1];

                concatenateArrays(arr ,arr1, size, size1);

                // for (int i = 0; i < size + size1; i++) {
                //     cout << arr2[i];
                // }

                

                break;
            case 8:
                cout << "Double array element : \n";
                doubleTheElemnents(arr,size);


                break;
            case 9:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }
    } while (choice != 9);

    return 0;
}
