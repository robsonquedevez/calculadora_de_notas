#include <iostream>
#include "Aluno.h"

using namespace std;

int main(){
    
    float P1, Ma1, Mb1, P2, Ma2, Mb2;
    int qtdAulas, qtdFaltas;

    Aluno *n1 = new Aluno();

    do{
    cout<<"Digite a nota da P1: ";
    cin>> P1;
    if(n1->validaNota(P1));
    n1->setP1(P1);
    cout<<"\nDigite a nota Ma1: ";
    cin>> Ma1;
    n1->setMa1(Ma1);
    cout<<"\nDigite a nota Mb1: ";
    cin>> Mb1;
    n1->setMb1(Mb1);
    cout<<"\nDigite a nota da P2: ";
    cin>> P2;
    n1->setP2(P2);
    cout <<"\nDigite a nota Ma2: ";
    cin>> Ma2;
    n1->setMa2(Ma2);
    cout<<"\nDigite a nota Mb2: ";
    cin>> Mb2;
    n1->setMb2(Mb2);
    cout<<"\nDigite a quantidade de aulas: ";
    cin>>qtdAulas;
    n1->setQtdAulas(qtdAulas);
    cout<<"\nDigite a quantidade de faltas: ";
    cin>>qtdFaltas;
    n1->setQtdFaltas(qtdFaltas);
    }while();

    n1->calcMedia();
    n1->calcFaltas();
    n1->imprimeNota();

    
    




    
    




    return 0;
}