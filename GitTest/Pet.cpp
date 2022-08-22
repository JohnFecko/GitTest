#include "Pet.h"
#include <iostream>

Pet::Pet(const char* name) {
	int size = sizeof(name) / sizeof(name[0]);
	delete[] _name;
	_name = new char[size + 1];
	strcpy_s(_name, INT_MAX, name);
}

const char* Pet::GetName() {
	return _name;
}