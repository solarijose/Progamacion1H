/*
 ============================================================================
 Name        : prueba1.c
 Author      : Solari José Luis
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int horasTrabajadas;
    float costoHora;
    float sueldo;
    printf("Ingrese las horas trabajadas por el empleado:");
    scanf("%i",&horasTrabajadas);
    printf("Ingrese el pago por hora:");
    scanf("%f",&costoHora);
    sueldo=horasTrabajadas*costoHora;
    printf("El sueldo total del operario es ");
    printf("%f",sueldo);
    getchar();
    return 0;
}
