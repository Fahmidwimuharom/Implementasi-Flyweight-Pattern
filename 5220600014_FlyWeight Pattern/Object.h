#pragma once
#include <iostream>

using namespace std;

struct Size
{
	string tipe;
	int size = 0;

};

class Object
{
private:
	string tipe;
	Size size[2];
	
	int coor = 0;
	bool status = false;

public:
	void setTipe(string tipe);
	string getTipe();

	void draw();
	void setSize(int x, int y);
	Size* getSize();

	void setBool(bool y);
	bool getBool();

	void use();

	void setCoor(int x);
	int getCoor();
};