#pragma once
#include <iostream>
#include "electeur.hh"
#include "candidat.hh"
class Media
{
	public:
		Media(std::string name, int influence); // constructeur
		~Media(); // destructeur
		std::string get_name() const; 
		int get_influence() const;
		//virtual void infos(Electeur e) = 0;  // les electeurs consultent les informations -> DISPARAIT CAR IMPLEMENTE DANS ELECTEUR ET SOUS CLASSES ASSOCIEES
		virtual void interview(Candidat c) = 0; // un candidat est interviewé par un média (TV, Radio, Journal)


	private:
		std::string _nom; // ne change pas
		int _influence; // faible[0 3], moyenne [4 7], forte [8 10], ne change pas 

};
