#include <iostream>

using namespace std;

int main()
{
    int wagoniki[6]; //ilość wagonów w trasie
    int iloscGraczy; //ilość graczy
    int mnoznik[] = {1,2,4,6,8,12}; //mnożniki dla tras 
    int najwieksza;
    cout<<"podaj ilosc graczy: "; 
    cin>>iloscGraczy; //podajemy ilość graczy
    int wynik[iloscGraczy]; //tablica wyników

    for(int i=0; i<iloscGraczy;i++) //pętla dla każdego gracza do wpisywania wyników, będzie potwarzana tyle razy ile jest graczy
    {
        cout <<"Gracz numer " << i+1 << endl;
        wynik[i] = 0; //zerowanie i tego elementu tablicy
        for(int p=0; p <=5; p++) //pętla do zerowania ilośći wagonów w trasie
        {
            wagoniki[p] = 0;
        }
        for(int k=0; k <=5; k++) //pętla wprowadzenia danych
        {
            cout << "podaj ilosc tras z: " << k+1 <<" wagonami" <<endl; //zapytanie ilość ilość tras, kolejno 6 elementów
            cin>> wagoniki[k];
        }
        for(int n=0; n<=5; n++) //pętla do liczenia ilośći punktów
        {
            wynik[i] += wagoniki[n] * mnoznik[n]; //liczy ilosc punktów
        }
        cout << "Gracz numer " << i+1 <<endl;
        cout << "===============================================================" <<endl;
        cout << "Ilosc tras z jednym wagonikiem: " << wagoniki[0] <<endl;
        cout << "Ilosc tras z dwoma wagonikiami (mnożnik x2): " << wagoniki[1] <<endl;
        cout << "Ilosc tras z trzena wagonikiami (mnożnik x4) " << wagoniki[2] <<endl;
        cout << "Ilosc tras z czterema wagonikiami (mnożnik x6) " << wagoniki[3] <<endl;
        cout << "Ilosc tras z pięcioma wagonikiami (mnożnik x8) "<< wagoniki[4] <<endl;
        cout << "Ilosc tras z sześcioma wagonikiami (mnożnik x12)"<< wagoniki[5] <<endl;
        cout << "===============================================================" <<endl;
        cout << "Koncowy wynik: " << wynik[i] <<endl; //koniec głównej pętli
    }
    for( int j =0; j < iloscGraczy ;j++) //pętla sprawdzająca najwyższy wynik
    {
        najwieksza = wynik[j]; //porównanie kolejno wyników do pierwszej wartośći
        if(najwieksza < wynik[j])
        {
            najwieksza = wynik[j]; //jeśli jest większa, przypisz do największa
        }
    }
    cout <<" ============================================================== "<<endl;
    cout << "Wygrywa gracz z iloscią punktów: " << najwieksza <<endl; //wyświetla komunikat w konsoli 
}