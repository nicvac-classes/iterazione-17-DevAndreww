#include <iostream>

using namespace std;

int main() {
    float n, max, min, media, negativi, sommaP;
    int i, l;

    i = 0;
    negativi = 0;
    l = 0;
    sommaP = 0;
    do {
        cout << "Inserire numero" << endl;
        cin >> n;
        if (i == 0) {
            max = n;
        } else {
            if (n > max) {
                max = n;
            }
        }
        if (i == 0) {
            min = n;
        } else {
            if (n < min) {
                min = n;
            }
        }
        if (n >= 0) {
            sommaP = n + sommaP;
            l = l + 1;
        } else {
            negativi = negativi + 1;
        }
        i = i + 1;
    } while (n != 0);
    cout << "Il valore massimo è " << max << "." << endl;
    cout << "Il valore minimo è " << min << "." << endl;
    cout << "Sono stati inseriti " << negativi << " valori negativi." << endl;
    cout << "La media dei valori positivi è " << sommaP / l << "." << endl;
    
}
