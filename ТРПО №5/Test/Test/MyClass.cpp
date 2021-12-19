#include "MyClass.h"
#include <iostream>
using namespace std;

MyClass::MyClass()
{
	this->i = 0;
}

void MyClass::DoSmth(int i)
{
	cout << i << endl;
}