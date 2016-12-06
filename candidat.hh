#pragma once
#include <stdlib>
#include <iostream>

class candidat
{
	public: 
		candidat(std::string p, int image); // constructeur 
		~candidat(); // destructeur
		std::string get_personnalite(candidat c);
		int get_image(candidat c);

	private:
		std::string _personnalite; // neutre, gentil, gros enculé
		int _image; // [0 3] : mauvaise, [4 7] : moyenne, [8 10] : bonne 	
};