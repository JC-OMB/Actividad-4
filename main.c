//Juan Carlos Ortiz de Montellano Bochelén-A01656520
//Problemas en el codigo "que yo haya identificado"
//---------------
//Por alguna razon el ciclo while no se esta ejecutando de manera correcta
//incluso cuando ya deberia ser recursivo dentro de la misma funcion "funcion del problema "Posicion" "

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
//Funciones para definir el movimiento de la tortuga y la liebre e imprimirlo 
//#===============================================================
//Nos va a imprimir la posicion actual de los competidores 
void print(int tortuga, int liebre, int final){
//ciclo para imprimir la carrera
    for (int i = 1; i < final; i++)
    {
        if (tortuga==liebre && i==liebre)
        {
            printf("La tortuga mordio a la liebre ! ! !");
            i+=36;//esto es para compensar el texto que se va a imprimir y que no se pierdan posiciones
        }else if(i ==tortuga && i !=liebre)
        {
            printf("T");
        }else if (tortuga !=i && liebre ==i)
        {
            printf("L");
        }else if (tortuga !=i && liebre != i)
        {
            printf("-");
        }
        
        
        
        
    }

}
//#===============================================================
//nos va a definir la posicion actual e los competidores
int Posicion(char competidor){
    //Declaramos las variables de nuestros procesos
    int estado;
    int procesoTortuga;
    int procesoLiebre;
    int pp;
    //Declaramos nuestras variables iniciales
    int S = 1;
    int tortuga = S;
    int liebre = S;
    int pista = 70;
    if (competidor == 't')
    {
        //declaramos nuestro generador de randoms del 1-10 para definir las probabilidades de el proceso
        int numero = rand() % 10+1;
        if (numero>0&&numero<=5)
        {
            //printf("3 pos a la derecha");
            return numero;
        }
        else if (numero>5&&numero<=7)
        {
            //printf("6 pos a la izquierda");
            return (numero-numero)-numero;
        }
        else
        {
            //printf("1 pos a la derecha");
            return numero;
        }
    }else if (competidor =='l')
    {
        
        int numero = rand() % 10+1;
        if (numero>0&&numero<=2)
        {
            //dormir
            //printf("Dormir");
            return numero;
        }
        else if (numero>2&&numero<=4)
        {
            //salto grande
            //printf("9 pos a la derecha");
            return numero;
        }
        else if (numero>4&&numero<=5)
        {
            //deslizamiento grande
            //printf("12 pos a la izquierda");
            return (numero-numero)-numero;
        }
        else if(numero>5&&numero<=8)
        {
            //salto pequeño
            //printf("1 pos a la derecha");
            return numero;
        }else
        {
            //deslizamiento pequeño
            //printf("2 pos a la izquierda");
            return (numero-numero)-numero;
        }
    }
    //Aqui se ejecutara el ciclo cada vez que los procesos intercambien posiciones
    while (tortuga<pista&&liebre<pista)
    {
        procesoLiebre = fork();
        if (procesoLiebre==0)
            exit(Posicion('l'));
            Posicion('t');
        wait(&pp);
        liebre+=estado;
        if (S >liebre)
            liebre=S;

        else if (pista<= liebre)
            liebre=pista;
            
        
        procesoTortuga = fork();
        if (procesoTortuga == 0)
            exit(Posicion('t'));
            Posicion('l');
            
        
        wait(&pp);
        if (S>tortuga)
            tortuga=S;

        else if (pista<=tortuga)
            tortuga=pista;
            print(liebre,tortuga,pista);
            printf("\n");
            sleep(1);
            }
        if (tortuga>=pista)
        {
            printf("Gano la tortuga");
        }else if (liebre>=pista)
        {
            printf("Gano la liebre");
        }else
        {
            printf("Fue un empate");
        }
    return 0;
}

//#===============================================================


//Proceso done se ejecutara nuestro programa 
int main(int argc, char const *argv[])
{
    //Declaramos las variables de nuestros procesos
    int estado;
    int procesoTortuga;
    int procesoLiebre;
    int procesoPadre;
    //Declaramos nuestras variables iniciales
    int S = 1;
    int tortuga = S;
    int liebre = S;
    int pista = 70;

    //iniciamos la carrera
    printf("BANG ! ! ! ! !\n");
    printf("\n");
    printf("Y ARRANCAN ! ! ! ! !\n");
    print(liebre, tortuga, pista);
     //Solo se debe llamar una vez ya que es recursivo dentro del metodo Posicion
    Posicion('l');
}