#include <iostream>
#include <algorithm>
using namespace std; 
  void rotate(int *arr, int k, int n) {
    
      reverse(arr, arr + k);
      reverse(arr + k, arr + n);
      reverse(arr, arr + n);
      for (int i = 0; i < n; i++)
      {
        cout<<arr[i]<<" ";
      }
      
  }
int main() {
  int n = 5;
  int a[n] = {0,1,2,3,4};
  int k = 3;
  rotate(a, k, 5);
  
  
}