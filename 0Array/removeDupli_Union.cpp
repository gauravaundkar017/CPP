#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a1[3] = {1, 2, 2};
    int a2[3] = {2, 2, -1};
    int a[6];

    // Merging arrays
    for (int i = 0; i < 3; i++) {
        a[i] = a1[i];
        a[i + 3] = a2[i];
    }

    // Sorting merged array
    sort(begin(a), end(a));

    // Removing duplicates
    int j = 0;
    for (int i = 1; i < 6; i++) {
        if (a[j] != a[i]) {
            j++;
            a[j] = a[i];
        }
    }

    // Output the unique elements
    for (int i = 0; i <= j; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
