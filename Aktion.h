//#pragma once
#include <iostream>
#include <string>

#include "List.h"
using namespace std;

class Mitglied;
class Organisator;
class Aktion
{
private:
	// To Do 1.4

	Organisator* veranstalter;
	List<Mitglied*> teilnehmer;
	List<Mitglied*> warteliste;
public:
	Aktion();
	Aktion(string datum, string beginn, string titel, double kosten, int plaetze, Organisator* org);
	bool anmelden(Mitglied* m); //muss immer mit anmeldenFuerAktion funktion von Mitglied ausgeführt werden.
	void eintragenInWarteliste(Mitglied* m);
	bool abmelden(Mitglied* m);
	bool istTeilnehmer(Mitglied* m);
	bool istAufWarteliste(Mitglied* m);
	bool istAusgebucht();
	string getDatum();
	double getKosten();
	int getanr();
	List<Mitglied*> getteilnehmer();
	List<Mitglied*> getwarteliste();
	Organisator* getveranstalter();
	~Aktion();
};

