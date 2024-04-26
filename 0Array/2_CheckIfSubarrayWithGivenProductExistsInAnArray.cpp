#include <iostream>
#include<vector>
using namespace std;
/* 
int findSplitPoint(int arr[], int n){

    int leftSum = 0;
    for (int i = 0; i < n ; i++)
    {
        leftSum += arr[i];

        int rightSum = 0;
        for (int j = i + 1; j < n; j++)
            rightSum += arr[j];
    
        if (leftSum == rightSum)
            return i + 1;

    
    }
    
    return -1;
}

void printsTwoParts(int arr[], int n) {
    int splitPoint = findSplitPoint(arr, n);
    if (splitPoint == -1 || splitPoint == n)
    {
        cout << "Not Possible" <<endl; 
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (splitPoint == i)
        {

            cout<<endl;
        }
        cout<<arr[i]<<" ";
        
    }
    
    

}

*/

// int findSP(vector<int> v, int n){

//     int lSum = 0;
//     for (int  i = 0; i <n; i++)
//     {
//         lSum += v[i];

//         int r = 0;
//         for (int  j = i+1; j < n; j++)
//         {
//             r += v[j];
//             /* code */
//         }
//         if (r == lSum)
//         {
//             cout<<"r"<<r<<endl;
//             return i +1;
//         }
        
        


    
//         /* code */
//     }
    


//     return -1;
// }


// void printsTwoParts(vector<int> v, int n) {
//     int splitPoint = findSP(v, n);
//     if (splitPoint == -1 || splitPoint == n)
//     {
//         cout << "Not Possible" <<endl; 
//         return;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (splitPoint == i)
//         {

//             cout<<endl;
//         }
//         cout<<v[i]<<" ";
        
//     }
    
    

// }


bool findSplitPoint(int arr[], int n){

    int leftSum = 0;
    for (int i = 0; i < n ; i++)
    {
        leftSum += arr[i];

        int rightSum = 0;
        for (int j = i + 1; j < n; j++)
            rightSum += arr[j];
    
        if (leftSum == rightSum)
            return i + 1;

    
    }
    
    return -1;
}

int main (){

    int arr[] = { -1 , -2 , -3, 4 };
    int tar = 1;
    int n = sizeof(arr)/sizeof(arr[0]);
    // printsTwoParts(arr,n);

    // vector<int>  v = { 2, 2 , 2,2  };
    // int n = v.size();
    // printsTwoParts(v,n);

    return 0 ;
}