// Pointer, Array, Reference
#include <iostream>
#include <vector>
#include <list>

using namespace std;

// array
char v[6];	// 6 char array

// pointer
char* p;	// Pointer to character

char* p2 = &v[3];	// p point to v's 4th element
char x = *p2;		// *p2 represents the object pointed to by p2

void copy_fct()
{
	int v1[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int v2[10];
	for (auto i = 0; i != 10; ++i)
		v2[i] = v1[i];
}

// range-for-statement
void print()
{
	int v[] = { 0,1,2,3,4,5,6,7,8,9 };

	for (auto x : v)		// for each x in v
		cout << x << '\n';

	for (auto x : { 10,21,32,43,54,65 })
		cout << x << '\n';
}

void increment() {
	int v[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	for (auto& x : v)		// plus 1 for every x in v
		++x;
}

void sort(vector<double>& v);		//sorting v(v is array of double)

// How to avoid conversion arguments and not making copies at the same time
double sum(const vector<double>&);

/* declarator operators

T a[n]		// T[n] : a is array of T
T*p			// T* :p is pointer to T
T& r		// T& : r is reference of T
T f(A)		// T(A) : f is function that take type A as an argument and return T 

*/

// Null pointer

double* pd = nullptr;
Link<Record>* lst = nullptr;
int x = nullptr;