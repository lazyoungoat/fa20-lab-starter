#include <stddef.h>
#include "ll_cycle.h"
#include <stdio.h>

int ll_has_cycle(node *head) {
	node * tortoise;
	node * hare;
	

	while((hare->next)!=NULL){
		(hare->next)+=2;
		if((hare->next) == NULL){
			printf("acyclic");
		}
		(tortoise->next)++;
		if((hare->next) == (tortoise->next)){
			printf("cyclic");
		}
	}
    return 0;
}
