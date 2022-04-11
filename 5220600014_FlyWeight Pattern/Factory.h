#pragma once
#include <iostream>
#include "Object.h"
#include <vector>

class Factory
{
public:
	vector<Object> list;
	Object* getObject(string type);
};