#include <iostream>
#include <stdio.h>

#include "suma.h"
/*Comentario de Kevin Jaramillo Lievano*/
using namespace std;

int main() {
    int opt = 1;
    switch(opt){
        case 1:
            cout << suma(1,2) << endl;
            break;
        case 2:
            /* Resta */
            break;
        case 3:
            /* Multiplicacion */
            break;
        case 4:
            /* Division */
            break;
        case 5:
            /* Salir */
            break;
        default:
        printf("Opcion no valida");
        
    }   

    return 0;
}
