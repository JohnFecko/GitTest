#pragma once
#include <string>



class Pet
{
private:
	std::string _name = "";
	char* _name;
public:
	Pet(const char* name);
	const char* GetName();
};

