#include <stdio.h>
#include "evalexpr.h"

char gtop_op(struct stack_op *Sop)
{
	char elt;
	if(is_empty_op(Sop))
	{
		return 0;
	}
	e = *(Sop->top-1);
	return e;
}
float gtop_nb(struct stack_op *Snb)
{
  float elt;
  if(is_empty_nb(Snb))
  {
    return 0;
  }                                                                             
  e = *(Snb->top-1);                                                            
  return e;                                                                     
}          

