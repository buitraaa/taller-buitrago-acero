#include <iostream>
using namespace std;

int main(){
    float prod1, prod2, prod3, prod4, prod5, numdivtotal;
    int masprod, divi, numdiv;
    char operador;  // <- para multiplicación
    
    cout << "Sistema para caja registradora de productos, Bienvenido!" << endl;

    cout << "Ingrese el precio del primer producto: " << endl;
    cin >> prod1;
    
    cout << "¿Desea continuar añadiendo productos? 0 = No, 1 = Si" << endl;
    cin >> masprod;
        if (masprod == 1){
            cout << "Ingrese el precio del segundo producto: " << endl;
            cin >> prod2;
        }else{
            cout << "Este es el precio total de la venta: " << endl;
            cout << prod1 << endl;

            // ---- OPCIÓN MULTIPLICAR ----
            cout << "¿Desea multiplicar el precio por un número? Ingrese '*' para multiplicar o cualquier otra cosa para omitir: ";
            cin >> operador;
            if (operador == '*'){
                float factor;
                cout << "Ingrese el número por el que desea multiplicar: ";
                cin >> factor;
                cout << "El resultado de la multiplicación es: " << prod1 * factor << endl;
            }else{
                cout << "Error: Solo se admite '*' para multiplicar. Intente de nuevo." << endl;
            }

            cout << "¿Desea dividir el precio entre un número de personas? 0=No, 1=Si" << endl;
            cin >> divi;
                if (divi == 1){
                cout << "Ingrese el número de personas por los cuales desea dividir (solo números naturales)" << endl;
                cin >> numdiv;
                if (numdiv == 0){
                    cout << "No ingresó un número válido, empiece de nuevo. " << endl;
                    return 0;
                }
                numdivtotal = prod1 / numdiv; 
                cout << "Cada persona debe pagar:  " << numdivtotal << endl;
                return 0;
                }
            
            return 0;
        }
    cout << "¿Desea continuar añadiendo productos? 0 = No, 1 = Si" << endl;
    cin >> masprod;
        if (masprod == 1){
            cout << "Ingrese el precio del tercer producto: " << endl;
            cin >> prod3;
        }else{
            cout << "Este es el precio total de la venta: " << endl;
            cout << prod1 + prod2 << endl;

            // ---- OPCIÓN MULTIPLICAR ----
            cout << "¿Desea multiplicar el precio por un número? Ingrese '*' para multiplicar o cualquier otra cosa para omitir: ";
            cin >> operador;
            if (operador == '*'){
                float factor;
                cout << "Ingrese el número por el que desea multiplicar: ";
                cin >> factor;
                cout << "El resultado de la multiplicación es: " << (prod1 + prod2) * factor << endl;
            }else{
                cout << "Error: Solo se admite '*' para multiplicar. Intente de nuevo." << endl;
            }

            cout << "¿Desea dividir el precio entre un número de personas? 0=No, 1=Si" << endl;
            cin >> divi;
                if (divi == 1){
                cout << "Ingrese el número de personas por los cuales desea dividir (solo números naturales)" << endl;
                cin >> numdiv;
                if (numdiv == 0){
                    cout << "No ingresó un número válido, empiece de nuevo. " << endl;
                    return 0;
                }
                numdivtotal = (prod1 + prod2) / numdiv; 
                cout << "Cada persona debe pagar:  " << numdivtotal << endl;
                return 0;
                }
            
        }
    cout << "¿Desea continuar añadiendo productos? 0 = No, 1 = Si" << endl;
    cin >> masprod;
        if (masprod == 1){
            cout << "Ingrese el precio del cuarto producto: " << endl;
            cin >> prod4;
        }else{
            cout << "Este es el precio total de la venta: " << endl;
            cout << prod1 + prod2 + prod3 << endl;

            // ---- OPCIÓN MULTIPLICAR ----
            cout << "¿Desea multiplicar el precio por un número? Ingrese '*' para multiplicar o cualquier otra cosa para omitir: ";
            cin >> operador;
            if (operador == '*'){
                float factor;
                cout << "Ingrese el número por el que desea multiplicar: ";
                cin >> factor;
                cout << "El resultado de la multiplicación es: " << (prod1 + prod2 + prod3) * factor << endl;
            }else{
                cout << "Error: Solo se admite '*' para multiplicar. Intente de nuevo." << endl;
            }

            cout << "¿Desea dividir el precio entre un número de personas? 0=No, 1=Si" << endl;
            cin >> divi;
                if (divi == 1){
                cout << "Ingrese el número de personas por los cuales desea dividir (solo números naturales)" << endl;
                cin >> numdiv;
                if (numdiv == 0){
                    cout << "No ingresó un número válido, empiece de nuevo. " << endl;
                    return 0;
                }
                numdivtotal = (prod1 + prod2 + prod3) / numdiv; 
                cout << "Cada persona debe pagar:  " << numdivtotal << endl;
                return 0;
                }
        }
    cout << "¿Desea continuar añadiendo productos? 0 = No, 1 = Si" << endl;
    cin >> masprod;
        if (masprod == 1){
            cout << "Ingrese el precio del quinto producto: " << endl;
            cin >> prod5;
            cout << "Límite alcanzado, el precio de la venta es el siguiente: " << endl;
            cout << prod1 + prod2 + prod3 + prod4 + prod5 << endl; 

            // ---- OPCIÓN MULTIPLICAR ----
            cout << "¿Desea multiplicar el precio por un número? Ingrese '*' para multiplicar o cualquier otra cosa para omitir: ";
            cin >> operador;
            if (operador == '*'){
                float factor;
                cout << "Ingrese el número por el que desea multiplicar: ";
                cin >> factor;
                cout << "El resultado de la multiplicación es: " << (prod1 + prod2 + prod3 + prod4 + prod5) * factor << endl;
            }else{
                cout << "Error: Solo se admite '*' para multiplicar. Intente de nuevo." << endl;
            }

            cout << "¿Desea dividir el precio entre un número de personas? 0=No, 1=Si" << endl;
            cin >> divi;
                if (divi == 1){
                cout << "Ingrese el número de personas por los cuales desea dividir (solo números naturales)" << endl;
                cin >> numdiv;
                if (numdiv == 0){
                    cout << "No ingresó un número válido, empiece de nuevo. " << endl;
                    return 0;
                }
                numdivtotal = (prod1 + prod2 + prod3 + prod4 + prod5) / numdiv; 
                cout << "Cada persona debe pagar:  " << numdivtotal << endl;
                return 0;
                }
        }else{
            cout << "Este es el precio total de la venta: " << endl;
            cout << prod1 + prod2 + prod3 + prod4 << endl;

            // ---- OPCIÓN MULTIPLICAR ----
            cout << "¿Desea multiplicar el precio por un número? Ingrese '*' para multiplicar o cualquier otra cosa para omitir: ";
            cin >> operador;
            if (operador == '*'){
                float factor;
                cout << "Ingrese el número por el que desea multiplicar: ";
                cin >> factor;
                cout << "El resultado de la multiplicación es: " << (prod1 + prod2 + prod3 + prod4) * factor << endl;
            }else{
                cout << "Error: Solo se admite '*' para multiplicar. Intente de nuevo." << endl;
            }

            cout << "¿Desea dividir el precio entre un número de personas? 0=No, 1=Si" << endl;
            cin >> divi;
                if (divi == 1){
                cout << "Ingrese el número de personas por los cuales desea dividir (solo números naturales)" << endl;
                cin >> numdiv;
                if (numdiv == 0){
                    cout << "No ingresó un número válido, empiece de nuevo. " << endl;
                    return 0;
                }
                numdivtotal = (prod1 + prod2 + prod3 + prod4) / numdiv; 
                cout << "Cada persona debe pagar:  " << numdivtotal << endl;
                return 0;
                }
        }
        
    return 0;    
}
