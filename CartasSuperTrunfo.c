#include <stdio.h>

int main() {

    printf ("Desafio Super Trunfo!\n");


    printf ("CARTA 1\n");
    
    char Cidade[20];
    int População;
    float Área;
    float PIB;
    int NPturísticos; // Número de pontos turísticos
    

    printf ("Digite o nome da sua cidade: \n");
    scanf ("%s", &Cidade);

    printf ("Digite o número da População: \n");
    scanf ("%d", &População);

    printf ("Digite o número da Área: \n");
    scanf ("%f", &Área);

    printf ("Digite o número do PIB: \n");
    scanf ("%f", &PIB);

    
    printf ("Digite o número de pontos turísticos da sua cidade: \n");
    scanf ("%d", &NPturísticos);


    printf ("CARTA 1\n");


    printf ("Nome da Cidade: %s\n",Cidade);
    printf ("População:  %d\n", População);
    printf ("Área:  %f\n", Área);
    printf ("PIB:  %f\n", PIB);
    printf ("Número de pontos turísticos:  %d\n", NPturísticos);


    //SEGUNDA CARTA

    printf ("CARTA 2\n");
    
    printf ("Digite o nome da sua cidade: \n");
    scanf ("%s", &Cidade);

    printf ("Digite o número da População: \n");
    scanf ("%d", &População);

    printf ("Digite o número da Área: \n");
    scanf ("%f", &Área);

    printf ("Digite o número do PIB: \n");
    scanf ("%f", &PIB);

    
    printf ("Digite o número de pontos turísticos da sua cidade: \n");
    scanf ("%d", &NPturísticos);


    printf ("CARTA 2\n");


    printf ("Nome da Cidade: %s\n",Cidade);
    printf ("População:  %d\n", População);
    printf ("Área:  %f\n", Área);
    printf ("PIB:  %f\n", PIB);
    printf ("Número de pontos turísticos:  %d\n", NPturísticos);


    return 0;

    /*
    
    %d: Imprime um inteiro no formato decimal.
    %i: Equivalente a %d.
    %f: Imprime um numero de ponto flutuante no formato padrão.
    %e: Imprime um número de ponto flutuante na notação científica.
    %c: Imprime um único caractere.
    %s: Imprime uama cadeia (string) de caracteres.

    */

}