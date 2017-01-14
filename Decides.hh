#include "electeur.hh"
#pragma once
#include <iostream>

class Decides : public Electeur {
	public:
		Decides();
		~Decides();
		void infos(Media M);
	private:
};