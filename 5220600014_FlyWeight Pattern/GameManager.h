#pragma once
#include "Factory.h"

class GameManager
{
private:
	string tipe[3] = { "circle", "triangle", "rectangle" };
	Object array[9];
	Factory factory;

public:
	void generetObject();
	void printArray();
	void printVectorSize();

	string randomType(int a);
	void useObject();
};