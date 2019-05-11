#ifndef ALUNO_H
#define ALUNO_H

    class Aluno{
    private:
        float P1;
        float Ma1;
        float Mb1;
        float P2;
        float Ma2;
        float Mb2;
        float Media_P1;
        float Media_P2;
        float Media_Final;
        
        int qtdAulas;
        int qtdFaltas;
        float presenca;
    public:
        Aluno();
        ~Aluno();

        float calcMedia();   //Calcula nota final do semestre
        float calcFaltas(); //Calcula percentual de faltas no semestre
        void situacaoAtual();
        void imprimeNota();
        bool validaNota(float);

    //getters and setters
        void setP1(float);
        float getP1();       
        void setMa1(float);
        float getMa1();       
        void  setMb1(float);
        float getMb1();            
        void setP2(float);
        float getP2();       
        void setMa2(float);
        float getMa2();        
        void setMb2(float);
        float getMb2();
        void setQtdAulas(float QtdAulas);
        float getQtdAulas();
        void setQtdFaltas(float QtdFaltas);
        float getQtdFaltas();
    
        protected:       
        void setMedia_P1(float);
        float getMedia_P1();
        void setMedia_P2(float);
        float getMedia_P2();
        float getPresenca();
    };


#endif