#include <iostream>
#include <iomanip> // Pour std::hex et std::setfill

using namespace std;

// D�finition des structures et unions
struct Srgb {
    unsigned char r; // Composante rouge
    unsigned char g; // Composante verte
    unsigned char b; // Composante bleue
};

union UColor {
    unsigned int val;         // Couleur en entier (32 bits)
    Srgb components;          // Acc�s par composantes RGB
    unsigned char tabCol[3];  // Tableau pour les 3 composantes
};

int main() {
    UColor color; // Cr�ation d'une variable UColor

    // Saisie de la couleur en entier (hexad�cimal)
    cout << "Entrez une couleur en hexad�cimal (RVB, format 0xRRGGBB) : ";
    cin >> hex >> color.val;

    // Affichage des composantes RGB
    cout << "\n--- D�composition de la couleur ---" << endl;
    cout << "Rouge (R) : 0x" << hex << setfill('0') << setw(2) << (int)color.components.r << endl;
    cout << "Vert  (G) : 0x" << hex << setfill('0') << setw(2) << (int)color.components.g << endl;
    cout << "Bleu  (B) : 0x" << hex << setfill('0') << setw(2) << (int)color.components.b << endl;
}