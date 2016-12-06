#pragma once
#include <stdlib>
#include <iostream>

class electeur
{
	public:
		electeur(int intelligence); // constructeur
		~electeur(); // destructeur
		int get_intelligence(electeur e);
	private: 
		int _intelligence; // 0 : con ; 1 : pas trop con
};