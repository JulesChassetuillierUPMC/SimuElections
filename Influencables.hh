#include "electeur.hh"
#pragma once
#include <iostream>

// classe virtuelle
class Influencables : public Electeur {
	public:
		Influencables();
		~Influencables();
		void infos(Media M);
	private:

 // methodes a rajouter
};