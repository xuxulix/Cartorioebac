#include <stdio.h> //biblioteca de comunica��o com o usu�rio
#include <stdio.h> //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> //biblioteca de aloca��es de texto por regi�o
#include <string.h> //biblioteca respons�vel por cuidar das string


int registro()
{
	setlocale(LC_ALL, "Portuguese");//Definindo linguagem
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	printf("Digite p CPF a ser cadastrado: ");
	scanf("%s", cpf);
	

	
	FILE *file; // cria o arquivo

	fprintf(file,cpf);// salvo o valor da variavel
	fclose(file);// fecha o arquivo
	

	fprintf(file,",");
	fclose(file);
	
	printf("Digite o nome a ser cadastrado: ");	
	scanf("%s ,nome");

	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado: ");
	scanf("%s ,sobrenome");
	

	fprintf(file,",");
	fclose(file);
	
	printf("Digite o cargo a ser cadastrado: ");
	scanf("%s,cargo");
	


	fclose(file);
	


	
}

int consulta()
{
	setlocale(LC_ALL, "Portuguese");//Definindo linguagem
	
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o CPF a ser consultado: ");
	scanf("%s",cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf("N�o foi possivel abrir o arquivo, n�o localizado! \n");
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssas s�o as informa��es do usu�rio: ");
		printf("%s", conteudo);
		printf("\n\n");
		
		
	}
	

}

int deletar ()
{
	
	char cpf[40];
	
	printf("Digite o CPF a sel deletado: ");
	scanf("%s",cpf);
	
	remove(cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL);
	{
	printf("O usu�rio n�o se encontra no sistema!\n");

	
	
	}	
	
	
}



#include <stdio.h> //biblioteca de comunica��o com o usu�rio
#include <stdio.h> //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> //biblioteca de aloca��es de texto por regi�o

int main()
{
int opcao=0; //Definindo variaveis	
int laco=1;

for(laco=1;laco=1;)
{
	


	setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
	
	printf("### Cart�rio da EBAC ###\n\n"); //Inicio do menu
	printf("Escolha a op��o desejada do menu\n\n");
	printf("\t1 - Registrar nomes\n");
	printf("\t2 - Consultar nomes\n");
	printf("\t3 - Deletar nomes\n\n"); // Fim do menu
	printf("\t4 - Sair do sistema\n\n");

scanf("%d" , &opcao); //Armazenamento do usu�rio

switch(opcao) //Um jeito de fazer
{
	case 1:
		printf("Voc� escolheu o registro de nomes!\n");

		break;
		
		case 2:
			printf("Voc� escolheu consultar os nomes!\n");
	
			 break;
			
			case 3:
			 printf ("Voc� escolheu deletar os nomes!\n");

			 break;
			 
			 
			 case 4:
			 	printf("Obrigado por utilizar o sistema!n");
			 	return 0;
			 	break;
			 	
			 default:
		printf("Essa op��o n�o est� dispon�vel!\n");

		break;
}
}
}
