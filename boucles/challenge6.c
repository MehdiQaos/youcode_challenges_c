#include <stdio.h>

int main () {
  int c_chaine1[4] = {0}, c_chaine2[4] = {0}; // compteur du nombre d'occurence de chaque charactere
  int i, index, anagrammes;
  char chaine1[1000] = "ab a          b a c              bcd   cddc";
  char chaine2[1000] = "bbc   a ccddab ca d";
  
  printf("Entrer la premiere chaine de characters (ne contient que 'a', 'b', 'c', 'd' et des espaces): ");
  gets(chaine1);
  printf("Entrer la deuxieme chaine de characters (ne contient que 'a', 'b', 'c', 'd' et des espaces): ");
  gets(chaine2);  

  i = 0;
  while(chaine1[i] != '\0') {
    if(chaine1[i] != ' ') {
      index = chaine1[i] - 'a';
      c_chaine1[index]++;
    }
    i++;
  }

  i = 0;
  while(chaine2[i] != '\0') {
    if(chaine2[i] != ' ') {
      index = chaine2[i] - 'a';
      c_chaine2[index]++;
    }
    i++;
  }

  anagrammes = 1; // 
  for(i = 0; i<4; i++)
    if(c_chaine1[i] != c_chaine2[i]) {
      anagrammes = 0;
      break;
    }

  if(anagrammes == 1)
    printf("'%s' et '%s' sont des anagrammes\n", chaine1, chaine2);
  else
    printf("'%s' et '%s' ne sont pas des anagrammes\n", chaine1, chaine2);

  return 0;
}
