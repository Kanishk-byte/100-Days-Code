#include <iostream>  
// * iostream is a header file that provides input and output services for C++ programs.


using namespace std; 
// * The using namespace std statement tells the compiler to use the std namespace. Namespaces are used to organize code into logical groups and to prevent name collisions that can occur especially when your code base includes multiple libraries.


int main()           
// * The main() function is the entry point of a C++ program. The execution of a C++ program starts from the main() function.


{
    cout << "Hello World!"; 
    // * cout is an object of iostream class and is used to print the output onto the console.

    return 0;               
    // * The return 0 statement is the "Exit status" of the program. It is used to indicate the successful termination of the program.
}