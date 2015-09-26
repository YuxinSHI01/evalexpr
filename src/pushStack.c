#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "evalexpr.h"

int push_op(struct stack_op *Sop, int elt)
{
	if(Sop->size +1 == Sop->capacity)
  {
		Sop->capacity = 2 * CAPACITY;
		Sop->base = realloc(Sop->base, Sop->capacity);
		if(Sop->base == NULL)
		return 0;
		Sop->top = Sop->base + Sop->size;
		Sop->size = Sop->size + CAPACITY;
	}
	  *(Sop->top) = elt;
	  Sop->top++;
	  
		if(elt == (intptr_t)(Sop->top))
	  return 1;

return 0;
}

int push_nb(struct stack_nb *Snb, int elt)
{

	if(Snb->size +1 == Snb->capacity)
  {
    Snb->capacity = 2 * CAPACITY;
    Snb->base = realloc(Snb->base, Snb->capacity);
    if(Snb->base == NULL)
    return 0;
    Snb->top = Snb->base + Snb->size;
    Snb->size = Snb->size + CAPACITY;
  }
    *(Snb->top) = elt;
    Snb->top++;
        
    if(elt == (intptr_t)(Snb->top))
    return 1;

return 0;

}
