#include <stdio.h>
#include <stdlib.h>

int i, j, aux, num, vet [10];

int main () {
    
    for (i=0; i<10; i++){
    num = rand();
    num = (num % 10);
    //printf ("num: = %d\n", num);
    vet[i]=num;
    }
    
    for (i=0; i<10; i++){
        for (j=0; j<10; j++){
            if (vet [i] > vet[i+1]){
                //printf ("%d maior que %d, trocando\n", vet[i], vet[i+1]);
             aux = vet[i];
             vet [i+1] = vet[i];
             vet[i] = aux;
             
             
             }
        }
    }
    
    for (i=0; i<10; i++){
      printf ("num[%d]: = %d\n", i, vet[i]);  
    }
    
return 0;
}
