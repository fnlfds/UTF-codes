/*Um professor necessita de um algoritmo computacional para calcular a nota de uma prova de
m�ltipla escolha. O algoritmo deve ser escrito na linguagem de programa��o C e deve permitir que o
professor entre com as respostas corretas e as respostas de um aluno para compara��o. A prova possui
5 quest�es e cada quest�o possui 5 alternativas (A, B, C, D e E), sendo que somente uma alternativa �
a correta em cada quest�o. As duas primeiras quest�es correspondem a 2 pontos cada na nota. As duas
quest�es seguintes correspondem a 1 ponto cada na nota. A �ltima quest�o corresponde a 4 pontos na
nota. A nota final deve ser apresentada ao professor usu�rio*/

#include <stdio.h>
int main(){
    char res1, res2, res3, res4, res5;//respostas do professor
    char alu1, alu2, alu3, alu4, alu5;//respostas do aluno
    int nota=0;
    printf("----Calculo nota----\n\n");
    printf("Por favor, utilize letras minusculas\n\n");
    printf("Professor, digite a primeira resposta: ");
    scanf(" %c",&res1);
    printf("Professor, digite a segunda resposta: ");
    scanf(" %c",&res2);
    printf("Professor, digite a terceira resposta: ");
    scanf(" %c",&res3);
    printf("Professor, digite a quarta resposta: ");
    scanf(" %c",&res4);
    printf("Professor, digite a quinta resposta: ");
    scanf(" %c",&res5);
    printf("\nProfessor, insira a primeira resposta do aluno: ");
    scanf(" %c",&alu1);
    printf("Professor, insira a segunda resposta do aluno: ");
    scanf(" %c",&alu2);
    printf("Professor, insira a terceira resposta do aluno: ");
    scanf(" %c",&alu3);
    printf("Professor, insira a quarta resposta do aluno: ");
    scanf(" %c",&alu4);
    printf("Professor, insira a quinta resposta do aluno: ");
    scanf(" %c",&alu5);
    if(res1 == alu1){
        nota = nota + 2;
    }
    if(res2 == alu2){
        nota = nota + 2;
    }
    if(res3 == alu3){
        nota = nota + 1;
    }
    if(res4 == alu4){
        nota = nota + 1;
    }
    if(res5 == alu5){
        nota = nota + 4;
    }
    printf("A nota do aluno e: %i", nota);
    return 0;
}
