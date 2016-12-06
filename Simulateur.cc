#include Simulateur.hh

using namespace std;


	Simulateur::Simulateur(int nbE,int D)
	:_nbElecteurs(nbE),
	_duree(D)
	{
		_listeCandidats = new std::vector<Candidat>;
		_listeMedias = new std::vector<Media>;
	}


	~Simulateur()
	{
		_listeCandidats.clear();
		_listeMedias.clear();

		delete _listeCandidats;
		delete _listeMedias;
	}

	void add_candidat(Candidat C)
	{
		_listeCandidats.push_back(C);
	}
	
	void add_media(Media M)
	{
		_listeMedias.push_back(M);
	}

	void remove_candidat(Candidat C)
	{
		for (vector<Candidat>::const_iterator it = _listeCandidats.begin(); it!=_listeCandidats.end();it++)
		{
			if(C.get_nom()==*it.get_nom())
			{
				_listeCandidats.remove(it);
			}
			else
			{
				printf("Erreur!!\n", );
			}
		}
	}
	void remove_media(Media M)
	{
		for (vector<Media>::const_iterator it = _listeMedias.begin(); it!=_listeMedias.end();it++)
		{
			if(C.get_nom()==*it.get_nom())
			{
				_listeMedias.remove(it);
			}
			else
			{
				printf("Erreur!!\n", );
			}
		}
	}
	void clear()
	{
		_listeCandidats.clear();
		_listeMedias.clear();
	}

	void run()
	{

	}
