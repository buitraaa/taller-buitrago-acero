#include <iostream>
#include <string>

using namespace std;
int horaEntrada, minutoEntrada;

int main(){

    cout << "Ingrese la hora a la que entra: " << endl;
    cin >> horaEntrada;

    if (horaEntrada < 0 || horaEntrada > 23) {
        cout << "Hora inválida. Por favor, ingrese una hora entre 0 y 23. Empiece de nuevo." << endl;
        return 0;
    } else {
        cout << "Ingrese el minuto en el que entra: " << endl;
        cin >> minutoEntrada;
        if (minutoEntrada < 0 || minutoEntrada > 59) {
            cout << "Minuto inválido. Por favor, ingrese un minuto entre 0 y 59. Empiece de nuevo." << endl;
            return 0;
        } else {
            cout << "La hora de entrada es: " << horaEntrada << ":" << minutoEntrada << endl;
            return 0;
        }
    }

    return 0;
}