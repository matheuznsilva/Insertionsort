#include <stdio.h>
#include <stdlib.h>
#include "insertionSort.h"

void insertionSort(int *V, int N){
	
    int i, j, aux;     // declaração de variáveis locais
    for(i = 1; i < N; i++){       // loop tendo como ponto de parada i ser menor que N, onde N é o numero de elementos do vetor
        aux = V[i];     // variável auxiliar recebendo o elemento na posição i do vetor
        
        for(j = i; (j > 0) && (aux < V[j - 1]); j--){        // loop tendo como ponto de parada j ser maior que 0 e o elemento 
                                                             // em aux ser menor que o elemento presente na posição j-1
            V[j] = V[j - 1];        // o vetor na posição j recebe o elemento presente na posição j-1
        }
            
        V[j] = aux;     // o vetor na posição j recebe o elemento salvo na variável auxiliar
    }
}
