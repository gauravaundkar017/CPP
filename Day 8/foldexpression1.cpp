//#include <iostream>
//using namespace std;
//
//template<typename... T>
//
//auto sum(T&&... args){
//	return(args+...);
//}
//
//
// int main() 
//{ 
//    auto result = sum(1,2,3,4,5);
//   cout << "Result: " << result << endl; 
//    return 0; 
//}	

#include <iostream> 

template<typename... Args> 
int sum(Args&&... args) 
{ 
	return (args + ...); // Performs a binary right fold with addition 
} 

int main() 
{ 
	int result = sum(1, 2, 3, 4); 
	std::cout << "Result: " << result << std::endl; 
	return 0; 
}

