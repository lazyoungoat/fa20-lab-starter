#include <stddef.h>
#include "ll_cycle.h"
#include <stdio.h>

int ll_has_cycle(node *head) {
	node * tortoise = head;
	node * hare = head;
	

	while(hare!=NULL && (hare->next)!=NULL){
		tortoise = tortoise->next;
		hare = hare->next->next;

		if(tortoise == hare){
			return 2;
		}
	}
    return 0;
}
