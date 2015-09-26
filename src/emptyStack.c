#include <stdio.h>
#include "evalexpr.h"

int is_empty_op(struct stack_op *Sop)
{
	if (Sop->size == 0)
	return 1;

	return 0;	
}

int is_empty_nb(struct stack_op *Snb)
{
  if (Snb->size == 0)
  return 1;
  
  return 0;
}

