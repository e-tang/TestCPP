//============================================================================
// Name        : Test.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C, Ansi-style
//============================================================================

#include <iostream>
#include <type_traits>

#include <stdlib.h>
#include <stddef.h>
#include <stdint.h>

class A {};

int main()
{
    std::cout << std::boolalpha;
    std::cout << std::is_fundamental<A>::value << '\n';
    std::cout << std::is_fundamental<int>::value << '\n';
    std::cout << std::is_fundamental<int&>::value << '\n';
    std::cout << std::is_fundamental<int*>::value << '\n';
    std::cout << std::is_fundamental<float>::value << '\n';
    std::cout << std::is_fundamental<float&>::value << '\n';
    std::cout << std::is_fundamental<float*>::value << '\n';

    std::cout << std::is_fundamental<short unsigned int>::value << '\n';

    std::cout << "size_t:" << sizeof(size_t) << std::endl;
    std::cout << "long long:" << sizeof(long long) << std::endl;
    std::cout << "uint16_t:" << sizeof(uint16_t) << std::endl;
    std::cout << "bool:" << sizeof(bool) << std::endl;
    return 0;
}
