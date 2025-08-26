// Sistema para evaluar cumpleaños con base a descuento.

#include <iostream>
using namespace std;

int main() {
    int nacimi, mesnacido, dianacido;

    cout << "Sistema para evaluar el descuento con base en el cumpleaños, ¡Bienvenido!" << endl;
    cout << "Ingrese el año de nacimiento de la persona (sin comas ni puntos): ";
    cin >> nacimi;
    
    if (nacimi < 1900 || nacimi > 2025) {
        cout << "El año es inválido." << endl;
        return 0;
    }cout << "Ingrese el mes de nacimiento en número: ";
    cin >> mesnacido;

    if (mesnacido < 1 || mesnacido > 12) {
        cout << "El mes es inválido, verifique la información." << endl;
        return 0;
    }

    cout << "Ingrese el día de nacimiento: ";
    cin >> dianacido;

    bool valido = false;

    if (mesnacido == 1 || mesnacido == 3 || mesnacido == 5 || mesnacido == 7 ||
        mesnacido == 8 || mesnacido == 10 || mesnacido == 12) {
        if (dianacido > 0 && dianacido <= 31) {
            valido = true;
        }
    } else if (mesnacido == 4 || mesnacido == 6 || mesnacido == 9 || mesnacido == 11) {
        if (dianacido > 0 && dianacido <= 30) {
            valido = true;
        }
    } else if (mesnacido == 2) {
        if (dianacido > 0 && dianacido <= 28) {
            valido = true;
        }
    }

    if (valido) {
        cout << "¡La persona es elegible para el descuento!" << endl;
    } else {
        cout << "El día del mes es inválido, verifique de nuevo." << endl;
        return 0;
    }

    return 0;
}
