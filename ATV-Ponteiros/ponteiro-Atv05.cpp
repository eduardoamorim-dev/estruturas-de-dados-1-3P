#include <iostream>

/*5. Crie uma fun��o que receba por par�metro um vetor de n�meros inteiros,
o tamanho do vetor e os endere�os de duas vari�veis inteiras (que podemos chamar de min e max).
Ao passar essas vari�veis para a fun��o seu programa dever� analisar qual � o maior e o menor elemento do vetor e depositar esses elementos nas vari�veis do par�metro.*/

using namespace std;

void Maior_Menor_elemento(int *v, int *n, int *min, int *max){
    for (int i = 0; i < *n ; i++){
       if(v[i] > *max) {
            *max = v[i];
       }else if(v[i] < *min){
            *min = v[i];
       }
    }
}


int main (){
    int n;

    printf("Qual e o tamanho do vetor: ");
    cin >> n;

    int v[n];

    for (int i = 0; i < n ; i++){
        cin >> v[i];
    }

    int min = v[0], max = v[0];

    Maior_Menor_elemento(v, &n, &min, &max);

    printf("Maior elemento: %d\nMenor elemento: %d\n", max, min);


    return 0;
}


