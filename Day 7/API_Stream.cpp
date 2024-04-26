#include <iostream>
using namespace std;

int main(){

    // char a;
    // cout<<"Enter char a = ";
    // cin.get(a);

    // cout<<"a = "<<a<<endl;
    // cout<<"--------"<<endl;
    // cout.put(a);
    // cout<<"\n--------"<<endl;
    // cout<<"--------"<<endl;
    // char str[10];
    // cin.getline(str,10);
    // cout.write(str, cin.gcount());

    // int n = 100;
    // cout.width(10);
    // cout.fill('*');
    
    // cout<<n;


    char c;

  // Get the next character from the input stream without extracting it.
  c = std::cin.peek();

  // If the next character is a newline, skip it.
//   if (c == '\n') {
//     std::cin.get();
//   }

//   // Otherwise, print the character.
//   else {
    std::cout << c << std::endl;
//   }

  return 0;
}