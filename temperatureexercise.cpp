#include <iostream>

using namespace std;

const char* s = "\n";

int main()
{
    // Write code here
    double fah;
    double celsius;
    double calcolotemp;
    int scelta;



    while (true)
    {
        cout << s << "Che tipo di Calcolo vorresti fare?" << endl;
        cout << s << "[ 1 ] Celsius -> Fahrenheit" << endl;
        cout << s << "[ 2 ] Fahrenheit -> Celsius" << endl;

        cout << s << "Scegli una delle due opzioni: ";
        cin >> scelta;


        if (scelta == 1 && scelta == 2 )
        {
            break;
        }

        switch (scelta)
        {
            case 1:
            {
                string cit1;

                cout << s << "Inserisci il nome della tua città: ";
                cin >> cit1;

                cout << s << "Inserisci la temperatura in Celsius: ";
                cin >> celsius;

                calcolotemp = (celsius * 1.8) + 32;
                cout << s << "La temperatura in : " << cit1 <<" è:" << calcolotemp << endl;
                break;
            }
            case 2:
            {
                string cit2;
                cout << s << "Inserisci il nome della tua città: ";
                cin >> cit2;

                cout << s << "Inserisci la temperatura in Fahrenheit: ";
                cin >> fah;

                calcolotemp = (fah - 32) / 1.8;

                cout << s << "La temperatura in : " << cit2 << " è: " << calcolotemp << endl;
                break;
            }
        }
    }

    return 0;
}
