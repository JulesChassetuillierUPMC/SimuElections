#pragma once
//#include <stdlib>
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <ctime>
#include <cmath>
#include <sstream>

#include "candidat.hh"
#include "media.hh"
#include "electeur.hh"

class Simulateur
{
public:
	Simulateur(int D,int Es);
	~Simulateur();
	
	void add_candidat(Candidat C);
	void remove_candidat(Candidat C);
	void add_media(Media* M);
	void remove_media(Media* M);
	void clear();


	std::string vote(Electeur E);
	//std::stringstream* run() ;
	std::string run();

private:
	int _duree;
	int _nbElecteurs;
	//int _nbCandidats;
	std::vector<Candidat> _listeCandidats;
	std::vector<Media*> _listeMedias;
	std::vector<Electeur> _listeElecteurs;

};

