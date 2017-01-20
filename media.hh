#pragma once
#include <iostream>
#include "electeur.hh"
#include "candidat.hh"

class Candidat;

class Media
{
	public:
		Media(std::string name, int influence)
		:_nom(name),
		_influence(influence)
		{
		}; // 
		~Media()
		{
		} // destructeur
		std::string get_name() const
		{
			return _nom;
		} 
		int get_influence() const
		{
			return _influence;
		};
		//virtual void infos(Electeur e) = 0;  // les electeurs consultent les informations -> DISPARAIT CAR IMPLEMENTE DANS ELECTEUR ET SOUS CLASSES ASSOCIEES
		virtual void interview(Candidat c) = 0; // un candidat est interviewé par un média (TV, Radio, Journal)


	protected:
		std::string _nom; // ne change pas
		int _influence; // faible[0 3], moyenne [4 7], forte [8 10], ne change pas 

};
