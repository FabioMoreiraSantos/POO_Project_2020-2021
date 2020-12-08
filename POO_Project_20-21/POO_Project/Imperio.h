#ifndef Imperio_HEADER
#define Imperio_HEADER


#include <iostream>
#include <vector>
#include "Territorio.h"
#include <sstream>

using namespace std;

class Imperio
{
	int armazemProdutos = 0;
	int armazemOuro = 0;
	int maxUnidades = 3;
	int forcaMilitar = 4;
	int maxMilitar = 3;
	vector<Territorio*> reinado;				//vetor de territorios

public:
	Imperio() = default;

	//Getters
	int getMaxUnidades();
	int getMaxMilitar();
	string getVectorImperio();

	//Setters
	void setMaxUnidades(int maximo);
	void setMaxMilitar(int max);
	
	//Methods
	void addTerritorio(Territorio * territorio);
	void removeTerritorio(Territorio * territorio);
	bool conquistar(Territorio * territorio);
	string listaInfo() const;
	string listaConquistados() const;
};

#endif
