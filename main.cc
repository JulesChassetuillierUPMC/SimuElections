#include <iostream>
#include "electeur.hh"
#include "media.hh"
#include "candidat.hh"
//#include "Simulateur.hh"
#include "TV.hh"
#include "Radio.hh"
#include "Journal.hh"
#include <ctime>
#include <cstdlib>

#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
//#include <SDL/SDL_tff.h>

using namespace std;

void pause()
{
    int continuer = 1;
    SDL_Event event;
 
    while (continuer)
    {
        SDL_WaitEvent(&event);
        switch(event.type)
        {
            case SDL_QUIT:
                continuer = 0;
        }
    }
}

int main()
{
  srand(time(NULL));

/* PARTIE TEST MEDIA */
  // constructeur media
  cout<<"Premier media : "<<endl;
  //Media M("Le Monde",9);
  TV T("TF1",8);

  // get_name()
  string nom_media = T.get_name();
  cout<<"\tNom du media : "<< nom_media << endl;
  // get_influence()
  int infuence = T.get_influence();
  cout<<"\tinfuence : "<< infuence <<endl;
  cout<<endl;

  // cout<<"Debut de l'election : "<<endl;
  
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
  T.interview(c); // appel a image_alterne3 normalement
  int image2 = c.get_image(); 
  cout<<"\tImage post interview : "<< image2 <<endl;
  cout<<endl;
 /* cout<<"Premier electeur d'intelligence "<<fute<<" consulte un article du journal "<<nom_media<<endl;
  e.infos(M);
  int fute2 = e.get_intelligence();
  cout<<"\tIntelligence post interview : "<< fute2 << endl;
  */
  
  /* PARTIE TEST SIMULATION 
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
  */  
  
      if (SDL_Init(SDL_INIT_VIDEO) == -1) // Démarrage de la SDL. Si erreur :
    {
        fprintf(stderr, "Erreur d'initialisation de la SDL : %s\n", SDL_GetError()); // Écriture de l'erreur
        exit(EXIT_FAILURE); // On quitte le programme
    }
    SDL_Surface *ecran = NULL, *imageDeFond = NULL;
    ecran = SDL_SetVideoMode(640, 480, 32, SDL_HWSURFACE| SDL_RESIZABLE | SDL_DOUBLEBUF); // Ouverture de la fenêtre
        if (ecran == NULL) // Si l'ouverture a échoué, on le note et on arrête

    {

        fprintf(stderr, "Impossible de charger le mode vidéo : %s\n", SDL_GetError());

        exit(EXIT_FAILURE);

    }
    SDL_WM_SetCaption("Election Simulator !", NULL);
    
    SDL_Rect positionFond;
    positionFond.x = 0;
    positionFond.y = 0;
    
    imageDeFond = IMG_Load("Elections-2017.png");
    SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 17, 75, 50));
    
    SDL_BlitSurface(imageDeFond, NULL, ecran, &positionFond);
    
     // Coloration de la surface ecran en bleu-vert


    SDL_Flip(ecran); /* Mise à jour de l'écran avec sa nouvelle couleur */   
    pause(); // Mise en pause du programme
 
 
    SDL_FreeSurface(imageDeFond);
    SDL_Quit();
 
  return 0;
}
