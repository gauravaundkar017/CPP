#include <iostream>
using namespace std;
/*3. Swapping Number
int main(){
    cout << "Swap Number 1 : "<<endl;
    int a1,b1,temp;
    cout << "Enter values of a1 and b1 : ";
    cin >> a1 >> b1; 
    cout << "Entered values of a1 and b1 : "<< a1 <<" "<<b1 <<endl ;
    
    temp = a1;
    a1 = b1;
    b1 = temp;
    cout << "After swaping values values of a and b : "<< a1 <<" "<<b1<<endl ;

    cout << "Swap Number 2 without third value : "<<endl;
    int a,b;
    cout << "Enter values of a and b : ";
    cin >> a >> b; 
    cout << "Entered values of a and b : "<< a <<" "<<b<<endl ;
    
    a = a + b;
    b = a - b;
    a = a - b;  
    cout << "After swaping values values of a and b : "<< a <<" "<<b<<endl ;



    return 0;
}
*/


/*5. check Number divisible  by 5 & 7
int main(){
    int a;
    cout << "Enter values of a : ";
    cin >> a; 
    (a % 5 == 0 && a % 7 == 0) ? cout << "Number is divisible by 5 & 7 both" : cout << "Number is not divisible by 5 & 7 both"; 
    
    return 0;
}
*/

/*6.TAX
int main(){
    int annualBasicSalary, tax = 0 ;
    cout << "Enter values of Annual Basic Salary : ";
    cin >>annualBasicSalary; 
    if (annualBasicSalary < 150000)
    {
        cout << "Tax = " << tax << endl; 
    }else if(annualBasicSalary >= 150000 && annualBasicSalary < 300000){
        tax = annualBasicSalary*0.2;
        cout << "Tax = " << tax << endl; 
    }else{
        tax = annualBasicSalary*0.3;
        cout << "Tax = " << tax << endl; 

    }
    
    
    return 0;
}
*/

/*7.Check vowel and consonents.
int main(){
    char character;
    cout << "Enter the Character : ";
    cin >> character;
    char ch = tolower(character); 
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        cout <<"Vowel " << endl; 
    }else{
       
        cout <<"Consonant "<< endl; 

    }
    
    
    return 0;
}
*/

/*8.Triangle
int main(){
    int a,b,c;
    cout << "Enter values of a, b, c : ";
    cin >> a >> b >> c; 
    (a+b+c == 180) ? cout << "This is a Trinagle" : cout << "This is not a Trinagle"; 
    return 0;
}
*/

/*9.Factorial
int main(){
    int a,i,factorial = 1;
    cout << "Enter values of a : ";
    cin >> a ; 
    for ( i = 1; i <= a; i++)
    {
        factorial *= i;
    }
    cout << factorial <<endl;
    
    return 0;
}
*/

/*10.Power

int main(){
    int m,i,n,result = 1;
    cout << "Enter values of m and n: ";
    cin >> m >> n; 
    for ( i = 1; i <= n; i++)
    {
        result *= m;
    }
    cout << result <<endl;
    
    return 0;
}
*/


/*11.prime nUmber
int main(){
    int m, i;
    bool result = false;
    cout << "Enter values of m ";
    cin >> m;
    if (m <=1)
    {
        result = false;
    }
    
    for ( i = 2; i < m; i++)
    {
        if (i % 2 == 0)
        {
            result = false;
        }else{
            result  = true;
        }
        
        
    }
    

    if (!result)
    {
        cout << m <<"is a prime number " <<endl;
    
    }else{
        cout << m <<"is not  a prime number " <<endl;

    }
    
    
    return 0;
}
*/

/*12. Sum of series
int main(){
    int m,i,n,result = 0;
    cout << "Enter values of m and n: ";
    cin >> m >> n; 
    for ( i = 1; i <= n; i++)
    {
        result += i;
    }
    cout << result <<endl;
    
    return 0;
}
*/


/*13.Number Pallindrome
int main(){
    int number, reversedNumber = 0, originalNumber;

    cout << "Enter a number: ";
    cin >> number;

    originalNumber = number;

    // Reversing the number
    while (number != 0) {
        int digit = number % 10;
        reversedNumber = reversedNumber * 10 + digit;
        number /= 10;
    }

    // Checking if the reversed number is equal to the original number
    if (originalNumber == reversedNumber) {
        cout << originalNumber << " is a palindrome." << endl;
    } else {
        cout << originalNumber << " is not a palindrome." << endl;
    }
}
*/

/*14.reverse Number
int main(){
    int number, reversedNumber = 0;

    cout << "Enter a number: ";
    cin >> number;


    // Reversing the number
    while (number != 0) {
        int digit = number % 10;
        reversedNumber = reversedNumber * 10 + digit;
        number /= 10;
    }
    cout << reversedNumber << endl;

    
}
*/

/*17.Armstrong number
int main(){
    int number,temp ,sum = 0;

    cout << "Enter a number: ";
    cin >> number;
    temp = number;


    // Reversing the number
    while (number != 0) {
        int digit = number % 10;
        sum = sum + (digit * digit * digit);
        number /= 10;
    }
    if(temp==sum)    
        printf("armstrong  number ");    
    else    
        printf("not armstrong number"); 

    return 0;
}
*/

int main() {
    int num1, num2, num3;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    if (num1 >= num2) {
        if (num1 >= num3) {
            cout << num1 << " is the greatest number." << endl;
        } else {
            cout << num3 << " is the greatest number." << endl;
        }
    } else {
        if (num2 >= num3) {
            cout << num2 << " is the greatest number." << endl;
        } else {
            cout << num3 << " is the greatest number." << endl;
        }
    }

    return 0;
} 