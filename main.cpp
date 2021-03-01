#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

int main() {
    cout << "Kan du gangetabellen?" << endl;

    unsigned int time_ui = static_cast<unsigned int>( time(NULL) );
    unsigned int time_ui_two = static_cast<unsigned int>( time(NULL) );
    int range = 10;
    int faktor = (time_ui % 10 + 1);
    int faktor_to = (time_ui_two % 10 + 1);
    cout << "Hva er" << faktor << "*" << faktor_to << "?";
    string svar;
    cin >> svar;
    int dittsvar = stoi(svar);
    int svar_riktig = faktor*faktor_to;
    cout << "Svaret er " << ((dittsvar == svar_riktig) ? "Riktig" : "Feil") << endl;
    if(svar_riktig != dittsvar) {
        cout << "Riktig svar er: " << faktor*faktor_to;
    }
}