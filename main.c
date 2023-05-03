#include <stdio.h>
#include <string.h>

int main() {
    char review[200];
    int puntuacion;
    
    printf("Ingrese su review del juego\n");
    scanf("%s", &review);
    //fflush(stdin);
    char c;
    while ((c = getchar()) != '\n' && c != EOF);
    do
    {        
        printf("Ingrese su puntuacion del juego entre 1 y 10\n");            
        scanf("%d", &puntuacion);
        if(puntuacion < 1 || puntuacion > 10)
        {
            printf("Puntuacion incorrecta ingrese un valor entre 1 y 5\n");    
        }
    } while (puntuacion < 1 || puntuacion > 10);                
       
    printf("Su mensaje es %s\n", review);
    printf("Su valoracion es %d\n", puntuacion);
}









