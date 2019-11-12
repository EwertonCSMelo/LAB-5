#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define tamNome 10
#define tamNumero 11
#define tamGrupo 8
#define numContatos 50
enum grupos{familia=1, amigos, trabalho, estudos, colegas, outros};


typedef struct{
        char contato[tamNome];
        char telefone[tamNumero];
        int grupo;
}AGENDA;

//Prototipos das funcoes a serem usadas
void criaContato(AGENDA *c, int nc); //c-> contato nc -> numero de contatos
void alteraContato(AGENDA *c, int nc);
void removerContato(AGENDA *c, int nc);
void listarDados(AGENDA *c);
void listarContGrupo(AGENDA *c, int nc);
void listarTodosContatos(AGENDA *c, int nc);
void lerNome(AGENDA *c);
void lerTelefone(AGENDA *c);
void lerGrupo(AGENDA *c);
char nomeGrupo(int ng);
char printDados(AGENDA *c);

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
            case 4: listarDados(nomes);break;
            case 5: listarContGrupo(nomes,cont);break;
            case 6: listarTodosContatos(nomes,cont);break;
            case 7: mostraQuantContatos(cont);break;
           default: printf("\t\tOpcao Invalida\n");
                    system("pause");
          }

  }

  printf("Tamanho da agenda %d",sizeof(AGENDA));

}

void criaContato(AGENDA *c, int nc) //c-> contato nc -> numero de contatos
{

    lerNome(&c[nc]);     // Ler nome do contato

    lerTelefone(&c[nc]); //Armazena o numero do telefone do contato

    lerGrupo(&c[nc]);    //Armazena o grupo pertencente o contato

 }

void alteraContato(AGENDA *c, int nc)
{
    char pessoa[tamNome],grupo[tamGrupo];
    int i,opcao;
    system("cls");
    printf("Nome:");
    setbuf(stdin, NULL); // Limpar a stream antes de pegar os dados.
    fgets(pessoa, tamNome, stdin);
    strtok(pessoa, "\n");//limpando o '\n'


    for(i=0;strcmp(pessoa, c[i].contato)!=0;i++)
        {
          system("cls");
          printf("procurando.");
          system("cls");
          printf("procurando..");
          system("cls");
          printf("procurando...");
        }
     system("cls");
     printf("Nome: %s Telefone: %s Grupo: %s \n", c[i].contato, c[i].telefone, nomeGrupo(c[i].grupo));
     system ("pause");

        while (opcao!=0)
          {
             system("cls");
             printf("\t\tEscolha uma opcao: \n\n\n");
             printf("\t\t(2) Alterar Nome\n");
             printf("\t\t(2) Alterar Numero\n");
             printf("\t\t(2) Alterar Grupo\n");
             printf("\t\t(0) Sair do programa\n");
             printf("\n\n");
             printf("\t\t Opcao: ");
             scanf("%d",&opcao);


             switch(opcao)
              {
                case 1: lerNome(c); break;
                case 2: lerTelefone(c); break;
                case 3: lerGrupo(c); break;
                default: printf("\t\tOpcao Invalida\n");
                        system("pause");
              }

          }

}

void removerContato(AGENDA *c, int nc)
{

}

void listarDados(AGENDA *c) // Opcao 4
{
    char pessoa[tamNome];
    int i;

    system("cls");
    printf("Nome:");
    setbuf(stdin, NULL); // Limpar a stream antes de pegar os dados.
    fgets(pessoa, tamNome, stdin);
    strtok(pessoa, "\n");//limpando o '\n'

    for(i=0;strcmp(pessoa, c[i].contato)!=0;i++)
        {
          system("cls");
          printf("procurando.");
          system("cls");
          printf("procurando..");
          system("cls");
          printf("procurando...");
        }

     system("cls");

    if (strcmp(pessoa, c[i].contato)==0)
    {
     printDados(&c[i].contato);
     system ("pause");
    }
    if(strcmp(pessoa, &c[i].contato)!=0)
    {
      printf("Contato nao localizado");
      system ("pause");
    }

}
void listarContGrupo(AGENDA *c, int nc)
{

}
void listarTodosContatos(AGENDA *c, int nc)
{
  int i;
  char grupo[tamGrupo];
     system("cls");
     for (i=0;i<nc;i++)
         {


         }
          printf("\n");
          system("pause");

}
void mostraQuantContatos( int nc)
{    system("cls");
     printf("Existem %d contatos...\n",nc);
     system("pause");
}

void lerNome(AGENDA *c)
{
    system("cls");
    printf("Nome:");  // Lendo nome do contato
    setbuf(stdin, NULL); // Limpar a stream antes de pegar os dados.
    fgets(&c->contato, tamNome, stdin);
    strtok(&c->contato, "\n");//limpando o '\n'

}

void lerTelefone(AGENDA *c)
{
    system("cls");
    printf("Telefone:");
    setbuf(stdin, NULL); // Limpar a stream antes de pegar os dados.
    fgets(&c->telefone, tamNumero, stdin);
    strtok(&c->telefone, "\n");//limpando o '\n'
    system("pause");
}
void lerGrupo(AGENDA *c)
{
    system("cls");
    printf("Grupo:");
    printf("\t\t (1) familia\n");
    printf("\t\t (2) amigos\n");
    printf("\t\t (3) trabalho\n");
    printf("\t\t (4) estudos\n");
    printf("\t\t (5) colegas\n");
    printf("\t\t (6) outros\n\n");
    printf("\t\t Opcao: ");
    scanf("%d",&c->grupo);
}

char nomeGrupo(int ng)
{
        switch(ng)
          {
              case  familia: return printf("familia"); break;
              case   amigos: return printf("amigos");  break;
              case trabalho: return printf( "trabalho");break;
              case  estudos: return printf( "estudos"); break;
              case  colegas: return printf( "colegas"); break;
              case   outros: return printf("outros");  break;
              default: printf("\t\tOpcao Invalida\n");
          }
}

char printDados(AGENDA *c)
{
   printf("Nome: %s Telefone: %s Grupo: %s \n", c->contato, c->telefone, nomeGrupo(c->grupo));

 }


