#pragma once
class Pet
{
private:
	char* _name;
public:
	Pet(const char* name);
	const char* GetName();
};

