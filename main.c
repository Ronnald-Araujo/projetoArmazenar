#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>	
	   	

struct projetos{
	int codigo;		
	int ano;
	int status;
	char titulo[40];
	char descricao[300];
	char responsavel[200];
	int linguagem;
	int desk;   
	int aprovado; 
	
}; 
 
char retornoStatus(int a){
	if(a==1){
	return(printf("Projeto Status :[A fazer]\n"));}
	if(a==2){
	return(printf("Projeto Status :[Fazendo]\n"));}
	if(a==3){
	return(printf("Projeto Status :[Conclu�do]\n"));}
} 
char retornoLinguagem(int a){
	if(a==1){
	return(printf("Projeto linguagem :[PHP]\n"));}
	if(a==2){
	return(printf("Projeto linguagem :[C]\n"));}                                         
	if(a==3){
	return(printf("Projeto linguagem :[Paschal]\n"));}	
	if(a==4){
	return(printf("Projeto linguagem :[Outras]\n"));}
}
char retornoDesktop(int a){
	if(a==1){
		printf("Projeto Desktop:[Sim]\n");
	} 
	else {
		printf("Projeto Desktop:[N�o]\n");		
	}
	
}
char retornoAprovado(int a){
	if(a==1){
		printf("Projeto Aprovado: [Sim]\n");
	} 
	else {
		printf("Projeto Aprovado: [N�o]\n");		
	}
}    
 

int main() {
	setlocale(LC_ALL, "Portuguese");	
	int i, opcao, maximo;
	opcao = 0;
	maximo = 200;
	i = 1;
	struct projetos cadastro[maximo];

	printf("\n");
	printf("------------------------------------\n");
	printf("                                          \n");
	printf(" RA: 21060411-5                           \n");
	printf(" Nome: Ivan Ronnald Ara�jo Rodrigues      \n");
	printf("                                          \n");
	printf("------------------------------------\n");
	printf("\n");
	
	while(opcao != 7){
		printf("\n");
		printf("------------------------------------------------\n");
		printf("           MENU              			\n");
		printf(" [ 1 ] - Novo projeto.                    			\n");
		printf(" [ 2 ] - Imprimir todos os projetos.      			\n");
		printf(" [ 3 ] - Imprimir todos os projetos [A fazer].     \n");
		printf(" [ 4 ] - Imprimir todos os projetos [Fazendo].		\n");
		printf(" [ 5 ] - Imprimir todos os projetos [Conclu�do].	\n");
		printf(" [ 6 ] - Imprimir todos os projetos [Aprovados].	\n");
		printf(" [ 7 ] - Sair do sistema.                 			\n");
		printf("------------------------------------------------\n");
		printf("\n");
		printf("Informe a op��o desejada : ");
		scanf("%d",&opcao);
		
		fflush(stdin);
		
		if(opcao == 7){
			system("cls");
			printf("\n");
			printf("-------------------------------------------------- \n");
			printf("| Sistema finalizado.     \n");
			printf("-------------------------------------------------- \n");
			printf("\n");
			return 0;	
		}
		
		if(opcao ==1){			
			system("cls");			
			if(cadastro[i].codigo<=maximo){				
				cadastro[i].codigo =+ i;
				printf("C�digo do projeto [%i]",cadastro[i].codigo);
				printf("\n-------------------------------------------- \n");
				printf("| Informe o titulo do projeto: \n");
				printf("-------------------------------------------- \n");
				scanf("%s",&cadastro[i].titulo);
				fflush(stdin);						
				printf("-------------------------------------------- \n");
				printf("| Informe o descri��o do projeto: \n");
				printf("-------------------------------------------- \n");
				scanf("%s",&cadastro[i].descricao);
				fflush(stdin);
				printf("-------------------------------------------- \n");
				printf("| Informe o ano do projeto [Ex: 2021] : \n");
				printf("-------------------------------------------- \n");
				scanf("%i",&cadastro[i].ano);
				fflush(stdin);      				
				printf("-------------------------------------------- \n");
				printf("| Informe o e status do projeto. \n");
				printf("-------------------------------------------- \n");
				printf("| [ 1 ] - A Fazer \n");
				printf("| [ 2 ] - Fazendo \n");
				printf("| [ 3 ] - Conclu�do \n");
				printf("-------------------------------------------- \n");
	            printf("\nOp��o : ");
				scanf("%i",&cadastro[i].status);
				fflush(stdin);
				printf("-------------------------------------------- \n");
				printf("Informe o responsavel do projeto: \n");
				printf("-------------------------------------------- \n");
				scanf("%s",&cadastro[i].responsavel);
				fflush(stdin);
			    printf("-------------------------------------------- \n");
				printf("| Informe a linguagem do projeto. \n");
				printf("-------------------------------------------- \n");
				printf("| [ 1 ] - PHP \n");
				printf("| [ 2 ] - 'C' \n");
				printf("| [ 3 ] - Paschal \n");
				printf("| [ 4 ] - Outros \n");
				printf("-------------------------------------------- \n");
	            printf("\nOp��o : ");
				scanf("%i",&cadastro[i].linguagem);
				fflush(stdin);
				printf("-------------------------------------------- \n");
				printf("| Projeto desktop :  \n");
				printf("-------------------------------------------- \n");
				printf("| [ 0 ] - N�o \n");
				printf("| [ 1 ] - Sim \n");
				printf("-------------------------------------------- \n");
				printf("\nOp��o : ");
				scanf("%i",&cadastro[i].desk);
				fflush(stdin);
				printf("-------------------------------------------- \n");
				printf("| Projeto aprovado : \n");
				printf("-------------------------------------------- \n");
				printf("| [ 0 ] - N�o \n");
				printf("| [ 1 ] - Sim \n");
				printf("-------------------------------------------- \n");
				printf("\nOp��o : ");
				scanf("%i",&cadastro[i].aprovado);
				fflush(stdin);
				system("cls");
				i++;
				opcao=0;
			} else {
				printf("N�mero de cadastros m�ximo atingido.");
			}
			
		} else 
		
		if(opcao ==2){
		    system("cls");
			printf("\n");
			printf("-------------------------------------------------- \n");
			printf("| Relat�rio de Projetos!  [ Todos os Projetos] | \n");
			printf("-------------------------------------------------- \n");
			printf("\n");
			for(i=1;i<=cadastro[i].codigo;i++){
				printf("  Projeto C�digo      : [ %d ]\n",cadastro[i].codigo);
				printf("  Projeto Titulo      : [ %s ]\n",cadastro[i].titulo);
				printf("  Projeto Descricao   : [ %s ]\n",cadastro[i].descricao);
				printf("  Projeto Ano         : [ %d ]\n",cadastro[i].ano);
				retornoStatus(cadastro[i].status);
				printf("  Projeto Respons�vel : [ %s ]\n",cadastro[i].responsavel);
				retornoLinguagem(cadastro[i].linguagem);
				retornoDesktop(cadastro[i].desk);
				retornoAprovado(cadastro[i].aprovado);
				printf("---------------------------------------------- \n");
				printf("\n");
			}
		}
		if(opcao == 3){
			system("cls");
			printf("\n");
			printf("------------------------------------------------ \n");
			printf("| Relat�rio de Projetos!  [ Todos os Projetos - A Fazer] | \n");
			printf("------------------------------------------------ \n");
			printf("\n");  			                        		
			for(i=1;i<=cadastro[i].codigo;i++){                
		 		if(cadastro[i].status==1){
					printf("  Projeto C�digo      : [ %d ]\n",cadastro[i].codigo);
					printf("  Projeto Titulo      : [ %s ]\n",cadastro[i].titulo);
					printf("  Projeto Descricao   : [ %s ]\n",cadastro[i].descricao);
					printf("  Projeto Ano         : [ %d ]\n",cadastro[i].ano);
					retornoStatus(cadastro[i].status);
					printf("  Projeto Respons�vel : [ %s ]\n",cadastro[i].responsavel);
					retornoLinguagem(cadastro[i].linguagem);
					retornoDesktop(cadastro[i].desk);
					retornoAprovado(cadastro[i].aprovado);
					printf("------------------------------------------ \n");
					printf("\n");	
				}
			}
		}
		if(opcao == 4){
			system("cls");
			printf("\n");
			printf("------------------------------------------------ \n");
			printf("| Relat�rio de Projetos!  [ Todos os Projetos - Fazendo] | \n");
			printf("------------------------------------------------ \n");
			printf("\n");  			                        		
			for(i=1;i<=cadastro[i].codigo;i++){                
		 		if(cadastro[i].status==2){
					printf("  Projeto C�digo      : [ %d ]\n",cadastro[i].codigo);
					printf("  Projeto Titulo      : [ %s ]\n",cadastro[i].titulo);
					printf("  Projeto Descricao   : [ %s ]\n",cadastro[i].descricao);
					printf("  Projeto Ano         : [ %d ]\n",cadastro[i].ano);
					retornoStatus(cadastro[i].status);
					printf("  Projeto Respons�vel : [ %s ]\n",cadastro[i].responsavel);
					retornoLinguagem(cadastro[i].linguagem);
					retornoDesktop(cadastro[i].desk);
					retornoAprovado(cadastro[i].aprovado);
					printf("------------------------------------------ \n");
					printf("\n");	
				}
			}
		}
		if(opcao == 5){
			system("cls");
			printf("\n");
			printf("------------------------------------------------ \n");
			printf("| Relat�rio de Projetos!  [ Todos os Projetos - Conclu�do] | \n");
			printf("------------------------------------------------ \n");
			printf("\n");  			                        		
			for(i=1;i<=cadastro[i].codigo;i++){                
		 		if(cadastro[i].status==3){
					printf("  Projeto C�digo      : [ %d ]\n",cadastro[i].codigo);
					printf("  Projeto Titulo      : [ %s ]\n",cadastro[i].titulo);
					printf("  Projeto Descricao   : [ %s ]\n",cadastro[i].descricao);
					printf("  Projeto Ano         : [ %d ]\n",cadastro[i].ano);
					retornoStatus(cadastro[i].status);
					printf("  Projeto Respons�vel : [ %s ]\n",cadastro[i].responsavel);
					retornoLinguagem(cadastro[i].linguagem);
					retornoDesktop(cadastro[i].desk);
					retornoAprovado(cadastro[i].aprovado);
					printf("----------------------------------------- \n");
					printf("\n");	
				}
			}
		}
		if(opcao == 6){
			system("cls");
			printf("\n");
			printf("------------------------------------------------ \n");
			printf("| Relat�rio de Projetos!  [ Todos os Projetos - Aprovado] | \n");
			printf("------------------------------------------------ \n");
			printf("\n");  			                        		
			for(i=1;i<=cadastro[i].codigo;i++){                
		 		if(cadastro[i].aprovado==1){
					printf("  Projeto C�digo      : [ %d ]\n",cadastro[i].codigo);
					printf("  Projeto Titulo      : [ %s ]\n",cadastro[i].titulo);
					printf("  Projeto Descricao   : [ %s ]\n",cadastro[i].descricao);
					printf("  Projeto Ano         : [ %d ]\n",cadastro[i].ano);
					retornoStatus(cadastro[i].status);
					printf("  Projeto Respons�vel : [ %s ]\n",cadastro[i].responsavel);
					retornoLinguagem(cadastro[i].linguagem);
					retornoDesktop(cadastro[i].desk);
					retornoAprovado(cadastro[i].aprovado);
					printf("------------------------------------------ \n");
					printf("\n");	
				}
			}
		}
	}		
}

