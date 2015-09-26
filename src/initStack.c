#include <stdio.h>
#include <stdlib.h>
#include "evalexpr.h"

int sop_init(struct stack_op *Sop)
{
  Sop->base = (char*)malloc(sizeof (struct stack_op) * CAPACITY);
	//if (Sop->base = NULL)
	//return NULL;
	//Sop->base = malloc(sizeof (char) * CAPACITY);
	if (!Sop->base)
	{
		return 0;
	}
	Sop->top = Sop->base;
	Sop->size = CAPACITY;
	return 1;
} 

int snb_init(struct stack_nb *Snb)
{
  Snb->base = (float*)malloc(sizeof (struct stack_nb) * CAPACITY);
//	if (Snb->base = NULL)
  //return NULL;
 // Snb->base = malloc(sizeof (char) * CAPACITY);
  if (!Snb->base)
  {
     return 0;
  }
	Snb->top = Snb->base;
	Snb->size = CAPACITY;	
  return 1;
}
