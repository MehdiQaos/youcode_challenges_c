#include <stdio.h>

int main () {
  unsigned long annes, mois, jours, heures, minutes, secondes;
  int choix = 0;
  printf("entrer le nombre d'annees: ");
  scanf("%lu", &annes);

  do {
    printf("convertir les annees en (1)Mois, (2)Jours, (3)Heures, (4)Minutes, (5)Secondes? entrer un nombre entre 1 et 5: ");
    scanf("%d", &choix);
  } while(choix < 1 || choix > 5);

  mois = annes * 12;
  jours = annes * 365;
  heures = jours * 24;
  minutes = heures * 60;
  secondes = minutes * 60;

  switch (choix) {
    case 1:
      printf("nombre de mois: %lu\n", mois);
      break;
    case 2:
      printf("nombre de jours: %lu\n", jours);
      break;
    case 3:
      printf("nombre de heures: %lu\n", heures);
      break;
    case 4:
      printf("nombre de minutes: %lu\n", minutes);
      break;
    case 5:
      printf("nombre de secondes: %lu\n", secondes);
      break;
  }

  return 0;
}
