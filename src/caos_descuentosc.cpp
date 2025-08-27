#include <iostream>
#include <string>

using namespace std;

int main(){
    // Variables
    float prod1, prod2, prod3, prod4, prod5, numdivtotal, precio_total, precio_total_10, precio_total_10_2, prodvip1, prodvip2, prodvipf, descprod, descfinal, desc10, desccinco10;
    int masprod, divi, numdiv, vip, prodtotales, masprod2, masprod3, masprod4;
    string name_prod1, name_prod2, name_prod3, name_prod4, name_prod5;

   
    //VIP
    cout << "Bienvenido al programa para calcular descuentos!" << endl;
    cout << "¿El cliente es VIP?" << endl;
    cout << "Si= 1, No = 0" << endl;
    cin >> vip;

    //Añadir producto 1
    cout << "Ingrese el  precio del primer producto:" << endl;
    cin >> prod1;
    cout << "Ingrese el nombre del primer producto" << endl;
    cin >> name_prod1;
    cout << "Esta es la lista de productos que ha añadido:" << endl;
    cout << name_prod1 << " Precio: " << prod1 << endl;
    
    cout << "¿Desea añadir más productos?" << endl;

    //Añadir producto 2
    cout << "Si= 1, No = 0" << endl;
    cin >> masprod;

    if (masprod == 1){
        //Añadió segundo producto
        cout << "Ingrese el precio del segundo producto:" << endl;
        cin >> prod2;
        cout << "Ingrese el nombre del segundo producto" << endl;
        cin >> name_prod2;
        cout << "Esta es la lista de productos que ha añadido:" << endl;
        cout << name_prod1 << " Precio: " << prod1 << endl;
        cout << name_prod2 << " Precio: " << prod2 << endl;
        precio_total = prod1 + prod2;
        cout << "¿Desea añadir mas productos?" << endl;
        cout << "Si= 1, No = 0" << endl;
        cin >> masprod2;

        if (masprod2 == 1){
            //Añadió tercer producto
            cout << "Ingrese el precio del tercer producto:" << endl;
            cin >> prod3;
            cout << "Ingrese el nombre del tercer producto" << endl;
            cin >> name_prod3;
            cout << "Esta es la lista de productos que ha añadido:" << endl;
            cout << name_prod1 << " Precio: " << prod1 << endl;
            cout << name_prod2 << " Precio: " << prod2 << endl;
            cout << name_prod3 << " Precio: " << prod3 << endl;
            precio_total = prod1 + prod2 + prod3;
            cout << "¿Desea añadir mas productos?" << endl;
            cout << "Si= 1, No = 0" << endl;
            cin >> masprod3;

            if (masprod3 == 1){
                //Añadió cuarto producto
                cout << "Ingrese el precio del cuarto producto:" << endl;
                cin >> prod4;
                cout << "Ingrese el nombre del cuarto producto" << endl;
                cin >> name_prod4;
                cout << "Esta es la lista de productos que ha añadido:" << endl;
                cout << name_prod1 << " Precio: " << prod1 << endl;
                cout << name_prod2 << " Precio: " << prod2 << endl;
                cout << name_prod3 << " Precio: " << prod3 << endl;
                cout << name_prod4 << " Precio: " << prod4 << endl;
                precio_total = prod1 + prod2 + prod3 + prod4;
                cout << "¿Desea añadir mas productos?" << endl;
                cout << "Si= 1, No = 0" << endl;
                cin >> masprod4;

                if (masprod4 == 1){
                    //Añadió quinto producto
                    cout << "Ingrese el precio del quinto producto:" << endl;
                    cin >> prod5;
                    cout << "Ingrese el nombre del quinto producto" << endl;
                    cin >> name_prod5;
                    cout << "Esta es la lista de productos que ha añadido:" << endl;
                    cout << name_prod1 << " Precio: " << prod1  << endl;
                    cout << name_prod2 << " Precio: " << prod2 << endl;
                    cout << name_prod3 << " Precio: " << prod3 << endl;
                    cout << name_prod4 << " Precio: " << prod4 << endl;
                    cout << name_prod5 << " Precio: " << prod5 << endl;
                    precio_total = prod1 + prod2 + prod3 + prod4 + prod5;
                    cout << "Límite de productos alcanzado" << endl;
                    if (vip == 1){
                        prodvip1 = precio_total * 20;
                        prodvip2 = prodvip1 / 100;
                        cout << precio_total - prodvip2;
                        return 0;
                    }
                } else {
                    // No añadió quinto producto
                    cout << "La venta total fue la siguiente: " << endl;
                    cout << name_prod1 << endl;
                    cout << name_prod2 << endl;
                    cout << name_prod3 << endl;
                    cout << name_prod4 << endl;
                    cout << name_prod5 << endl;
                    cout << "Cliente elegible para descuento del 10%." << endl;
                    precio_total_10 = precio_total * 10;
                    precio_total_10_2 = precio_total_10 / 100;
                    cout << "Precio total;" << endl;
                    cout << precio_total - precio_total_10_2;
                    return 0;
                }

            } else {
                // No añadió cuarto producto
                cout << "Esta es la venta: " << endl;
                if (vip == 1){
                    prodvip1 = precio_total * 20;
                    prodvip2 = prodvip1 / 100;
                    cout << precio_total - prodvip2;
                    return 0;
                } else {
                    cout << "La venta total fue la siguiente: " << endl;
                    cout << name_prod1 << endl;
                    cout << name_prod2 << endl;
                    cout << name_prod3 << endl;
                    cout << "Precio total: " <<endl;
                    cout << prod1 + prod2 + prod3;
                    return 0;
                }
            }

        } else {
            // No añadió tercer producto (pero sí añadió segundo)
            cout << "Esta es la venta: " << endl;
            if (vip == 1){
                cout << "La venta total fue la siguiente: " << endl;
                cout << name_prod1 << endl;
                cout << name_prod2 << endl;
                prodvip1 = precio_total * 20;
                prodvip2 = prodvip1 / 100;
                cout << precio_total - prodvip2;
                return 0;
            } else {
                cout << "La venta total fue la siguiente: " << endl;
                cout << name_prod1 << endl;
                cout << name_prod2 << endl;
                cout << "Precio total: " <<endl;
                cout << prod1 + prod2;
                return 0;
            }
        }

    } else {
        // No añadió segundo producto (solo 1 producto)
        cout << "Esta es la venta: " << endl;
        if (vip == 1){
            cout << "La venta total fue la siguiente: " << endl;
            cout << name_prod1 << endl;
            prodvip1 = precio_total * 20;
            prodvip2 = prodvip1 / 100;
            cout << precio_total - prodvip2;
            return 0;
        } else {
            cout << "La venta total fue la siguiente: " << endl;
            cout << name_prod1 << endl;
            cout << "Precio total: " << prod1;
            return 0;
        }
    }

    return 0;
}
