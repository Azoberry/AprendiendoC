/*
Realice un programa que determine cual es la nota final de un alumno
en una materia teniendo en cuenta que la nota final es el promedio
de 2 examenes. (Obtener el promedio de los 2 examenes).
*/
#include <stdio.h>
#include <ctype.h>
int main() {

    float examen1, examen2;
    char caracter;

    printf("Ingrese la nota del primer examen: ");
    int resultado1 = scanf("%f", &examen1);

    if (resultado1 != 1 || resultado1 == 0)
    {
        printf("Error: Ingrese un número valido.");
        return 1;
    }
    while ((caracter = getchar()) != '\n' && caracter != EOF) 
    {
        if (!isspace(caracter)) 
        {
            printf("Error: Ingrese solo un número sin caracteres adicionales.\n");
            return 1;
        }
    }
    /*
    scanf regresa la cantidad de elementos que pudo leer correctamente.

    El bucle while se ejecuta hasta que se encuentra un salto de línea ('\n') o se alcanza el final del archivo (EOF).
    getchar() obtiene el siguiente carácter de la entrada estándar (stdin).
    isspace() devuelve 0 si no hay un espacio en blanco, devuelve 1 si hay un espacio en blanco

    El [&] se utiliza para obtener la direccion de memoria de una variable
    */
    printf("Ingrese la nota del segundo examen: ");
    int resultado2 = scanf("%f", &examen2);

    if (resultado2 != 1 || resultado2 == 0)
    {
        printf("Error: Ingrese un número valido.");
        return 1;
    }

    while ((caracter = getchar()) != '\n' && caracter != EOF) 
    {
        if (!isspace(caracter)) 
        {
            printf("Error: Ingrese solo un número sin caracteres adicionales.\n");
            return 1;
        }
    }

    float promedio = (examen1 + examen2) / 2;

    if(promedio >= 7)
    {
        if (promedio == (int)promedio) 
        {
            printf("El alumno aprobo la materia");
            printf("\nSu promedio es: %.0f",promedio);
        } else 
        {
            printf("El alumno aprobo la materia");
            printf("\nSu promedio es: %.2f",promedio);
        }
    } else 
    {
        if (promedio == (int)promedio) 
        {
            printf("El alumno reprobo la materia");
            printf("\nSu promedio es: %.0f",promedio);
        } else 
        {
            printf("El alumno reprobo la materia");
            printf("\nSu promedio es: %.2f",promedio);
        }
    }

    return 0;
}