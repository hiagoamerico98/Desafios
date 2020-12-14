#include <stdio.h>
#include <stdlib.h>

int main(){
	/* n: quantidade de níveis no jogo
	   k: nível atual
	   s: nível que está a espada */
	
	int quantidade_casos, i, auxiliar, auxiliar2;
	int *n, *k, *s;
	
	scanf("%d", &quantidade_casos);
	
	n = (int *)malloc(quantidade_casos * sizeof(int));
	k = (int *)malloc(quantidade_casos * sizeof(int));
	s = (int *)malloc(quantidade_casos * sizeof(int));

	for(i = 1; i <= quantidade_casos; i++){
		scanf("%d %d %d", &n[i], &k[i], &s[i]);
	}

	for(i = 1; i <= quantidade_casos; i++){

		auxiliar = k[i] + n[i];
		auxiliar2 = k[i] + k[i] - s[i] + n[i] - s[i];

		if(auxiliar >= auxiliar2){
			printf("Case #%d: %d\n", i, auxiliar2);
		}
		else{
			printf("Case #%d: %d\n", i, auxiliar);	
		}
	}

	free(n);
	free(k);
	free(s);

	return 0;
}