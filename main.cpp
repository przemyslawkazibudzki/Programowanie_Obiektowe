#include <iostream>                      // Trzeba dokoñczyæ
                                        // Trzeba dokoñczyæ
using namespace std;                     // Trzeba dokoñczyæ
                                        // Trzeba dokoñczyæ
class Ludziska {
    int wiek;
    string imie;
public:
    void ustawObiekt() {
    cout << "Wprowadz imie -> ";
    cin >> imie;
    cout << "Wprowadz tutaj wiek -> ";
    cin >> wiek;
    }
    void bierzObiekt() {
    cout << "Oto imie zapisane tutaj -> " << imie << " tutaj wiek -> " << wiek << endl;
    }
};

int main()
{
    int k;
    cout << "Ile ludzi jest -> ";
    cin >> k;
    Ludziska obiekt1;
    Ludziska * obiekt2 = new Ludziska[k];


    for (int i=0;i<k;i++){
        obiekt2[i].ustawObiekt();
    }

    obiekt1.ustawObiekt();
    //(*obiekt1).bierzObiekt();
    //Ludziska * obiekt1 = new Ludziska;
    //obiekt1.ustawObiekt;
    //obiekt1.bierzObiekt;
    //obiekt2.ustawObiekt();
    //obiekt2.bierzObiekt();
    //delete obiekt1;
    delete [] obiekt2;
    return 0;
}
