#include "Simulateur.hh"

using namespace std;


	Simulateur::Simulateur(int D,int Es)
	:_duree(D),
	 _nbElecteurs(Es)
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
	
	void Simulateur::add_media(Media *M)
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
	void Simulateur::remove_media(Media* M)
	{
		int i=0;
		for (vector<Media*>::const_iterator it2 = _listeMedias.begin(); it2!=_listeMedias.end();it2++)
		{
			if(M->get_name()==(*it2)->get_name())
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

	string Simulateur::vote(Electeur E)
	{
		int randnumber = rand() % _listeCandidats.size() ;
		vector<int> listeImgC;
		for (vector<Candidat>::iterator it1 = _listeCandidats.begin(); it1!=_listeCandidats.end();it1++)
				{
					listeImgC.push_back(it1->get_image());
				}
		int number = ( randnumber + listeImgC[randnumber] + E.get_intelligence() ) % _listeCandidats.size();

		return _listeCandidats[number].get_nom();

	}

	string Simulateur::run() 
	{

			int i;
			for(i=0;i<_nbElecteurs;i++)
			{
				int randInt = rand() % 11;
				//int randInt = 10; pour nos tests
				Electeur E(randInt);
				_listeElecteurs.push_back(E);
			}	
		//int i; Pas besoin pour l'instant
	//	for (int i = 0; i < _duree; ++i)
	//	{
			//int j; pas besoin pour l'instant
			for (vector<Media*>::const_iterator it = _listeMedias.begin(); it!=_listeMedias.end();it++)
			{
				for (vector<Candidat>::iterator it1 = _listeCandidats.begin(); it1!=_listeCandidats.end();it1++)
				{
					(*it)->interview(*it1); //Plus tard, implementer influence pour candidat
				}
				for(vector<Electeur>::iterator itE = _listeElecteurs.begin(); itE!=_listeElecteurs.end();itE++)
				{
					itE->infos(*it); // A chaque tour, chaque électeur regarde chaque media
				}

			}
			
			
			map<string, int> map1;
			for (vector<Electeur>::const_iterator it2 = _listeElecteurs.begin(); it2!=_listeElecteurs.end();it2++) // map
			{
				string AA = vote(*it2);
				map1[AA]++; //Plus tard , implementer vote pour electeur
			}
			string mapWnom = map1.begin()->first;
			int mapWval = map1.begin()->second;
			for(map<string,int>::const_iterator it3 = map1.begin() ; it3 != map1.end() ; it3++)
			{	
				if(mapWval< it3->second)
				{
					mapWnom = it3->first;
					mapWval = it3->second;
				}
				//cout << "Le candidat est " << it3->first << " avec " << it3->second <<" voix" << endl;
			}
			
//			cout << mapWnom << " a gagné l'élection avec " << mapWval*100.0/_nbElecteurs << "\% des voix " << endl;
		//stringstream Stext1 ;
		//Stext1 << mapWnom << " a gagné l'élection avec " << mapWval*100.0/_nbElecteurs << "\% des voix " << endl;
		//stringstream* Stext = &Stext1;
		
	//	string Stext = mapWnom +  " a gagné l'élection avec " + (mapWval*100.0/_nbElecteurs).to_string() << "\% des voix " << endl;
	ostringstream data;		
	data << mapWnom << " a gagne l'election avec " << mapWval*100.0/_nbElecteurs << "\% des voix " ;
		string	Stext = data.str();
		_listeElecteurs.clear();
		
		return Stext;
			
	//	}
	//
		// On determine quel candidat a le plus de voix
		// La map est automatiquement trié normalement	
		// On l'affiche
		
		//cout <<"Le candidat qui a gagné est : " << (map1.end())->first << "avec " << (map1.end())->second << "voix" << endl; //A faire plus tard , implementer << pour Electeur
	}
