#include<iostream>


using namespace std;

class Psy{
public:
string imie;
string rasa;
int wiek;
public:
    void dodaj_psa(){
        cout << "Podaj imie psa: ";
        cin >> imie;
        cout << "Podaj rase psa: ";
        cin >> rasa;
        cout << "Podaj wiek psa: ";
        cin >> wiek;
}
    void pokazPsa(){
    cout << "Twoj pies ma imie: "<< imie << ", jest rasy: "<< rasa << "i ma:"<< wiek << "lat. " << endl;
    };

int main(){

    Psy pies1;

    pies1.dodajPsa();
    pies1.pokazPsa();
    Pies1.szczekanie();
}



return 0;

}
