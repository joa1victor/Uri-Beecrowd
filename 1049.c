#include <stdio.h>
#include <string.h>
 
int main() {
 
    char filo_animal[50], classe_animal[50], alimentacao[50];

    scanf("%s", filo_animal);
    scanf("%s", classe_animal);
    scanf("%s", alimentacao);  



    if(strcmp(filo_animal, "vertebrado")==0 && strcmp(classe_animal, "ave")==0 && strcmp(alimentacao, "carnivoro")==0)
        puts("aguia");

    if(strcmp(filo_animal, "vertebrado")==0 && strcmp(classe_animal, "ave")==0 && strcmp(alimentacao, "onivoro")==0)
        puts("pomba");
        
    
    if(strcmp(filo_animal, "vertebrado")==0 && strcmp(classe_animal, "mamifero")==0 && strcmp(alimentacao, "onivoro")==0)
        puts("homem");


    if(strcmp(filo_animal, "vertebrado")==0 && strcmp(classe_animal, "mamifero")==0 && strcmp(alimentacao, "herbivoro")==0)
        puts("vaca");


    if(strcmp(filo_animal, "invertebrado")==0 && strcmp(classe_animal, "inseto")==0 && strcmp(alimentacao, "hematofago")==0)
        puts("pulga");


    if(strcmp(filo_animal, "invertebrado")==0 && strcmp(classe_animal, "inseto")==0 && strcmp(alimentacao, "herbivoro")==0)
        puts("lagarta");
        
    
    if(strcmp(filo_animal, "invertebrado")==0 && strcmp(classe_animal, "anelideo")==0 && strcmp(alimentacao, "hematofago")==0)
        puts("sanguessuga");

    if(strcmp(filo_animal, "invertebrado")==0 && strcmp(classe_animal, "anelideo")==0 && strcmp(alimentacao, "onivoro")==0)
        puts("minhoca");   
    
    return 0;
}
