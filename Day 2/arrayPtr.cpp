#include <bits/stdc++.h>
using namespace std;

void arrayPtr(int *arr)
{
    for (int i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i];
    }
    

}
int main()
{
	// int arr[5];

    // arrayPtr(arr);
    char ch[5] = {'c','p','p'};
    char *ptr = ch;
    for (int i = 0; i < 5; i++){

        cout<<*(ptr+i);
    }
	return 0;
}