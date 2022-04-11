#include "Factory.h"

Object* Factory::getObject(string a)
{
	Object* returnObject = new Object;

	struct object_type
	{
		object_type(string const& n) : type(n) 
		{

		}
		bool operator () (Object& p)
		{ return p.getTipe() == type; }
	private:
		string type;
	};

	vector<Object>::iterator it = find_if(list.begin(), list.end(), object_type(a));

	if (it != list.end())
	{
		*returnObject = *it;
	}
	else
	{
		Object* temp;
		temp = new Object();
		temp->setTipe(a);
		list.push_back(*temp);
		returnObject = temp;
	}
	return returnObject;
}