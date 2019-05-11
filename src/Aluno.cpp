#include <iostream>
#include <iomanip>
#include "Aluno.h"

using namespace std;

//Construtor
Aluno::Aluno(){

}

//Destrutor
Aluno::~Aluno(){
}

//Metodos

float Aluno::calcMedia(){
    
    this->Media_P1 = ((this->P1 * 0.70) + (this->Ma1 * 0.20) + (this->Mb1 * 0.10));
    this->Media_P2 = ((this->P2 * 0.70) + (this->Ma2 * 0.20) + (this->Mb2 * 0.10));
    
    this->Media_Final = (this->Media_P1 + (this->Media_P2 * 2) ) / 3;

    return Media_Final;
}

float Aluno::calcFaltas(){

    this->presenca = ((((float)this->qtdAulas - (float)this->qtdFaltas) / (float)this->qtdAulas) * 100);

    return presenca; 

}

bool Aluno::validaNota(float nota){
    if(nota >= 0 && nota <= 10)
        return true;
    else
        return false;
}

void Aluno::situacaoAtual(){
    

    if(this->Media_Final > 5.0 && getPresenca() >= 75){
        cout <<"MEDIA FINAL: "<< this->Media_Final << endl;
        printf("\nAPROVADO");
    }
    else{
        cout <<"MEDIA FINAL: "<< this->Media_Final << endl;
        printf("\nREPROVADO");
    }

}

void Aluno::imprimeNota(){

    cout <<"NOTA P1: "<< this->Media_P1 << endl;
    cout <<"NOTA P1: "<< this->Media_P2 << endl;
    cout << setprecision(2) <<"PRESENCA: " << this->presenca << "%" <<endl;
    situacaoAtual();
    
}

//getter and setter

void Aluno::setP1(float P1){ this->P1 = P1;}
float Aluno::getP1(){return this->P1;}

void Aluno::setMa1(float Ma1){ this->Ma1 = Ma1;}
float Aluno::getMa1(){return this->Ma1;}

void Aluno::setMb1(float Mb1){ this->Mb1 = Mb1;}
float Aluno::getMb1(){return this->Mb1;}

void Aluno::setP2(float P2){ this->P2 = P2;}
float Aluno::getP2(){return this->P2;}

void Aluno::setMa2(float Ma2){ this->Ma2 = Ma2;}
float Aluno::getMa2(){return this->Ma2;}

void Aluno::setMb2(float Mb2){ this->Mb2 = Mb2;}
float Aluno::getMb2(){return this->Mb2;}

void Aluno::setMedia_P1(float Media_P1){ this->Media_P1 = Media_P1;}
float Aluno::getMedia_P1(){return this->Media_P1;}

void Aluno::setMedia_P2(float Media_P2){ this->Media_P2 = Media_P2;}
float Aluno::getMedia_P2(){return this->Media_P2;}

void Aluno::setQtdAulas(float QtdAulas){ this->qtdAulas = QtdAulas;}
float Aluno::getQtdAulas(){return this->qtdAulas;}

void Aluno::setQtdFaltas(float QtdFaltas){ this->qtdFaltas = QtdFaltas;}
float Aluno::getQtdFaltas(){return this->qtdFaltas;}

float Aluno::getPresenca(){return this->presenca;}







    