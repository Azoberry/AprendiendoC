#include <stdio.h>

int main() {

    //#define NOMBRE valor; --> constantes
    //tipoDeDato Nombre = valor; --> variables
    float sueldo = 25.456;
    float bono = 4.560;
    sueldo += bono; //sueldo = sueldo + bono;

    printf("El sueldo es: %f",sueldo);

    return 0;
}