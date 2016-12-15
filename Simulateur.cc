#include "Simulateur.hh"

using namespace std;


	Simulateur::Simulateur(int D)
	:_duree(D)
	{
		// _listeCandidats = new std::vector<Candidat>;
		// _listeMedias = new std::vector<Media>;
	}


	Simulateur::~Simulateur()
	{
		Simulateur::clear();
	}

	void Simulateur::add_candidat(Candidat C)
	{
		_listeCandidats.push_back(C);
	}
	
	void Simulateur::add_media(Media M)
	{
		_listeMedias.push_back(M);
	}

	void Simulateur::remove_candidat(Candidat C)
	{
		int i=0;
		for (vector<Candidat>::const_iterator it = _listeCandidats.begin(); it!=_listeCandidats.end();it++)
		{
			if(C.get_nom()==it->get_nom())
			{
				_listeCandidats.erase(_listeCandidats.begin()+i);
			}
			else
			{
				cout << "Erreur!!" << endl;
			}
		i++;
		}
	}
	void Simulateur::remove_media(Media M)
	{
		int i=0;
		for (vector<Media>::const_iterator it2 = _listeMedias.begin(); it2!=_listeMedias.end();it2++)
		{
			if(M.get_name()==it2->get_name())
			{
				_listeMedias.erase(_listeMedias.begin()+i);
			}
			else
			{
				cout << "Erreur!!" << endl;
			}
		i++;
		}
	}
	void Simulateur::clear()
	{
		_listeCandidats.clear();
		_listeMedias.clear();
	}

	void Simulateur::run()
	{
		//int i; Pas besoin pour l'instant
	//	for (int i = 0; i < _duree; ++i)
	//	{
			//int j; pas besoin pour l'instant
			for (vector<Media>::const_iterator it = _listeMedias.begin(); it!=_listeMedias.end();it++)
			{
				for (vector<Candidat>::const_iterator it1 = _listeCandidats.begin(); it1!=_listeCandidats.end();it1++)
				{
					// it1->influence(*it); Plus tard, implementer influence pour electeur
				}
			}
			map<Electeur, int> map1;
			for (vector<Electeur>::const_iterator it2 = _listeElecteurs.begin(); it2!=_listeElecteurs.end();it2++) // map
			{
				// map1[it2->vote()]++; Plus tard , implementer vote pour electeur
			}
	//	}
		// On determine quel candidat a le plus de voix
		// La map est automatiquement trié normalement	
		// On l'affiche

	//		cout <<"Le candidat qui a gagné est : " << (map1.end())->first << "avec " << (map1.end())->second << "voix" << endl; A faire plus tard , implementer << pour Electeur
	}
