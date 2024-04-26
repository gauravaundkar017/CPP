/*3:. Write a  program to find sum of all even and odd numbers between 1 to n.*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer (n): ";
    cin >> n;

    int sum_even = 0;
    int sum_odd = 0;

    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0) {
            
            sum_even += i;
        } else {
            
            sum_odd += i;
        }
    }

    cout << "Sum of even numbers between 1 and " << n << ": " << sum_even << endl;
    cout << "Sum of odd numbers between 1 and " << n << ": " << sum_odd << endl;

    return 0;
}
