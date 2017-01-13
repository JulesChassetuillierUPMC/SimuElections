#include "media.hh"
#include <iostream>
#pragma once

// Journal : destiné aux "RadioJournalover", et aux gens intelligents
class Journal : public Media {
	public:
			Journal());
			~Journal();
			void interview(Candidat c); // Une Radio interviewe un candidat
	private:
		// Meme attributs que Media : nom et influence, hérités de la classe media (normalement), lesquels jouent un rôle dans l'interview

}