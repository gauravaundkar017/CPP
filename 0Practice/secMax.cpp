// #include <bits/stdc++.h>
// #include <iostream>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int n = 3;
// 	    int arr[n];
// 	    for (int i = 0 ; i<n ; i++){
// 	        cin>>arr[i];
	        
// 	    }
// 	    int max = arr[0];
//         for (int i = 0 ; i<n ; i++){
// 	        if(arr[i] > max){
// 	            max = arr[i];
// 	        }
// 	    }
//         cout<<max<<endl;


// 	    int max2 = arr[0];
// 	    for (int i = 0 ; i < n ; i++){
// 	        if( arr[i] > max2 &&arr[i] !=max    ){


// 	            max2 = arr[i];
// 	        }
// 	    }
	    
// 	    cout <<max2;

	    
// 	}

// }


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    int t;
    // cin >> t;
    // while (t--)
    // {
        cin >> a;
        cin >> b;
        cin >> c;
        int arr[3] = {a, b, c};
        sort(arr, arr + 3);
        cout << arr[1] << endl;
    // }
    return 0;
}
