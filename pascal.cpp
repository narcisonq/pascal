#include <iostream>
#include <math.h>
 
using namespace std;
 
long fact(long n){

    /*aqui tem o calculo da fatorial, antes eu tentei fazer por
    recursividade mas isso gerou um problema na alocação de memória.
    
    por isso eu fiz por um for mais simples, mesmo não sendo a forma mais eficiente*/
    long h = 1;

    if(n == 1 || n==0){
        return(1);
    }
 
    else{
    
        for(int i = 1; i <= n; ++i) {
            h *= i; // loop para fazer h multiplicar seu antecessor
        }

        return(h);
    }
} 

 
long comb (int g, int e){

    /*essa função faz a "escolha" de 'e' objetos
    num conjunto de 'g' elementos*/
    int r;

    if(e>g) cout<<"deu merda";

    r=fact(g)/(fact(e)*fact(g-e)); // aqui tem as fatoriais são chamadas para fazer a matemágica da combinação

    return(r);
}

void gerar(int t){

    /*essa função existe apenas pra gerar
    o padrão da piramide com os numeros*/

    for(int i = 0; i <= t; ++i) {
        for(int j = 0; j <= i; ++j) {
            cout << comb(i, j)<<"\t";   //nessa linha as matemágicas acontecem e as combinatórias são chamas para definir os coeficientes e espaçar os numeros
        }
        cout << "\n"; //quebra de linha

}
}
 
int main(){
 
    int l;

    cout<<"digite quantas linhas da piramide de pascal vc quer: ";
    cin>>l;

    cout<<"\n\n";

    gerar(l);
    
    return(0);
}