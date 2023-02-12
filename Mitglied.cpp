#include "Mitglied.h"

double Mitglied::mtlBeitrag = 10;

Mitglied::Mitglied()
{
	name = "";
	vorname = "";
	benutzername = "";
	passwort = "";
}

Mitglied::Mitglied(string name, string vorname)
{
	this->name = name;
	this->vorname = vorname;
	benutzername = "";
	passwort = "";
}

bool Mitglied::anmeldenFuerAktion(Aktion* a) //muss immer mit anmelden funktion von Aktion ausgeführt werden.
{
	if (meineTermine.contains(a)) //falls schon drinne
	{
		return true;
	}
	if (meineWarteliste.contains(a)) //wenn er schon in der Warteschlange ist wird er daraus entfernt und angemeldet
	{
		meineWarteliste.remove(a);
		meineTermine.add(a);
		return true;
	}
	meineTermine.add(a);
	return true;
}

void Mitglied::eintragenInWarteliste(Aktion* a)
{
	if (!meineTermine.contains(a))
	{
		meineWarteliste.add(a);
	}
}

bool Mitglied::abmeldenVonAktion(Aktion* a)
{
	if (meineTermine.remove(a))
	{	
		if (meineWarteliste.size() > 0)
		{
			meineTermine.add(meineWarteliste.remove(0));
		}
		return true;
	}
	return meineWarteliste.remove(a);
}

double Mitglied::berechneZahlung(int jahr, int monat)
{
	// To Do 1.6.2
}

string Mitglied::getname()
{
	return name;
}

string Mitglied::getbenutzername()
{
	return benutzername;
}

string Mitglied::getpasswort()
{
	return passwort;
}

List<Aktion*> Mitglied::getmeineWarteliste()
{
	return meineWarteliste;
}

List<Aktion*> Mitglied::getmeineTermine()
{
	return meineTermine;
}

Mitglied::~Mitglied()
{
}
