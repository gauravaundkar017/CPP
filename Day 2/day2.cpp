#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Task 1: Test Hello World
    cout << "Hello World\n";
    /** Output:
    Hello World
    **/

    // Task 2: Addition of two numbers
    int num1 = 10, num2 = 20;
    int sum = num1 + num2;
    cout << "Sum of " << num1 << " and " << num2 << " is: " << sum << endl;
    /** Output:
    Sum of 10 and 20 is: 30
    **/

    // Task 3: Swap two numbers
    int a = 5, b = 10;
    cout << "Before swapping: a = " << a << ", b = " << b << endl;
    swap(a, b);
    cout << "After swapping: a = " << a << ", b = " << b << endl;
    /** Output:
    Before swapping: a = 5, b = 10
    After swapping: a = 10, b = 5
    **/

    // Task 4: Check if a number is even or odd
    int num = 7;
    if (num % 2 == 0)
        cout << num << " is even.\n";
    else
        cout << num << " is odd.\n";
    /** Output:
    7 is odd.
    **/

    // Task 5: Check if a number is divisible by 5 and 7
    int number = 35;
    if (number % 5 == 0 && number % 7 == 0)
        cout << number << " is divisible by both 5 and 7.\n";
    else
        cout << number << " is not divisible by both 5 and 7.\n";
    /** Output:
    35 is divisible by both 5 and 7.
    **/

    // Task 6: Calculate Income tax
    double salary = 250000;
    double tax;
    if (salary < 150000)
        tax = 0;
    else if (salary >= 150000 && salary <= 300000)
        tax = 0.2 * salary;
    else
        tax = 0.3 * salary;
    cout << "Income tax for salary " << salary << " is: " << tax << endl;
    /** Output:
    Income tax for salary 250000 is: 50000
    **/

    // Task 7: Check if a character is vowel or consonant
    char ch = 'e';
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        cout << ch << " is a vowel.\n";
    else
        cout << ch << " is a consonant.\n";
    /** Output:
    e is a vowel.
    **/

    // Task 8: Check if angles form a valid triangle
    int angle1 = 60, angle2 = 60, angle3 = 60;
    if (angle1 + angle2 + angle3 == 180)
        cout << "Angles form a valid triangle.\n";
    else
        cout << "Angles do not form a valid triangle.\n";
    /** Output:
    Angles form a valid triangle.
    **/

    // Task 9: Find factorial of a number
    int factorialNum = 5;
    int factorial = 1;
    for (int i = 1; i <= factorialNum; ++i)
        factorial *= i;
    cout << "Factorial of " << factorialNum << " is: " << factorial << endl;
    /** Output:
    Factorial of 5 is: 120
    **/

    // Task 10: Calculate m to the power n
    int m = 3, n = 4;
    int power = 1;
    for (int i = 1; i <= n; ++i)
        power *= m;
    cout << m << " raised to the power " << n << " is: " << power << endl;
    /** Output:
    3 raised to the power 4 is: 81
    **/

    // Task 11: Check if a number is prime
    int primeNum = 7;
    bool isPrime = true;
    for (int i = 2; i <= sqrt(primeNum); ++i) {
        if (primeNum % i == 0) {
            isPrime = false;
            break;
        }
    }
    if (isPrime)
        cout << primeNum << " is a prime number.\n";
    else
        cout << primeNum << " is not a prime number.\n";
    /** Output:
    7 is a prime number.
    **/

    // Task 12: Sum of series
    int nSeries = 5;
    int sumSeries = 0;
    for (int i = 1; i <= nSeries; ++i)
        sumSeries += i;
    cout << "Sum of series 1+2+3+...+" << nSeries << " is: " << sumSeries << endl;
    /** Output:
    Sum of series 1+2+3+...+5 is: 15
    **/

    // Task 13: Check if a number is palindrome
    int palindromeNum = 12321;
    int originalNum = palindromeNum;
    int reversedNum = 0;
    while (palindromeNum > 0) {
        int remainder = palindromeNum % 10;
        reversedNum = reversedNum * 10 + remainder;
        palindromeNum /= 10;
    }
    if (originalNum == reversedNum)
        cout << originalNum << " is a palindrome number.\n";
    else
        cout << originalNum << " is not a palindrome number.\n";
    /** Output:
    12321 is a palindrome number.
    **/

    // Task 14: Sum of all even and odd numbers between 1 to n
    int nSum = 10;
    int sumEven = 0, sumOdd = 0;
    for (int i = 1; i <= nSum; ++i) {
        if (i % 2 == 0)
            sumEven += i;
        else
            sumOdd += i;
    }
    cout << "Sum of even numbers between 1 to " << nSum << ": " << sumEven << endl;
    cout << "Sum of odd numbers between 1 to " << nSum << ": " << sumOdd << endl;
    /** Output:
    Sum of even numbers between 1 to 10: 30
    Sum of odd numbers between 1 to 10: 25
    **/

    // Task 15: Print reverse of a number
    int numberReverse = 12345;
    int reversedNumber = 0;
    while (numberReverse > 0) {
        int digit = numberReverse % 10;
        reversedNumber = reversedNumber * 10 + digit;
        numberReverse /= 10;
    }
    cout << "Reverse of 12345 is: " << reversedNumber << endl;
    /** Output:
    Reverse of 12345 is: 54321
    **/

    // Task 16: Print all prime numbers between 1 to n
    int nPrime = 20;
    cout << "Prime numbers between 1 to " << nPrime << " are: ";
    for (int i = 2; i <= nPrime; ++i) {
        bool isPrime = true;
        for (int j = 2; j * j <= i; ++j) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
            cout << i << " ";
    }
    cout << endl;
    /** Output:
    Prime numbers between 1 to 20 are: 2 3 5 7 11 13 17 19
    **/

    // Task 17: Check if a number is Armstrong number
    int armstrongNum = 153;
    int originalArmstrongNum = armstrongNum;
    int armstrongSum = 0;
    while (armstrongNum != 0) {
        int digit = armstrongNum % 10;
        armstrongSum += pow(digit, 3);
        armstrongNum /= 10;
    }
    if (armstrongSum == originalArmstrongNum)
        cout << originalArmstrongNum << " is an Armstrong number.\n";
    else
        cout << originalArmstrongNum << " is not an Armstrong number.\n";
    /** Output:
    153 is an Armstrong number.
    **/

    // Task 18: Find greatest of three numbers using nested if-else
    int num1Greatest = 10, num2Greatest = 20, num3Greatest = 15;
    if (num1Greatest >= num2Greatest) {
        if (num1Greatest >= num3Greatest)
            cout << num1Greatest << " is the greatest number.\n";
        else
            cout << num3Greatest << " is the greatest number.\n";
    }
    else {
        if (num2Greatest >= num3Greatest)
            cout << num2Greatest << " is the greatest number.\n";
        else
            cout << num3Greatest << " is the greatest number.\n";
    }
    /** Output:
    20 is the greatest number.
    **/

    // Task 19: Pizza Shop menu driven program
    char choice;
    do {
        cout << "\nPizza Shop Menu:\n";
        cout << "1. Margherita Pizza - $10\n";
        cout << "2. Veggie Supreme Pizza - $12\n";
        cout << "3. Chicken BBQ Pizza - $15\n";
        cout << "4. Exit\n";
        cout << "Enter your choice (1-4): ";
        cin >> choice;
        
        switch(choice) {
            case '1':
                cout << "You ordered Margherita Pizza. Total amount: $10\n";
                break;
            case '2':
                cout << "You ordered Veggie Supreme Pizza. Total amount: $12\n";
                break;
            case '3':
                cout << "You ordered Chicken BBQ Pizza. Total amount: $15\n";
                break;
            case '4':
                cout << "Thank you for visiting!\n";
                break;
            default:
                cout << "Invalid choice! Please enter a valid option.\n";
        }
    } while (choice != '4');
    /** Output:
    Pizza Shop Menu:
    1. Margherita Pizza - $10
    2. Veggie Supreme Pizza - $12
    3. Chicken BBQ Pizza - $15
    4. Exit
    Enter your choice (1-4): 2**/
   
}