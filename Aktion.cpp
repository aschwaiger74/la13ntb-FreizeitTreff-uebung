#include "Aktion.h"
#include "Organisator.h"


Aktion::Aktion()
{
	// To Do 1.4
}

Aktion::Aktion(string datum, string beginn, string titel, double kosten, int plaetze, Organisator* org)
{
	// To Do 1.4
}

bool Aktion::anmelden(Mitglied* m) //muss immer mit anmeldenFuerAktion funktion von Mitglied ausgeführt werden.
{
	// To Do 1.4
}

void Aktion::eintragenInWarteliste(Mitglied* m)
{
	if (this->istTeilnehmer(m)) //falls m schon ein teilnehmer ist 
	{
		return;
	}
	if (this->istAufWarteliste(m)) //falls m schon auf der warteliste steht 

	{
		return;
	}
	warteliste.add(m);
}

bool Aktion::abmelden(Mitglied* m)
{
	// To Do 1.4
}

bool Aktion::istTeilnehmer(Mitglied* m)
{
	// To Do 1.4
}

bool Aktion::istAufWarteliste(Mitglied* m)
{
	// To Do 1.4
}

bool Aktion::istAusgebucht()
{
	// To Do 1.4
}

string Aktion::getDatum()
{
	return datum;
}

double Aktion::getKosten()
{
	return kosten;
}

int Aktion::getanr()
{
	return anr;
}

List<Mitglied*> Aktion::getteilnehmer()
{
	return teilnehmer;
}

List<Mitglied*> Aktion::getwarteliste()
{
	return warteliste;
}

Organisator* Aktion::getveranstalter()
{
	return veranstalter;
}

Aktion::~Aktion()
{
}
