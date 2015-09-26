#include <stdio.h>
#include "evalexpr.h"
char pop_op(struct stack_op *Sop)
{
	char elt;
	if(is_empty_op(Sop))
	{
		return 0;	
	}	

	Sop->top--;
	elt = *(Sop->top);
	return elt;
}

float pop_nb(struct stack_nb *Snb)
{
char elt;
  
if(is_empty_nb(Snb))
  {
    return 0; 
  }   

  Snb->top--;
  elt = *(Snb->top);
  return elt;

}
