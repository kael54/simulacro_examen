#include <iostream>
using namespace std;

int main() {
    string word;
    bool contraseña;
    bool contiene_mayuscula;
    bool contiene_minuscula;
    bool contiene_digito;
    bool contiene_otro;
    int si = 1;


    while (si == 1) {
        contraseña = true;
        contiene_mayuscula = false;
        contiene_minuscula = false;
        contiene_digito = false;
        contiene_otro = false;

        cout << "Escriba una contraseña:\n";
        cin >> word;
        if (word == "?")
        {
            cout<< "su contraseña no admite ?";
        }
        

        int size = word.size();
        if (size >= 8 && size <= 14) {
            for (char c : word) {
                int num = c;   
                if (num >= 33 && num <= 126) {
                    for (char c : word) {
                        if (isupper(c)) {
                            contiene_mayuscula = true;
                        } else if (islower(c)) {
                            contiene_minuscula = true;
                        } else if (isdigit(c)) {
                            contiene_digito = true;
                        } else {
                            contiene_otro = true;
                        }
                        if (contiene_mayuscula && contiene_minuscula && contiene_digito && contiene_otro) {
                            contraseña = true;
                            
                            break;
                            
                        }
                    }
                } else {
                    contraseña = false;
                    break;
                }
            }
        } else {
            contraseña = false;
        }

        cout << (contraseña ? "True\n" : "False\n");
        cout << "¿Desea volver a intentar su contraseña?\n";
        cout << "1 --> Sí\n";
        cout << "2 --> No\n";
        cin >> si;

        if (si == 2) {
            cout << "GRACIAS POR UTILIZAR EL VERIFICADOR DE CONTRASEÑAS\n";
        }
        
    }
     return 0;
}