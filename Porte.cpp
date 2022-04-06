#include "Porte.h"
#include<iostream>
Porte::Porte()
{
	std::cout << "constructeur ss para Porte" << std::endl;
	this->L=0.0;
	this->l = 0.0;
}

Porte::Porte(float l, float L)
{
	std::cout << "constructeur avec para porte" << std::endl;
	this->l = l; 
	this->L = L;
}

Porte::~Porte()
{
	std::cout << "destructeur  Porte" << std::endl;
}
