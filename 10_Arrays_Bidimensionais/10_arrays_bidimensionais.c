#include<stdio.h>
/*
Crie em C um programa que a partir de uma relação de notas de 4 
UC´s dos primeiros 3 alunos de uma turma:;
Aluno 1: {14,13,16,18} 
Aluno 2: {13,15,13,13}
Aluno 3: {11,18,16,17}
Calcule:
 1 - Media de Aluno;
 2 - Media Turma;
 3 - Menor Nota de Aluno;
 4 - Maior Nota de Aluno;
 5 - Menor Nota Turma;
 6 - Maior Nota de Turma;
 7 - Menor Nota de UC;
 8 - Maior Nota de UC;
 9 - Media de Notas de UC
 0 - Sair.");
*/
#define nrAlunosTurma 3
#define nrUCs 4
int notasTurma[nrAlunosTurma][nrUCs] = {{14,13,16,18} , {13,15,13,13} , {11,18,16,17}  };

/// @brief calcula a média de notas de um aluno, no contexto de um array bidimensional, correspondente às notas de uma turma.
/// @param nrAluno O número do aluno em causa que corresponde a uma linha de nota na estrutura bidimensional
/// @return 
float mediaNotasAluno(int nrAluno ) {

    if(nrAluno >nrAlunosTurma || nrAluno < 0) {
        return -1;
    }

    int somaNota = 0 ; 

    for(int nota = 0; nota < nrUCs ; nota ++) {
        somaNota+=  notasTurma[nrAluno - 1][nota];
    }
    return ((float)somaNota) / nrUCs;
}
/// @brief calcula a media das médias por aluno de notas. Poderia ser também a média de todos as notas da estrutura bidimensional 
/// @return 
float mediaNotasTurma()
{
    float somaMedias = 0 ; 
    for(int i = 1; i <= nrAlunosTurma ; i ++) 
    {
        float mediaAluno = mediaNotasAluno(i);
        somaMedias+= mediaNotasAluno(i);
       printf("\nmedia aluno %d - %.2f", i, mediaAluno);
    }
    return somaMedias/nrAlunosTurma;
}
/// @brief Calcula a maior nota de um aluno, isto é o maior inteiro da linha correspondente ao aluno
/// @param nrAluno o aluno em questão
/// @return a maior nota encontrada na linha das notas do aluno
int maiorNotaAluno(int nrAluno )
{
    int maiorNota =  notasTurma[nrAluno-1][0] ; 
    if(nrAluno > nrAlunosTurma || nrAluno <= 0)     
        return -1;

    for(int i = 0; i < nrUCs ; i ++)
    {
        int nota = notasTurma[nrAluno-1][i];
        if(nota > maiorNota) {
            maiorNota = nota;
        }
    }
    return maiorNota;
}
int menorNotaAluno(int nrAluno )
{
    int menorNota =  notasTurma[nrAluno-1][0] ; 
    if(nrAluno > nrAlunosTurma || nrAluno <= 0)     
        return -1;

    for(int i = 0; i < nrUCs ; i ++)
    {
        int nota = notasTurma[nrAluno-1][i];
        if(nota <  menorNota) {
            menorNota = nota;
        }
    }
    return menorNota;
}
float mediaNotasUC(int nrUC )
{
    int somaNota = 0 ; 
    if(nrUC >nrUCs || nrUC < 0) {
        return -1;
    }
    for(int i = 0; i < nrAlunosTurma ; i++) {
        somaNota+= notasTurma[i][nrUC-1];
    }
    return ((float)somaNota)/nrAlunosTurma;
}

int menorNotaTurma() {
    int menorNotaTurma = notasTurma[0][0];
    for (int aluno = 0; aluno < nrAlunosTurma; aluno++)
    {
        for (int nota = 0; nota < nrUCs; nota++)
        {
            int notaAtual = notasTurma[aluno][nota];
            if(menorNotaTurma > notaAtual) {
                menorNotaTurma = notaAtual;
            }
        }
        
    }

    return menorNotaTurma;
    
}


int maiorNotaTurma() {
    int maiorNotaTurma = notasTurma[0][0];
    for (int aluno = 0; aluno < nrAlunosTurma; aluno++)
    {
        for (int nota = 0; nota < nrUCs; nota++)
        {
            int notaAtual = notasTurma[aluno][nota];
            if(maiorNotaTurma < notaAtual) {
                maiorNotaTurma = notaAtual;
            }
        }
        
    }

    return maiorNotaTurma;
    
}

int menorNotaUc(int nota) {
    int menorNota = notasTurma[0][nota];
    for (int aluno = 0; aluno < nrAlunosTurma; aluno++)
    {
        int notaAtual = notasTurma[aluno][nota];
        if(menorNota > notaAtual) {
            menorNota = notaAtual;
        }
    }

    return menorNota;
    
}

int maiorNotaUc(int nota) {
    int maiorNota = notasTurma[0][nota];
    for (int aluno = 0; aluno < nrAlunosTurma; aluno++)
    {
        int notaAtual = notasTurma[aluno][nota];
        if(maiorNota < notaAtual) {
            maiorNota = notaAtual;
        }
    }

    return maiorNota;
    
}



int main( )
{ 
    char opcao;
    int nrAluno;
     do
     {
        printf("1 - Media de Aluno");
        printf("\n2 - Media Turma");
        printf("\n3 - Menor Nota de Aluno");
        printf("\n4 - Maior Nota de Aluno");
        printf("\n5 - Menor Nota Turma ");
        printf("\n6 - Maior Nota de Turma");
        printf("\n7 - Menor Nota de UC ");
        printf("\n8 - Maior Nota de UC");
        printf("\n9 - Media de Notas de UC");
        printf("\n0 - Sair.\nEscolha a Opcao: ");
        scanf(" %c", &opcao);
        switch (opcao) {
        case '1': 
            printf("\nInsira o nr. de aluno:");
            scanf("%d", &nrAluno);
            //- Media de Aluno
            float mediaAluno = mediaNotasAluno(nrAluno);
            if (mediaAluno <0) {
                printf("\nAluno nao existente.");
            } else {
                printf("\n A média do aluno %d e %.2f\n", nrAluno, mediaAluno);
            }
            break; 
         case '2': 
            //2 - Media Turma
            printf("\nA media da turma e %.2f\n", mediaNotasTurma());
            break;
        case '3': 
            // 3 - Menor Nota de Aluno
            int menorNota;
            printf("\nInsira o nr. de aluno:");
            scanf("%d", &nrAluno);
            menorNota = menorNotaAluno(nrAluno);
            if (menorNota <0)
            {
                printf("\nAluno nao existente.");
            }
            else
            {
                printf("\n A menor nota do aluno %d e %d\n", nrAluno, menorNota);
            }
            break; 
        case '4':
            // Maior Nota de Aluno
            int maiorNota;
            printf("\nInsira o nr. de aluno:");
            scanf("%d", &nrAluno);
            maiorNota = maiorNotaAluno(nrAluno);
            if (maiorNota <0)
            {
                printf("\nAluno nao existente.");
            }
            else
            {
                printf("\n A maior nota do aluno %d e %d\n", nrAluno, maiorNota);
            }
            break;

        case '5':
        printf("\n Menor Nota Turnma. %d \n", menorNotaTurma());

        break;

case '6':
        printf("\n Maior Nota Turnma. %d \n", maiorNotaTurma());

        break;

        case '7':
        int nota;
        printf("\n Insira a nota \n");
        scanf("%d", &nota);
        printf("\n Menor Nota da UC. %d \n", menorNotaUc(nota));

        break;
        case '8':
        int testeee;
        printf("\n Insira a nota \n");
        scanf("%d", &testeee);
        printf("\n Maior Nota da UC. %d \n", maiorNotaUc(testeee));

        break;

         case '9':  /// 9 - Media de Notas de UC
            int nrUC; 
            float mediaUC;
            printf("\nInsira o nr. da UC (1-4):");
            scanf("%d", &nrUC);
            mediaUC = mediaNotasUC(nrUC);
            if (mediaUC <0)
            {
                printf("\n Turma nao existente.");
            }
            else
            {
                printf("\n A média da turma %d e %.2f\n", nrUC, mediaUC);
            }
            break; 
        case '0':
            return 0;
        default:
            continue;
        }
 
     } while (1);   ///Porquê?
     
    return 0;
}
