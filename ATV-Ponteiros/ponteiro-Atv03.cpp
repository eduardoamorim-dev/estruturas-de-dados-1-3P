#include <iostream>

/*3. Escreva uma fun��o que dado um n�mero real passado como par�metro,
retorne a parte inteira e a parte fracion�ria deste n�mero.
Escreva um programa que chama esta fun��o.
*/
using namespace std;

void parte_int_frac (double *n, int *p_int, double *p_frac){
    *p_int = (int)*n;
    *p_frac = *n - *p_int;

}

int main (){
    double n;
    int p_int ;
    double p_frac;

    cin >> n;

    parte_int_frac(&n, &p_int , &p_frac);

    printf("Parte inteira = %d\nParte fracionada = %lf\n", p_int, p_frac);

    return 0;
}

