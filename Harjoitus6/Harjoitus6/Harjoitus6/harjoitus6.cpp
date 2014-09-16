/*Harjoitus 6
Sami Liimatainen
IIO14S1
16.9.2014
Versio 1.0

Kirjoita ohjelma, joka kysyy k‰ytt‰j‰lt‰ lompakossa olevan raham‰‰r‰n
ja lihapiirakan hinnan.

Ohjelma tutkii, onko k‰ytt‰j‰ll‰ varaa ostaa lihapiirakka.
Jos on, ohjelma ilmoittaa, kuinka paljon lompakkoon j‰‰ viel‰ rahaa.
Muuten ohjelma kehottaa k‰ytt‰j‰‰ paastoamaan.

K‰yt‰ vain kahta muuttujaa. ‰l‰ v‰henn‰ lompakon sis‰lt‰‰, ellet voi
ostaa lihapiirakkaa.*/

#include <iostream> 
using namespace std;
int main()
{
	int lihis;
	int rahat;

	cout << "Anna raham‰‰r‰ ";
	cin >> rahat;

	cout << "Anna lihapiirakan hinta ";
	cin >> lihis;

	if (rahat > lihis)
	{
		rahat = rahat - lihis;
		cout << "Rahaa j‰‰ " << rahat;
		cout << "\n";
	}
	else
		cout << "Rahat ei riit‰\n";
}