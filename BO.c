#include <stdio.h>
#include <locale.h>



struct BO
{
	int id;
	char nome[50];
	char tipo[50];
	char descricao[50];
	char data[50];
	
	
	
};



int main(){
	setlocale(LC_ALL, "portuguese");
	int opcao = 1;
	
	struct BO lista[100];
	int totalBO = 0;
	
	
	while( opcao !=0 )
	{
		

		printf("====BOLETIM DE OCORRENCIA====\n \n");
		printf("1 - Cadastrar BO \n \n");
		printf("2 - Listar BO \n \n");
		printf("3 - Buscar BO \n \n");
		printf("4 - Editar BO \n \n");
		printf("5 - Excluir BO \n \n");	
		printf("0 - Sair \n \n");	
		
		printf("Digite um número \n");
		scanf("%d", &opcao);
		
		 switch(opcao)
		 {
		 case 1:
		 	printf( "CADASTRAR BO \n \n \n");
		 	lista[totalBO].id = totalBO + 1;
		 	
		 	printf("Digite seu nome:\n \n ");
		 	scanf("%[^\n]s", lista[totalBO].nome);
		 	
		 	printf("Digite o tipo de ocorrência:\n \n ");
			scanf(" %[^\n]s", lista[totalBO].tipo);
			
			printf("Digite a descrição: \n \n");
			scanf(" %[^\n]s", lista[totalBO].descricao);
			
			printf("Digite a data:\n \n ");
			scanf(" %[^\n]s", lista[totalBO].data);
			
			totalBO++;
			printf("BO cadastrado com sucesso!\n\n");
			break;
			
			
		 	
			 break;
		 case 2:
		 	printf("LISTA DE BO \n \n \n");
		 	break;
		 case 3:
			printf("BUSCAR BO \n \n \n");
			break;
		 case 4:
		 	printf("EDITAR BO \n \n \n");
		 	break;
		 case 5:
		 	printf("EXCLUIR BO \n \n \n");
		 	break;
		 case 0:
		 	printf("SAINDO...");
		 	break;
		 default:
		 	printf("OPERAÇÃO INVÁLIDA\n \n");
			 break;
		 }
		
	}
			
	
}