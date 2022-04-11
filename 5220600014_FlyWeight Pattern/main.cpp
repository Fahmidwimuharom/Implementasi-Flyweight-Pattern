#include "GameManager.h"
#include "Factory.h"
#include "Object.h"

int main()
{
	Factory factory;
	GameManager gameManager;

	cout << " Membuat Objek .." << endl;
	gameManager.generetObject();

	cout << " Menampilkan Objek .." << endl;
	gameManager.printArray();
	gameManager.printVectorSize();

	int opt = 0;
	while ( opt!= 99)
	{
		cout << endl;
		cout << "1. Gunakan Object" << endl;
		cout << "2. Tampilkan semua Object" << endl;
		cout << "3. Daftar Objek yang Dibuat Pada Vektor" << endl;
		cout << "99. keluar" << endl;
		cout << "[] : "; cin >> opt;

		switch (opt)
		{
		case 1:
			gameManager.useObject();
			break;
		case 2:
			gameManager.printArray();
			break;
		case 3:
			gameManager.printVectorSize();
			break;
		}
	}
}