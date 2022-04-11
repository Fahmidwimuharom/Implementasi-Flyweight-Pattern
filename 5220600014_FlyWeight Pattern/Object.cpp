#include "Object.h"

using namespace std;

void Object::setTipe(string a)
{
	this->tipe = a;

	if (tipe == "circle")
	{
		size[0].tipe = "radius";
		size[1].tipe = "radius";
	}
	else if (tipe == "triangle")
	{
		size[0].tipe = "base";
		size[1].tipe = "tinggi";
	}
	else if (tipe == "rectangle")
	{
		size[0].tipe = "panjang";
		size[1].tipe = "lebar";
	}
}

void Object::setSize(int a, int b)
{
	size[0].size = a;
	size[1].size = b;
}

Size* Object::getSize()
{
	return size;
}

void Object::setBool(bool b)
{
	status = b;
}

bool Object::getBool()
{
	return status;
}

void Object::setCoor(int a)
{
	coor = a;
}

int Object::getCoor()
{
	return coor;
}

void Object::draw()
{
	cout << " Menggambar ["
		<< tipe << ", "
		<< size[0].tipe << " = " << size[0].size
		<< ", "
		<< size[1].tipe << " = " << size[1].size
		<< " - Koordinat" << coor
		<< " ]"
		<< " is ";
	if (this->getBool())
	{
		cout << "Diaktifkan";
	}
	else {
		cout << "Nonaktif";
	}
	cout << endl;
}

string Object::getTipe()
{
	return tipe;
}

void Object::use()
{
	status = true;
}


