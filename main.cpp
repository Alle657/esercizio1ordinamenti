#include <iostream>
using namespace std;

int main() {
    int arr[10];
    bool scambiato;

    cout << "Inserisci 10 numeri interi:\n";
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    // Bubble Sort con sentinella
    for (int i = 0; i < 9; i++) {
        scambiato = false;

        for (int j = 0; j < 9 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                scambiato = true;

                // Stampa array dopo ogni scambio
                cout << "Scambio: ";
                for (int k = 0; k < 10; k++) {
                    cout << arr[k] << " ";
                }
                cout << endl;
            }
        }

        if (!scambiato) {
            break; 
        }
    }

    cout << "\nArray ordinato:\n";
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
