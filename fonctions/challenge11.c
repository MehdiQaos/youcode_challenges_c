#include<stdio.h>

typedef enum { false, true } bool;

bool is_leap_year(int year) {
    if(year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
        return true;
    return false;
}

int main() {
    int annee;
    printf("Entrer une annee entre 1800 et 10000: ");
    scanf("%d", &annee);

    printf("%d %s une annee bissextiles\n", annee, is_leap_year(annee) == true ? "est" : "n'est pas");
    
    /* test de la fonction is_leap_year
    int leap_years[10] = { 1984, 1988, 1992, 1996, 2000, 2004, 2008, 2012, 2016, 2020 };
    int not_leap_years[10] = { 1805, 1921, 1941, 1949, 1953, 2003, 2018, 2019, 2021, 2022 };

    printf("leap years: \n");
    for(int i=0; i<10; ++i)
        printf("%d is leap year: %s\n", leap_years[i], is_leap_year(leap_years[i]) == true ? "True": "False");
    
    printf("\nnot leap years: \n");
    for(int i=0; i<10; ++i)
        printf("%d is leap year: %s\n", not_leap_years[i], is_leap_year(not_leap_years[i]) == true ? "True": "False");
    */
    return 0;
}