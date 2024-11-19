#include <stdio.h> //biblioteca de comunicação com o usuário
#include <stdlib.h>//bibçioteca de alocaçaõ de espaço em memória 
#include <locale.h>// biblioetca de alocções por região 
#include  <string.h>// biblioteca responsável por cuidarr das strings


int registro()//função 
{
	 char arquivo[40];
  
     char cpf[40];
     char nome[40];
     char sobrenome[40];   
     char cargo[40];
     
     printf(" digite o cpf a ser cadastrado: ");
     scanf("%s", cpf);
     
    strcpy(arquivo, cpf); // responsável por copiar os valores
     
     FILE *file;  // cria arquivos
     file = fopen (arquivo, "w"); // criar arquivos na pasta 
     fprintf(file, cpf); // salva o valor da variável no arquivo
     fclose(file);  //fecha o arquivo 
     
    file= fopen(arquivo, "a");
    fprintf(file, ",");
    fclose(file);
    
    printf("\ndigite o nome a ser cadatrado: ");
    scanf("%s", nome );
    
    file= fopen(arquivo, "a");
    fprintf(file, nome);
    fclose(file);

    file= fopen(arquivo, "a");
    fprintf(file, "\n\tnome:");
    fclose(file);
    
    printf("\ndigite o sobrenome a ser cadastrado:  " );
    scanf("%s", sobrenome);
    
    file= fopen(arquivo, "a");
    fprintf(file, sobrenome);
    fclose(file);

    file= fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf(" \ndigite o cargo a ser cadastrado:  ");
	scanf("%s", cargo);
	
	file= fopen(arquivo, "a");
	fprintf(file, cargo);
	fclose(file);
     
	 
	  system("pause");
}

int  consulta()
{
	setlocale(LC_ALL, "Portuguese");// definir linguagem
	
    char cpf[40];
    char conteudo[200];
    
    printf("digite o cpf a ser consultado: ");
    scanf("%s", cpf);//   "%s" salvar o que esta sendo escrito na variavel cpf 
    
    FILE *file;
    file = fopen(cpf,"r");
    
    if(file== NULL)
    {
    	printf("Não foi possivel abrir o arquivo, não foi localizado. \n");
	}
	
    while(fgets(conteudo, 200,file) != NULL)// e
    {
    	printf(" Essas são as informções do usuário\n ");
    	printf("%s", conteudo);
    	
    	
	}
	
	system("pause");
	
}
int deletar()
{
    char cpf[40];
	
	printf(" digite o cpf do usuário a ser cadastrado:");
	scanf("%s", cpf);
	
	remove(cpf);
	
	FILE *file;
	file= fopen(cpf, "r");
	
	if(file==NULL)
	{
		printf("\no usuário não foi localizado\n");
		
	}
	    system("pause");
    
}

int main()// função MAIN a que praticamente dá a execução para o programa
{      
       int opcao=0;
       
       int  laco=1;
       for(laco=1;laco=1;) //ESTRUTURA DE REPETIÇÃO for
       {
       
   
       system("cls");
       
       
	   setlocale(LC_ALL, "Portuguese");
	   printf("##cartório da EBAC##\n\n");// INÍCIO DO MENU
	   printf("Escolha uma opção desejada do menu\n\n");
	   printf("\t1 - registrar nomes\n");
	   printf("\t2 - consultar nomes\n");
	   printf("\t3 - deletar nomes\n\n");// FINAL DO MENU
	   printf("\t4 - sair do sistema\n\n");
	   
	   
	   scanf("%d", &opcao);
	   
	   system("cls");
	   
	    switch(opcao)// ESTRUTURA DE DECISÃO 
	    {
	    
	   	case 1:
        registro();	    
	    break;
	    system("pause");
	    
	    case 2:
	    consulta();
	    break;
	    system("pause");
	    
	    case 3:
	    deletar();
	    break;
	    system("pause");
	    
	    case 4:
	    printf("fim do sistema. aperte para finalizar");
	    return https://transitar.grupocriar.com.br/transito/cfc/da-autoescola-ao-cfc-o-surgimento-do-ensino-e-formacao-de-condutores0;
	    break;
	    
	    default:
	    printf("essa opção não existe!\n");
	    system("pause");
	    break;
	    }// FINAL DA ESTRUTURA DE DECISÃO 
	
	
        }
	
}
