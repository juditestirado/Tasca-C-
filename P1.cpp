//Exercici Pràctic : Escriu un programa que determini si un dígit(0 - 9) és parell o senar amb les següents
//condicions :
//1. Utilitza la classe std::string per definir dos textos : "parell" i "senar".
//2. En iniciar el programa, crea un vector dinàmic de booleans amb bool* elMeuVector = new bool[10]; i
//calcula si els números de 0 a 9 són parells o senars.
//3. Demana un número a l'usuari per comprovar dins d'un bucle infinit while (true).

#include <iostream>
#include <string>

using namespace std;

int main() {
  
    string textParell = "parell";
    string textSenar = "senar";

    bool* elMeuVector = new bool[10];

    for (int i = 0; i < 10; ++i) {
        elMeuVector[i] = (i % 2 == 0);
    }

    while (true) {
        int numero;
        cout << "Introdueix un digit (0-9) o un numero fora de rang per sortir: ";
        cin >> numero;

        if (numero >= 0 && numero <= 9) {
            if (elMeuVector[numero]) {
                cout << "El numero " << numero << " es " << textParell << "." << endl;
            }
            else {
                cout << "El numero " << numero << " es " << textSenar << "." << endl;
            }
        }
        else {
            cout << "Numero fora de rang (0-9). Sortint del programa..." << endl;
            break; 
        }
    }

    delete[] elMeuVector;

    return 0;
}