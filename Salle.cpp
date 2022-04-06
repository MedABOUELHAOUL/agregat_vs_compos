#include "Salle.h"
#include<iostream>
Salle::Salle():p(new Porte())
{
	//this->p= new Porte(); dynamic
	std::cout << "constructeur ss para Salle" << std::endl;
}

Salle::Salle(Porte p1,Tableau *t1)//:p(p1) alr1 static
{
	this->T = t1;
	this->p = new Porte(p1);// dynamic
	std::cout << "constructeur  avec para Salle" << std::endl;
	
}

Salle::~Salle()
{
	std::cout << "destructeur  Salle" << std::endl;
	delete this->p;
	this->p = 0;
}
