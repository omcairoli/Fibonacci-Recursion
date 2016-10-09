//
//  main.cpp
//  Fibonacci Series Program using Recursion
//
//  Created by: Oscar M. Cairoli
//

#include <iostream>
#include "Fibonacci.h"

using namespace std;

int main(int argc, const char * argv[])
{
    int n = 0;
    
    cout << "Welcome to the Fibonacci Series Program" << endl;
    cout << "---------------------------------------" << endl;
    cout << "Enter a number: ";
    cin >> n;
    cout << Fib( n ) << endl;
    
    return 0;
}