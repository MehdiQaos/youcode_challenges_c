#include<stdio.h>

int main() {
    int nombre, temp, chiffre, length;
    char nombre_octal[100];
    char nombre_hexadecimal[100];

    printf("Entrer un nombre entier: ");
    scanf("%d", &nombre);

    //octal
    temp = nombre;
    length = 0;
    while(temp > 0) {   //compter le nombre de chiffres
        length++;
        temp /= 8;
    }

    nombre_octal[length--] = '\0';  //ajouter le character '\0' qui marque la fin de la chaine de characters
    temp = nombre;
    while(temp > 0) {
        chiffre = temp % 8;
        nombre_octal[length--] = 48 + chiffre;
        temp /= 8;
    }

    //hexadecimal
    temp = nombre;
    length = 0;
    while(temp > 0) {   //compter le nombre de chiffres
        length++;
        temp /= 16;
    }

    nombre_hexadecimal[length--] = '\0';
    temp = nombre;
    while(temp > 0) {
        chiffre = temp % 16;
        if(chiffre > 9)
            nombre_hexadecimal[length--] = 65 + chiffre - 10;
        else
            nombre_hexadecimal[length--] = 48 + chiffre;
        temp /= 16;
    }

    //afficher le resultat
    printf("nombre en decimal: %d\n", nombre);
    printf("nombre en octal: %s\n", nombre_octal);
    printf("nombre en hexadecimal: %s\n", nombre_hexadecimal);

    return 0;
}
