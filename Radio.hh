#include "media.hh"
#include <iostream>
#pragma once

// Radio : destinée aux "RadioJournalover", en majorité des gens d'intelligence moyenne
class Radio : public Media {
	public:
			Radio();
			~Radio();
			void interview(Candidat c); // Une Radio interviewe un candidat
	private:
		// Meme attributs que Media : nom et influence, hérités de la classe media (normalement), lesquels jouent un rôle dans l'interview

}