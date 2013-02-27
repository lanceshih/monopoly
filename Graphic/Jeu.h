/* 
 * File:   Jeu.h
 * Author: manu
 *
 * Created on 21 février 2013, 11:50
 */

#ifndef JEU_H
#define	JEU_H

#define SIZEWINDOWX 1366
#define SIZEWINDOWY 768

#include <vector>

typedef enum
{
	FIRSTMENU, CHOOSEPLAYER, INGAME
} GAMESTATE;

class GraphicEngine;
class Plateau;
class Pion;
class Joueur;
class BilletManager;

class Jeu
{
public:
	Jeu();
	~Jeu();
	void Run();
	Plateau* GetPlateau();
    void SetNbJoueurs(int nbJoueurs);
    void UpdateJoueurActuel();
    void UpdatePlateau();
    void SetPositionJoueur(Joueur* joueur);
    void SetSommeAPayer(int somme);
    void SetBilletACasser(int somme);
    BilletManager* GetBilletManagerARemplir();
    void UpdateSommeAPayer();
    void AfficherVoulezVousPayer(bool);
    void AfficherLancerDes(bool);
    void AfficherSommeAPayer(bool);
    void AfficherActionsPossibles(bool);
    void UpdateFinirTour();
    int GetSommeAPayer();
    int GetBilletACasser();

private:
	GraphicEngine* _graphicEngine;
	Plateau* _plateau;
    int _nbJoueurs;
    std::vector<Pion*> _pions;
    BilletManager* _billetManagerARemplir;
    int _sommeAPayer, _billetACasser;
};

#endif	/* JEU_H */

