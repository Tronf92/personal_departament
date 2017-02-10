#include "colectie_numere.h"

bool ColectieNumere::Adauga(int elem)
{
	bool ret;
	int poz;
	for(poz=0; (poz<DIMENSIUNE_COLECTIE)&& !_pozitiiLibere[poz];++poz);
	if (DIMENSIUNE_COLECTIE == poz)
	{
		ret=false;
	}
	else
	{
		_elemente[poz]=elem;
		_pozitiiLibere[poz]=false;
		ret=true;

	}

	return ret;

}

bool ColectieNumere::Elimina(int *elem)
{
	bool ret;
	int poz;
	for(poz=0; (poz<DIMENSIUNE_COLECTIE) && _pozitiiLibere[poz];++poz);
	if(DIMENSIUNE_COLECTIE ==poz)
	{
		ret=false;

	}
	else
	{
		*elem= _elemente[poz];
		_pozitiiLibere[poz]=true;
		ret= true;

	}
	return ret;

}

