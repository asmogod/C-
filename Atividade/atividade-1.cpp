#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;
	int comparador =0;;
    printf("diga a ordem da matriz quadrada\n");
    scanf("%d", &a);
	
	int matriz[a][a];
	int contador = a * a;
	//printf("%d\n",contador);
	for(int b = 1; b <= a; b++){
		for(int c = 1; c <= a;c++){
            printf("digite o numero da matriz de coluna %d e linha %d\n", b, c);
            scanf("%d", &matriz[b][c]);

        }
		
	}
/*	printf("matriz eh dada por:\n");
    for(int b = 1; b <= a; b++){
		for(int c = 1; c <= a; c++){
			
            printf("%d  ", matriz[b][c]);
            
        }
		printf("\n");
	}*/
	
		for(int b = 1; b <= a; b++){
			for(int c = 1; c <= a;c++){
            	
				if(comparador < matriz[b][c]){
					comparador = matriz[b][c];
				}
			}
		
		}
		printf("maior numero da amtriz eh: %d\n", comparador);
	
system ("pause");
return 0;
}
