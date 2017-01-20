#pragma once
#include "media.hh"



class Candidat
{
	public: 
		Candidat(std::string name,std::string p, int image); // constructeur 
		~Candidat(); // destructeur
		std::string get_personnalite() const; 
		int get_image() const; 
		std::string get_nom() const; 
		
		// 3 methodes qui à partir de l'image d'un candidat, la modifie. Ces methodes seront utilisées dans les sous classes de media (TV, Radio et Journal)
		// "image_alterne1" est destinée aux médias de faible influence, "image_alterne2" aux médias d'influence moyenne, et "image_alterne3" aux medias de grande influence
		int image_alterne1(int image);
		int image_alterne2(int image);
		int image_alterne3(int image);
		
	private:
		std::string _nom; // ne peut pas évoluer
		std::string _personnalite; // neutre, gentil, gros enculé, ne peut pas évoluer
		int _image; // [0 3] : mauvaise, [4 7] : moyenne, [8 10] : bonne 	
};
