#include "Anniversaire.h"
#include "GameEngine/Participant/Participant.h"
#include "GameEngine/Case/Case.h"
#include "Carte.h"
#include "../../Plateau.h"

Anniversaire::Anniversaire(Plateau *plateau, int numero, std::string libelle, TYPECARTE typeCarte, int somme) : Carte(plateau, numero, libelle, typeCarte)
{
    _sommeADonner = somme;
}


void Anniversaire::Agir(Joueur *joueur, BilletManager *billetManager)
{
    joueur->Crediter(billetManager);
    _plateau->GetPaquetCartes(_typeCarte).push(this);
}


std::string Anniversaire::GetMessage()
{
    return _libelle;
}


ACTION Anniversaire::DoitPayer(Joueur *joueur)
{
    return DOITETREPAYE;
}

int Anniversaire::SommeAPayer()
{
    return _sommeADonner;
}