#include <stdio.h>
#include "evalexpr"

int judge(char c)
{
char ch[8] = {'+','-','*','/','(',')','%','^'};
int i;
	for(i = 0; i < 7; i++)
	{
		if (c == ch[i]
			return 1;)
	}
	return 0;// judge if its a char
}

char op_Priority(char top, char c)
{
	switch (top)
	{
		case '+': switch (c)
		{
			case '+': return '>';
			case '*': return '<';
			case '/': return '<';
			case '-': return '>';
			case '(': return '<';
			case ')': return '>';
			case '%': return '>';
			case '^': return '<';
			case '=': return '>';
		}
		
		case '-': switch (c)
		{
			case '+': return '>';                                                     
      case '*': return '<';                                                     
      case '/': return '<';
      case '-': return '>';
      case '(': return '<';
      case ')': return '>';
      case '%': return '>';
      case '^': return '<';
			case '=': return '>';
		}

		case '*': switch (c)
		{
			case '+': return '>';                                                     
      case '*': return '>';                                                     
      case '/': return '>';
      case '-': return '>';
      case '(': return '<';
      case ')': return '>';
      case '%': return '>';
      case '^': return '<';
			case '=': return '>';
		}

		case '^': switch(c)
		{
			case '+': return '>';                                                     
      case '*': return '>';                                                     
      case '/': return '>';
      case '-': return '>';
      case '(': return '<';
      case ')': return '>';
      case '%': return '>';
      case '^': return '>';
			case '=': return '>';
		}

		case '(' switch (c)
		{
			case '+': return '>';                                                     
      case '*': return '>';                                                     
      case '/': return '>';
      case '-': return '>';
      case '(': return 1;
      case ')': return '>';
      case '%': return '>';
      case '^': return '<';
			case '=': return '>';
		}	
		case ')': switch (c)
		{
			case '=': return '=';
			default: return 0;
		}

		default: return 0;
	}
}	

int is_op(char c)
{
	switch(c)
	{
		case '+':return 1;
		case '-':return 1;
		case '*':return 1;
		case '/':return 1;
		case '^':return 1;
		case '(':return 1;
		case ')':return 1;
		case '=':return 1;
		default:return 0;
	}
}	

float calcu(float a, char c, float b)
{
	switch(c)
	{
		case '/': 
			if (b == 0)
				{return 0;}
		case '^':
			if (a != 0 && b > 0)
				for (int i = 0; i < b; i++ )
				{
						return a *= a;
				}
		case '+':return a+b;
		case '-':return a-b;
		case '*':return a*b;
	}		
}
