#include <iostream>
using namespace std;
enum EEtat {
	vide, palette, rouleau
};
struct SPalette
{
	int poids;
	char ref[21];
};
struct SRouleau {
	float longeur;
	int numero;
};
union Ucontenu {
	SPalette palette;
	SRouleau rouleau;
};
struct Scasier {
	int px;
	int py;
	SPalette palette;
	SRouleau rouleau;
};
int main() {
	cout << "Le peograme Transgerbeur" << endl;
}