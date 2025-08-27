
/* Por más puerta backend que sea y aunque estemos 
violando los principios de seguridad informatica, el PIN es 1006.

Adicionalmente, se puede cambiar el saldo de la cuenta mediante la variable 
"saldo" la cual es un int.*/

#include <iostream>
#include <string>

using namespace std;

int opcion, num_id, pin_ultraseguro_no_hackers, retirar, pin_inco = 1;
int saldo = 18900786; //Variable para modificar saldo

int main(){
    cout << "Bienvenido al cajero automático de Banco U.S.A.D.G" << endl;
    cout << "¿Que deseas hacer hoy?" << endl;
    cout << "1. Consultar saldo." << endl;
    cout << "2. Retirar dinero." << endl;
    cout << "3. Pagar recibos." << endl;
    cin >> opcion;

    if(opcion == 1){
        cout << "Ingresa tu número de identificación: " << endl;
        cin >> num_id;
        cout << "Ingresa el PIN de tu cuenta" << endl;
        cin >> pin_ultraseguro_no_hackers;
        if(pin_ultraseguro_no_hackers == 1006){
            cout << "Bienvenido!, " << num_id << endl;
            cout << "Dispones en este momento de: " << endl;
            cout << saldo << endl;
        }else{
            cout << "PIN incorrecto, inicie de nuevo la operación" << endl;
            return 0;}
        }else if(opcion == 2){
        cout << "Ingresa tu número de identificación: " << endl;
        cin >> num_id;
        cout << "Ingresa el PIN de tu cuenta" << endl;
        cin >> pin_ultraseguro_no_hackers;
        }

    else if(opcion == 3){
            cout << "Todavía no contamos con esa actualización, empiece de nuevo." << endl;
            return 0;}
        if(pin_ultraseguro_no_hackers == 1006){
            cout << "       Bienvenido!,          " << num_id << endl;
            cout << "Dispones en este momento de: " << endl;
            cout << "       " <<saldo<< "         " << endl;
            cout << "¿Cuanto dinero deseas retirar?" << endl;
            cin >> retirar;
            cout << "Contando dinero..." << endl;
            cout << "Retire el dinero." << endl;
            cout << "Retire la tarjeta" << endl;
            cout << "Saldo nuevo: " <<endl;
            cout << saldo - retirar <<endl;
            cout << "Gracias por usar el banco ultraseguro U.S.A.D.G" << endl;
            cout << "    Tu dinero está a salvo con nosotros!       " << endl;
            return 0;}
    else{
            cout << "PIN Incorrecto, devolviendo al menú." << endl;
            pin_inco + 1;
            cout << "Bienvenido al cajero automático de Banco U.S.A.D.G" << endl;
            cout << "¿Que deseas hacer hoy?" << endl;
            cout << "1. Consultar saldo." << endl;
            cout << "2. Retirar dinero." << endl;
            cout << "3. Pagar recibos." << endl;
            cin >> opcion;
            if(opcion == 1){
                cout << "Ingresa tu número de identificación: " << endl;
                cin >> num_id;
                cout << "Ingresa el PIN de tu cuenta" << endl;
                cin >> pin_ultraseguro_no_hackers;
                if(pin_ultraseguro_no_hackers == 1006){
                    cout << "       Bienvenido!,          " << num_id << endl;
                    cout << "Dispones en este momento de: " << endl;
                    cout << saldo << endl;
                }else{
                    cout << "PIN incorrecto, inicie de nuevo la operación" << endl;
                    return 0;}
                }else if(opcion == 2){
                cout << "Ingresa tu número de identificación: " << endl;
                cin >> num_id;
                cout << "Ingresa el PIN de tu cuenta" << endl;
                cin >> pin_ultraseguro_no_hackers;
                if(pin_ultraseguro_no_hackers == 1006){
                    cout << "       Bienvenido!,          " << num_id << endl;
                    cout << "Dispones en este momento de: " << endl;
                    cout << "       " <<saldo<< "         " << endl;
                    cout << "¿Cuanto dinero deseas retirar?" << endl;
                    cin >> retirar;
                    cout << "Contando dinero..." << endl;
                    cout << "Retire el dinero." << endl;
                    cout << "Retire la tarjeta" << endl;
                    cout << "Saldo nuevo: " <<endl;
                    cout << saldo - retirar;
                    cout << "Gracias por usar el banco ultraseguro U.S.A.D.G" << endl;
                    cout << "    Tu dinero está a salvo con nosotros!       " << endl;
                    return 0;}
            else{
                    if(pin_inco > 1)
                    cout << "Iniciando secuencia de autodestruccion, intruso detectado." << endl;
                    cout << "Ubicación mandada a las autoridades." << endl;
                    cout << "La IP del intruso es : " << endl; //todavía no alcanza el conocimiento para un doxx.
                    cout << "Banco U.S.A.D.G, su dinero, seguro." << endl;
                    return 0;}

    


        }
 

    }

        
return 0;
        
}


