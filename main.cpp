/* 
 * File:   main.cpp
 * Author: manu
 *
 * Created on 7 février 2013, 09:51
 */

#include <cstdlib>
#include <SFML/Graphics.hpp>

#include "GraphicEngine/GraphicEngine.h"
#include "Jeu.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv)
{
	Jeu* jeu = new Jeu;
	jeu->Run();
	
	delete jeu;

	return 0;
}

