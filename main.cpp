#include <iostream>
#include "Aluno.h"

using namespace std;

int main(){
    
    float P1, Ma1, Mb1, P2, Ma2, Mb2;
    int qtdAulas, qtdFaltas;

    Aluno *n1 = new Aluno();
    
    n1->setP1(n1->setData("Digite a nota da P1"));
    n1->setMa1(n1->setData("Digite a nota da Ma1"));
    n1->setMb1(n1->setData("Digite a nota da Mb1"));
    n1->setP2(n1->setData("Digite a nota da P2"));
    n1->setMa2(n1->setData("Digite a nota da Ma2"));
    n1->setMb2(n1->setData("Digite a nota da Mb2"));    
    cout<<"\nDigite a quantidade de aulas: ";
    cin>>qtdAulas;
    n1->setQtdAulas(qtdAulas);
    cout<<"\nDigite a quantidade de faltas: ";
    cin>>qtdFaltas;
    n1->setQtdFaltas(qtdFaltas);
    n1->calcMedia();
    n1->calcFaltas();    
    n1->imprimeNota();

    return 0;
}


