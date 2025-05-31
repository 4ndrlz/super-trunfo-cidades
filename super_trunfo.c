#include <stdio.h>

int main() {
   
    char nome1[] = "Rio de Janeiro";
    int populacao1 = 6748;     
    float area1 = 1221.0;      
    float idh1 = 0.799;
    float pib1 = 276.7;         


    char nome2[] = "Belo Horizonte";
    int populacao2 = 2523;     
    float area2 = 331.4;        
    float idh2 = 0.810;
    float pib2 = 85.1;          


    printf("CARTA 1:\n");
    printf("Cidade: %s\n", nome1);
    printf("População: %d mil habitantes\n", populacao1);
    printf("Área: %.1f km²\n", area1);
    printf("IDH: %.3f\n", idh1);
    printf("PIB: R$ %.1f bilhões\n\n", pib1);

    
    printf("CARTA 2:\n");
    printf("Cidade: %s\n", nome2);
    printf("População: %d mil habitantes\n", populacao2);
    printf("Área: %.1f km²\n", area2);
    printf("IDH: %.3f\n", idh2);
    printf("PIB: R$ %.1f bilhões\n", pib2);

    return 0;
}