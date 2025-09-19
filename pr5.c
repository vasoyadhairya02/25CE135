#include <stdio.h>

int main() {

    double p = 1441981744;
    double wp = 48.4,mp;

    double lrm = 80.95,lrw = 62.84;

    mp = 100.0 -  wp;

    double women_population = p * (wp / 100.0);
    double men_population = p * (mp / 100.0);

    double literate_men = men_population * (lrm/ 100.0);
    double literate_women = women_population * (lrw/ 100.0);

    double ilm = men_population - literate_men;
    double ilw = women_population - literate_women;

    printf("Population of india : %.0f\n", p);
    printf("Men: %.0f, Women: %.0f\n", men_population, women_population);

    printf("Illiterate Men: %.0f\n", ilm);
    printf("Illiterate Women: %.0f\n", ilw);

    return 0;
}
