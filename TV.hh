#include "media.hh"
#include <iostream>
// Pas besoin d'inclure candidat.hh car déjà dans media, idem pour electeur
#pragma once

// TV : destinée aux électeurs "Telemaniaque", et cons de surcroît
class TV : public Media {
	public:
			TV(); // Constructeur, besoin de mettre les attributs ? (même constructeur que media)
			~TV();
			void interview(Candidat c); // Une chaine TV interviewe un candidat
			
	private:
		// Meme attributs que Media : nom et influence, hérités de la classe media (normalement), lesquels jouent un rôle dans l'interview

};