#include <stdio.h>
#include <stdlib.h>
#include "evalexpr.h"

int destroy_op(struct stack_op *Sop)
{
	if (Sop->top == Sop->base)
	{
		Sop->size = 0;
	}
		free(Sop);
		return 0;
}

int destroy_nb(struct stack_nb *Snb)
{
  if (Snb->top == Snb->base)
  {
    Snb->size = 0;
  }
    free(Snb);
    return 0;
}


