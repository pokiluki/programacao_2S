/*
 A program that prints "Hello world!".
*/
#include <iostream>
#include <python.h>
using namespace std;

int main() { 
  // Print the message 
  Py_initialize();
  PyRun_SimpleString("print('hello world from python')");
  Py_Finalize();
  cout << "Hello world!\n";
  return 0; 
}
