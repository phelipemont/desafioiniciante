#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

	int main(){
			
	
		int abertura;
			printf("-------------------------------\n");
			printf("[1] Guarda costeira\n");
			printf("[2] Bafo\n");
			printf("[3] Fibonacci\n");
			printf("[4] Sair\n");
			printf("Qual programa deseja executar?\n");
			scanf("%d", &abertura);
			
			switch(abertura){
		    	case 1:
		    		
					printf("Guarda costeira\n");
		     		printf("----------------\n");
		     	int gc;
		     	int distancia;
		     	int vf;
		     	int vg;
		     	
		     	for(int gc = 1; gc <= 5; gc++);
		     		
					printf("Digite a distancia!\n");
		     		scanf("%d", &distancia);
		     		
		     		printf("Digite a velocidade do fugitivo!\n");
		     		scanf("%d", &vf);
		     		
		     		printf("Digite a velocidade da guarda costeira!\n");
		     		scanf("%d", &vg);
		     		
		     		if (sqrt(distancia*distancia + vf*vf) <= vg){
		     			
		     			printf("Sim, a guarda costeira ira alcancar os fugitivos\n");
					 }else{
					 	
					 	printf("Nao, a guarda costeira nao ira alcancar os fugitivos\n");
					 	
					 	
					 }
					
		     	
		     		break;
		     		
		            
		        case 2:
		        	
		        	printf("Bafo\n");
		        	printf("---------\n");
		        	printf("");
		        	
					int teste;
					
					
		        	printf("Numero de testes?\n");
		        	scanf("%d", &teste);
		        	
		        	for(int i = 1; i <= teste; i++ ){
		        		
		        		int r; 
						 
		        		printf("quantas rodadas irao acontecer?\n");
		        		scanf("%d", &r);
		        		
		        		for (int rd = 1; rd <= r; rd++){
						
		        		
		        		int a;
		        		int b;
		        		
		        		printf("Quantos cards aldo virou?");
		        		scanf("%d", &a);
		        		printf("Quantos cards bento virou?");
		        		scanf("%d", &b);
		        		
		        		if(a > b){
		        			printf("no teste\n");
		        			printf("aldo venceu!!!\n");
		        			printf("");
		        			
						}else if(a < b){
						printf("no teste\n");	
						printf("bento venceu!!!\n");
		        		printf("");	
		        		
							}else if(a = b){
								printf("no teste\n");	
								printf("bento e aldo empatou!!!\n");
		        				printf("");	
								
							}
		       			}
					}
		            
		            break;
		
		        case 3:
		        	printf("fibonacci\n");
		        	printf("------------\n");
		        	
		        	int p, h1, h2, ha, n;
	
					h1=0;
					h2=1;
					
					
					printf("digite um numero: ");
					scanf("%d", &n);
					printf("serie de fibonacci: \n");
					printf("%d\n", h2);
					for(p = 2;p <= n;p++){
					ha=h1+h2;
					h1=h2;
					h2=ha;
					printf("%d\n", ha);
					}
			
			
				return 0;
		            
		            break;
		
		        default:
		            
		            break;
		            
			}
			
			
			
			
			
			
			
		}
