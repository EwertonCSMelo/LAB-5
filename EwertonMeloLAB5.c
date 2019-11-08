#include <stdio.h>
#include <stdlib.h>
#define tamNome 10
#define tamNumero 11
#define tamGrupo 8
#define numContatos 50

typedef struct{
        char contato[tamNome];
        char telefone[tamNumero];
        char grupo[tamGrupo];
}AGENDA;

//Prototipos das funcoes a serem usadas
void criaContato(AGENDA *c, int nc); //c-> contato nc -> numero de contatos
void alteraContato(AGENDA *c, int nc);
void removerContato(AGENDA *c, int nc);
void listarDados(AGENDA *c, int nc);
void listarContGrupo(AGENDA *c, int nc);
void listarTodosContatos(AGENDA *c, int nc);
void mostraQuantContatos(AGENDA *c, int nc);


main()
{
  AGENDA nomes[numContatos];
  int opcao,cont;

  opcao=10;
  cont=0;
  while (opcao!=0)
  {  system("cls");
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


     switch(opcao)
          {
            case 1: criaContato(nomes,cont++);break;
            case 2: alteraContato(nomes,cont);break;
            case 3: removerContato(nomes,cont);break;
            case 4: listarDados(nomes,cont);break;
            case 5: listarContGrupo(nomes,cont);break;
            case 6: listarTodosContatos(nomes,cont);break;
            case 7: mostraQuantContatos(nomes,cont);break;
          }

  }

  printf("Tamanho da agenda %d",sizeof(AGENDA));

}

void criaContato(AGENDA *c, int nc) //c-> contato nc -> numero de contatos
{
    system("cls");

    printf("Nome:");  // Lendo nome do contato
    setbuf(stdin, NULL); // Limpar a stream antes de pegar os dados.
    fgets(c[nc].contato, tamNome, stdin);
    strtok(c[nc].contato, "\n");//limpando o '\n'

    printf("Telefone:");
    setbuf(stdin, NULL); // Limpar a stream antes de pegar os dados.
    fgets(c[nc].telefone, tamNumero, stdin);
    strtok(c[nc].contato, "\n");//limpando o '\n'

    printf("Grupo:");
    setbuf(stdin, NULL); // Limpar a stream antes de pegar os dados.
    fgets(c[nc].grupo, tamGrupo, stdin);
    strtok(c[nc].contato, "\n");//limpando o '\n'
 }

void alteraContato(AGENDA *c, int nc)
{

}

void removerContato(AGENDA *c, int nc)
{

}

void listarDados(AGENDA *c, int nc)
{

}
void listarContGrupo(AGENDA *c, int nc)
{

}
void listarTodosContatos(AGENDA *c, int nc)
{
  int i;
     system("cls");
     for (i=0;i<nc;i++)
         {
          printf("Nome: %s Telefone: %s Grupo: %s \n", c[i].contato, c[i].telefone, c[i].grupo);
          system("pause");
         }


}
void mostraQuantContatos(AGENDA *c, int nc)
{

}

