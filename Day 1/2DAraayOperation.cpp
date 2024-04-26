#include <iostream>
using namespace std;

int main(){
    int m = 2, n = 2, i, j, k;
    int arr1[m][n];
    int arr2[m][n];
    int arrAddition[m][n];
    int arrMultiplication[m][n];
    
    cout << "Array 1 : " << endl;
    cout << "Enter the numbers : " << endl;
    for ( i = 0; i < m; i++)
    {
        for(j = 0 ; j<n ; j++){
            cin >> arr1[i][j];
        }
    }
    cout << "The Array 1 is : " << endl;
    for ( i = 0; i < m; i++)
    {
        for(j = 0 ; j<n ; j++){
            cout << arr1[i][j] << " ";
        }
        if (m == 2)
        {
            cout << endl;
        }
        
    }

    cout << "\nArray 2 : " << endl;
    cout << "Enter the numbers : " << endl;
    for ( i = 0; i < m; i++)
    {
        for(j = 0 ; j<n ; j++){
            cin >> arr2[i][j];
        }
    }
    cout << "The Array 2 is : " << endl;
    for ( i = 0; i < m; i++)
    {
        for(j = 0 ; j<n ; j++){
            cout << arr2[i][j] << " ";
        }
        if (m == 2)
        {
            cout << endl;
        }
        
    }

    cout << "\nAddtion of two array : " << endl;
    for ( i = 0; i < m; i++)
    {
        for(j = 0 ; j<n ; j++){
            arrAddition[i][j] =arr1[i][j] + arr2[i][j] ;
        }
    }
    for ( i = 0; i < m; i++)
    {
        for(j = 0 ; j<n ; j++){
            cout << arrAddition[i][j] << " ";
        }
        if (m == 2)
        {
            cout << endl;
        }
        
    }
    cout << "\nMultiplication of two array : " << endl;
    for ( i = 0; i < m; i++)
    {
        for(j = 0 ; j<n ; j++){
            arrMultiplication[i][j] =0;
            for ( k = 0; k < n; k++)
            {
                arrMultiplication[i][j] += arr1[i][k] * arr2[k][i]; 
            }
        }
    }
    for ( i = 0; i < m; i++)
    {
        for(j = 0 ; j<n ; j++){
            cout << arrMultiplication[i][j] << " ";
        }
        if (m == 2)
        {
            cout << endl;
        }
        
    }

    
}