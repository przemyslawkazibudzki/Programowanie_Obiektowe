#include <iostream>

using namespace std;

class zwierzePies {
    string imie;
    string rasa;
    int wiek;
public:
    void przypisaniePieska() {
    cout <<  "Podaj imie psa -> ";
    cin >> imie;
    cout << "Podaj rase pieska -> ";
    cin >> rasa;
    cout << "Zapodaj wiek twojego pieska -> ";
    cin >> wiek;
    }
    void pokazPieska() {
    cout << "Ten piesek o ktorym wspominales posiada imie: " << imie << ", jest rasy: " << rasa << " a wiek tego pieska wynosi " << wiek << " lat." << endl;
    }
    void wyrazyPieska(){
    cout << "Ten piesek o imieniu " << imie << " jest zly i szczeka: HAUL HAU HAYU";
    }
};

int main()
{
    int k;
    cout << "Napisz ile psow mozesz napisac -> ";
    cin >> k;
    zwierzePies *l = new zwierzePies[k];

    for (int i=0; i<k; i++)
    {
     l[i].przypisaniePieska();
    }

    delete [] l;

    zwierzePies piesiaw1;
    piesiaw1.przypisaniePieska();
    piesiaw1.pokazPieska();
    piesiaw1.wyrazyPieska();
    return 0;
}
