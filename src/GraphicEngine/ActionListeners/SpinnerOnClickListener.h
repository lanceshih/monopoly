/* 
 * File:   SpinnerOnClickListener.h
 * Author: manu
 *
 * Created on 22 février 2013, 11:30
 */

#ifndef SPINNERONCLICKLISTENER_H
#define	SPINNERONCLICKLISTENER_H

#include "ActionListener.h"

class Spinner;

class SpinnerOnClickListener : public ActionListener
{
public:
	SpinnerOnClickListener(EVENTTYPE, Spinner* spinner);
	void Act(sf::Event);
};

#endif	/* SPINNERONCLICKLISTENER_H */

