#if !defined(__COLECTIE_NUMERE_H__)
#define __COLECTIE_NUMERE_H__

class ColectieNumere
{
	enum 
	{
		DIMENSIUNE_COLECTIE = 3
	};

public:
	ColectieNumere()
	{
		for(int i=0;i<DIMENSIUNE_COLECTIE; i++)
		{
			_pozitiiLibere[i]=true;
		}

	}

	bool Adauga (int elem);
	bool Elimina(int *elem);

private:
	int _elemente[DIMENSIUNE_COLECTIE];
	bool _pozitiiLibere[DIMENSIUNE_COLECTIE];

};

#endif

