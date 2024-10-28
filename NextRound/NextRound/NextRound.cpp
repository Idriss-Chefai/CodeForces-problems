// Next Round.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <string>
#include <stdlib.h>

int main()
{
    int resultat[100] = { 0 };
    int nextRound = 0;
    std::string input;
    std::getline(std::cin, input); // Read the entire line
    std::string delimiter = " ";
    size_t pos = input.find(delimiter);
    int n = atoi(input.substr(0, pos).c_str());
    input.erase(0, pos + delimiter.length()); // Erase up to and including the delimiter
    int k = atoi(input.substr(0, input.find(delimiter)).c_str());
    std::getline(std::cin, input);
    for (int i = 0; i < n; i++) {
        pos = input.find(delimiter);
        resultat[i] = atoi(input.substr(0, pos).c_str());
        input.erase(0, pos + delimiter.length());
    }
    for (int i = 0; i < n; i++) {
        if (resultat[i] >= resultat[k-1] && resultat[i]>0) nextRound++;
    }

    std::cout << nextRound;


    return 0;
}
