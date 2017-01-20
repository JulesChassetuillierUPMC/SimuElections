#pragma once
#include <iostream>
#include <string>
#include "media.hh"

class Media;

class Electeur // a rajouter : + il est con, plus il a de chances de voter pour un enculé
{
	public:
		Electeur(int intelligence); // constructeur
		~Electeur(); // destructeur
		int get_intelligence();
		/*virtual*/ void infos(Media* M); // modifie l'intelligence de l'electeur
	protected: 
		int _intelligence; // [0 3] : con ; [4 7] : pas trop con ; [8 10] : intelligent
};

