#ifndef EVALEXPR_H
# define EVALEXPR_H
# define CAPACITY 20

struct stack_op
{
	char *top;
	char *base;
	size_t size;
	size_t capacity;
};

struct stack_nb
{
	float *top;
	float *base;
  size_t size;
	size_t capacity;	
};


int sop_init(struct stack_op *Sop);
int snb_init(struct stack_nb *Snb);

int push_op(struct stack_op *Sop, int elt);
int push_nb(struct stack_nb *Snb, int elt);

int destroy_op(struct stack_op *Sop);
int destroy_nb(struct stack_nb *Snb);

char pop_op(struct stack_op *Sop);
float pop_nb(struct stack_nb *Snb);

int is_empty_op(struct stack_op *Sop);
int is_empty_nb(struct stack_nb *Snb);

char gtop_op(struct stack_op *Sop);
float gtop_nb(struct stack_nb *Snb);




#endif /*EVALEXPR_H*/
