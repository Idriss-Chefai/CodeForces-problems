// Team.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n;
	int result = 0;
	int member1, member2, member3;
	string input;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> member1;
		cin >> member2;
		cin >> member3;
		if (
			(member1==1 && member2==1 && member3==0) ||
			(member1 == 1 && member2 == 0 && member3 == 1) ||
			(member1 == 0 && member2 == 1 && member3 == 1) ||
			(member1 == 1 && member2 == 1 && member3 == 1)
			){result += 1;}		
	}
	cout << result;
	return 0;
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
