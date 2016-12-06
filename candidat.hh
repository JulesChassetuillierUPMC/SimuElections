#pragma once
#include "media.hh"

class Candidat
{
	public: 
		Candidat(std::string name,std::string p, int image); // constructeur 
		~Candidat(); // destructeur
		std::string get_personnalite();
		int get_image();
		void interview(Media M); // modifie l'image du candidat
		std::string get_nom();
	private:
		std::string _nom;
		std::string _personnalite; // neutre, gentil, gros enculé
		int _image; // [0 3] : mauvaise, [4 7] : moyenne, [8 10] : bonne 	
};
