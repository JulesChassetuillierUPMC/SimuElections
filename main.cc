#include <iostream>
#include "electeur.hh"
#include "media.hh"
#include "candidat.hh"
#include "Simulateur.hh"
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
  srand(time(NULL));
/* PARTIE TEST MEDIA */
  // constructeur media
  cout<<"Premier media : "<<endl;
  Media M("Le Monde",9);
  // get_name()
  string nom_media = M.get_name();
  cout<<"\tNom du media : "<< nom_media << endl;
  // get_influence()
  int infuence = M.get_influence();
  cout<<"\tinfuence : "<< infuence <<endl;
  cout<<endl;

  cout<<"Debut de l'election : "<<endl;
  
/* PARTIE TEST CANDIDAT */
  cout<<endl;
  // constructeur candidat
  cout<<"Premier candidat : "<<endl;
  Candidat c("Toto","neutre",2);
  // get_nom()
  string name = c.get_nom();
  cout<<"\tNom : "<< name << endl;
  // get_personnalite()
  string smart = c.get_personnalite();
  cout<<"\tpersonnalité : "<< smart <<endl;
  // get_image()
  int image = c.get_image();
  cout<<"\tImage : "<< image << endl;
  
    Candidat c2("Toto2","neutre",10);
    
    Candidat c3("Toto3","neutre",1);
      
    Candidat c4("Toto4","neutre",1);

  	Candidat c5("Toto5","neutre",2);

/* PARTIE TEST ELECTEUR */  
  // constructeur electeur
  cout<<endl;
  cout<<"Premier electeur : "<<endl;
  Electeur e(8);
  int fute = e.get_intelligence();
  cout<<"\tIntelligence : "<< fute << endl;


/* PARTIE TEST interactions */ 
  cout<<endl;
  cout<<"Premier candidat "<<name<< " se fait interviewer par "<<nom_media<<endl;
  c.interview(M);
  int image2 = c.get_image();
  cout<<"\tImage post interview : "<< image2 <<endl;
  cout<<endl;
  cout<<"Premier electeur d'intelligence "<<fute<<" consulte un article du journal "<<nom_media<<endl;
  e.infos(M);
  int fute2 = e.get_intelligence();
  cout<<"\tIntelligence post interview : "<< fute2 << endl;
  
  
  /* PARTIE TEST SIMULATION */
  int dt = 12;
  int elec=200;
  Simulateur SiT(dt,elec);
  SiT.add_candidat(c);
  SiT.add_candidat(c2);
  SiT.add_candidat(c3);
  SiT.add_candidat(c4);
  SiT.add_candidat(c5);    
  SiT.add_media(M);
  SiT.run();
    
  return 0;
}
