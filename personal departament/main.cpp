#include <iostream>
using namespace std;

#include "colectie_numere.h"

int main()
{
	int cod;

	ColectieNumere coduriPersonalDept;
	coduriPersonalDept.Adauga(2345);
	coduriPersonalDept.Adauga(4562);
	coduriPersonalDept.Adauga(1263);

	coduriPersonalDept.Elimina(&cod);
	cout << "COD: "<< cod << endl;

	coduriPersonalDept.Adauga(7451);

	cout << "Coduri personal departament " << endl;
	while(coduriPersonalDept.Elimina(&cod) )
	{
		cout << "Cod: " << cod << endl;
	}

	getchar();
	return	0;

}
