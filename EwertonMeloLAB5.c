#include <stdio.h>
#include <stdlib.h>
#define tamNome 15
#define tamGrupo 8
#define numContatos 50

typedef struct{
        char contato[tamNome];
        int  telefone;
        char grupo[tamGrupo];
}AGENDA;

//Prototipos das funcoes a serem usadas
void criaContato(AGENDA *c, int nc); //c-> contato nc -> numero de contatos
void alteraContato(AGENDA *c, int nc);
void listarDados(AGENDA *c, int nc);
void listarContGrupo(AGENDA *c, int nc);
void listarTodosContatos(AGENDA *c, int nc);
void mostraQuantContatos(AGENDA *c, int nc);


main()
{
  char nomes[numContatos];
  int opcao,cont;

  opcao=10;
  cont=0;
  while (opcao!=0)
  {
     printf("\t\tEscolha uma opcao: \n\n\n");
     printf("\t\t(1) Criar um contato\n");
     printf("\t\t(2) Alterar um dado do contato\n");
     printf("\t\t(3) Remover um contato\n");
     printf("\t\t(4) Listar dados de um contato\n");
     printf("\t\t(5) Listar contatos de um grupo\n");
     printf("\t\t(6) Listar todos os contatos\n");
     printf("\t\t(7) Mostrar a quantidade de contatos\n");
     printf("\t\t(0) Sair do programa\n");
     printf("\n\n");
     printf("\t\t Opcao: ");
     scanf("%d",&opcao);

     if(opcao==1)
       {
        cont=cont+1;
       }
     switch(opcao)
          {
            case 1: criaContato(nome[cont],cont);
            case 2: alteraContato(nome[cont],cont);
            case 3: listarDados(nome[cont],cont);
            case 4: listarContGrupo(nome[cont],cont);
            case 5: listarTodosContatos(nome[cont],cont);
            case 6: mostraQuantContatos(nome[cont],cont);
          }





  }

  printf("Tamanho da agenda %d",sizeof(AGENDA));


}

