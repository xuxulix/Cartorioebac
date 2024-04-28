#include <stdio.h> //biblioteca de comunicação com o usuário
#include <stdio.h> //biblioteca de alocação de espaço em memória
#include <locale.h> //biblioteca de alocações de texto por região
#include <string.h> //biblioteca responsável por cuidar das string


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
		printf("Não foi possivel abrir o arquivo, não localizado! \n");
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssas são as informações do usuário: ");
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
	printf("O usuário não se encontra no sistema!\n");

	
	
	}	
	
	
}



#include <stdio.h> //biblioteca de comunicação com o usuário
#include <stdio.h> //biblioteca de alocação de espaço em memória
#include <locale.h> //biblioteca de alocações de texto por região

int main()
{
int opcao=0; //Definindo variaveis	
int laco=1;

for(laco=1;laco=1;)
{
	


	setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
	
	printf("### Cartório da EBAC ###\n\n"); //Inicio do menu
	printf("Escolha a opção desejada do menu\n\n");
	printf("\t1 - Registrar nomes\n");
	printf("\t2 - Consultar nomes\n");
	printf("\t3 - Deletar nomes\n\n"); // Fim do menu
	printf("\t4 - Sair do sistema\n\n");

scanf("%d" , &opcao); //Armazenamento do usuário

switch(opcao) //Um jeito de fazer
{
	case 1:
		printf("Você escolheu o registro de nomes!\n");

		break;
		
		case 2:
			printf("Você escolheu consultar os nomes!\n");
	
			 break;
			
			case 3:
			 printf ("Você escolheu deletar os nomes!\n");

			 break;
			 
			 
			 case 4:
			 	printf("Obrigado por utilizar o sistema!n");
			 	return 0;
			 	break;
			 	
			 default:
		printf("Essa opção não está disponível!\n");

		break;
}
}
}
