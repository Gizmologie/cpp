#include <iostream>
#include "lib.h"
#include "ecole.h"

int main ()
{
	calcul* calcul1= new calcul();
	std::cout<< calcul1->somme(6,5)<< std::endl;
// ecole
	ecole* date1= new date();
	std::cout<< date1->creation(1980)<< std::endl;
	return 0;
}



