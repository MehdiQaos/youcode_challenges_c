#include<stdio.h>

int main() {
    int nombre, temp, chiffre, octal_length, hexa_length;
    char nombre_octal[100];
    char nombre_hexadecimal[100];

    printf("Entrer un nombre entier: ");
    scanf("%d", &nombre);

    if(nombre == 0) {       // cas nombre = zero
      printf("nombre en decimal: %d\n", 0);
      printf("nombre en octal: %s\n", "0");
      printf("nombre en hexadecimal: %s\n", "0");
      return 0;
    }
    else if(nombre < 0) {   // cas nombre < 0
      nombre *= -1;
      nombre_octal[0] = '-';
      nombre_hexadecimal[0] = '-';
      octal_length = 1;
      hexa_length = 1;
    }
    else {                  // cas nombre > 0
      octal_length = 0;
      hexa_length = 0;
    } 

    //octal
    temp = nombre;
    while(temp > 0) {   //compter le nombre de chiffres pour la representation octal
        octal_length++;
        temp /= 8;
    }

    nombre_octal[octal_length--] = '\0';  //ajouter le character '\0' qui marque la fin de la chaine de characters
    temp = nombre;
    while(temp > 0) {
        chiffre = temp % 8;
        nombre_octal[octal_length--] = 48 + chiffre; // 48 est le code ASCII pour '0'
        temp /= 8;
    }

    //hexadecimal
    temp = nombre;
    while(temp > 0) {   // compter le nombre de chiffres pour la representation hexadecimal
        hexa_length++;
        temp /= 16;
    }

    nombre_hexadecimal[hexa_length--] = '\0';
    temp = nombre;
    while(temp > 0) {
        chiffre = temp % 16;
        if(chiffre > 9)
            nombre_hexadecimal[hexa_length--] = 65 + chiffre - 10;  // A .. F , 65 est le code ASCII pour 'A'
        else
            nombre_hexadecimal[hexa_length--] = 48 + chiffre;       // 0 .. 9 , 48 est le code ASCII pour '0'
        temp /= 16;
    }

    // afficher le resultat
    printf("nombre en decimal: %d\n", nombre);
    printf("nombre en octal: %s\n", nombre_octal);
    printf("nombre en hexadecimal: %s\n", nombre_hexadecimal);

    return 0;
}
