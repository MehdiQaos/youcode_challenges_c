#include<stdio.h>

int main() {
    int nombre, temp, digit, swap_n, nombre_chiffres;
    char nombre_octal[100];
    char nombre_hexadecimal[100];
    int i, j;
    printf("Entrer un nombre entier: ");
    scanf("%d", &nombre);

    // octal
    temp = nombre;
    i = 0;
    while(temp > 0) {
        digit = temp % 8;
        nombre_octal[i++] = 48 + digit;
        temp /= 8;
    }
    nombre_octal[i] = '\0';
    j = 0;
    i--;
    nombre_chiffres = i;
    while(j < i) {
        swap_n = nombre_octal[i];
        nombre_octal[i] = nombre_octal[j];
        nombre_octal[j] = swap_n;
        j++;
        i--;
    }
    printf("%s\n", nombre_octal);

    //hexadecimal
    temp = nombre;
    i = 0;
    int length = 0;
    while(temp > 0) {
        length++;
        temp /= 16;
    }

    nombre_hexadecimal[length--] = '\0';
    temp = nombre;
    while(temp > 0) {
        digit = temp % 16;
        if(digit > 9)
            nombre_hexadecimal[length--] = 65 + digit - 10;
        else
            nombre_hexadecimal[length--] = 48 + digit;
        temp /= 16;
    }
    printf("%s\n", nombre_hexadecimal);

    return 0;
}