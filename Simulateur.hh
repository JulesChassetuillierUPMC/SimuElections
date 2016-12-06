#pragma once
#include <stdlib>
#include <iostream>
#include <vector>
#include <algorithm>

#include "candidat.hh"
#include "media.hh"

class Simulateur
{
public:
	Simulateur(int nbE, int D);
	~Simulateur();
	void add_candidat(Candidat C);
	void remove_candidat(Candidat C);
	void add_media(Media M);
	void remove_media(Media M);
	void clear();

	void run();

private:
	int _nbElecteurs;
	int _duree;
	//int _nbCandidats;
	std::vector<Candidat> _listeCandidats;
	std::vector<Media> _listeMedias;
};