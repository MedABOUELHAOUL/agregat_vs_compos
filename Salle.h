#pragma once
#include"Porte.h"
#include"Tableau.h"
class Salle
{

public:
	Salle();
	Salle(Porte p1,Tableau *t1);
	~Salle();
private: 
	Tableau* T;
	//Porte p; // static
	Porte *p;  // dyamique

};

