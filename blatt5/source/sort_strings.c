#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
/*
    Liest eine Datei mit Buchungnummern ein.
    Gibt die unsortierten und sortierten Buchungsnummern aus.
*/
int main(int argc, const char *argv[]) {
    /* Ein Vektor nimmt beliebig viele strings/Buchungsnummern auf */
    vector<string> s;
    /* Iteriere Zeilenweise durch die Eingabe */
    for (string line; getline(std::cin, line);) {
        /* Ausgeben der gerade eingelesenen Zeile */
        std::cout << line << std::endl;
        /* Speichern der Buchungsnummer im Vektor */
        s.push_back(line);
    }
    /* Den kompletten Vektor sortieren lassen */
    sort(s.begin(), s.end());
    std::cout << "Sortierte Buchungsnummern" << std::endl;
    /* Iteriere elementweise durch den nun sortierten Vektor */
    for(vector<string>::size_type i = 0; i != s.size(); i++) {
        /* Gebe das aktuelle Element aus */
        std::cout << s[i] << std::endl;
    }
    return 0;
}
