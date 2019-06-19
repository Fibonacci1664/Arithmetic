/*
 * Main.cpp
 *
 *  Created on: 17 Jun 2019
 *      Author: Dave
 */

#include<iostream>

using namespace std;

int main()
{
	double value1 = 7/4;	/*
							 * Even though this is declared a double, ints have been used in
							 * the calculation and so any remainders are discarded.
							 * In order to carry out floating point division, at least one of
							 * the numbers must be a decimal point number.
							 *
							 * If however this cannot be done then the same can be achieved by
							 * casting the int to a double or float.
							 *
							 * All rounding of ints is done down, if rounding up is req. a Math
							 * function must be used.
							 */

	cout << value1 << endl;

	/*
	 * ++ - Add 1
	 * += - Add the value declared
	 * /= - Divide the value declared
	 * *= - Multiply the value declared
	 * %  - Modulus - Return the remainder after a division
	 * %= - Continue to return the remainder after repeated divisions
	 *
	 * Anything in brackets take 'precedence' as per the normal math rules.
	 */

	return 0;
}


