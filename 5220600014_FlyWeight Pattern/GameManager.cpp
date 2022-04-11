#include "GameManager.h"

void GameManager::generetObject()
{
	srand(time(0));

	for (int i = 0; i < 9; i++)
	{
		array[i] = *factory.getObject(randomType(0 + rand() % 3));
		array[i].setCoor(i);
		array[i].setSize(rand(), rand());
	}
}

void GameManager::printVectorSize()
{
	cout << "Jenis objek dibuat : ";
	for (auto i = factory.list.begin(); i != factory.list.end(); ++i)
	{
		cout << i->getTipe() << ", ";
	}
	cout << "Jadi ukuran vektor adalah " << factory.list.size() << endl;
}

string GameManager::randomType(int index)
{
	return tipe[index];
}

void GameManager::useObject()
{
	int i;
	cout << " di koordinat mana ? " << endl;
	cout << "Masukkan Koordinat : ";

	cin >> i;
	array[i].use();
	cout << endl;
	cout << "Tipe Object " << array[i].getTipe() << " pada " << i << " digunakan";
}