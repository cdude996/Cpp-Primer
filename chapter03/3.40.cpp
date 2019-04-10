/*
 * Exercise 3.40: Write a program to define two character arrays initialized
 * from string literals. Now define a third character array to hold the
 * concatenation of the two arrays. Use strcpy and strcat to copy the two
 * arrays into the third.
 *
 * By Faisal Saadatmand
 */

#include <iostream>
#include <cstring>

int main()
{
	char str1[] = "conca";
	char str2[] = "tenate";
	const int size = strlen(str1) + strlen(str2) + 1;
	char str3[size], *ps3 = str3; 

	ps3 = strcat(strcpy(ps3, str1), str2);

	std::cout << ps3 << '\n';

	return 0;
}
