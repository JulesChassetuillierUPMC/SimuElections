#pragma once
#include <stdlib>
#include <iostream>

class Candidat
{
	public: 
		Candidat(std::string p, int image); // constructeur 
		~Candidat(); // destructeur
		std::string get_personnalite();
		int get_image();

	private:
		std::string _personnalite; // neutre, gentil, gros enculé
		int _image; // [0 3] : mauvaise, [4 7] : moyenne, [8 10] : bonne 	
};