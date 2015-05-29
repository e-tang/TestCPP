/*
 * TestTS.cpp
 *
 *  Created on: May 29, 2015
 *      Author: tangl3
 */

/*
 * TEST TEMPlATE SPECIFICATION
 */

#include <iostream>
#include <type_traits>

#include <stdlib.h>
#include <stddef.h>
#include <stdint.h>

using namespace std;

template<typename T>
class A {
public:
	T a_;
	T result_;

	A(T a) : a_(a) {}

	void plus(T b) {
		result_ = a_ + b;
	}

	void print() {
		cout << result_ << endl;
	}
};

template<>
class A<double> :
{
	void plus(int b) {

	}
};

int main()
{
	A<int> a(2);
	a.plus(3);
	a.print();

	A<double> d(3.0);
	return 0;
}


