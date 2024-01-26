
#include <stdio.h>

typedef struct
{
    char stack[100];
    int index;
}stack;

void print(stack* the_stack){
    int i = the_stack->index - 1;
    while(i >= 0){
        printf(" %c ", the_stack->stack[i]);
        i--;
    }
    printf("\n");
}

char stack_top(stack* the_stack)
{
    if(the_stack->index > 0)
    {
        // printf(" top of stack is : %c \n", the_stack->stack[the_stack->index - 1]);
        return the_stack->stack[the_stack->index - 1];
    }
    return '\0';
}


char stack_pop(stack* the_stack)
{
    if(the_stack->index > 0)
    {
        the_stack->index--;
        // printf(" poped out : %c \n", the_stack->stack[the_stack->index]);
        return the_stack->stack[the_stack->index];
    }
    return '\0';
}

void stack_push(stack* the_stack, char i)
{
    if(the_stack->index < 100)
    {
        the_stack->stack[the_stack->index] = i;
        the_stack->index++;
        printf(" pushed : %c or %d number \n", the_stack->stack[the_stack->index - 1], the_stack->stack[the_stack->index - 1]);
    }
}

void solve_now(stack *math_operator, stack *operand){
    int op1, op2;
    char math_op;

    op1 = stack_pop(operand);
    op2 = stack_pop(operand);
    math_op = stack_pop(math_operator);
    int result;
    printf("solving %d %c %d \n", op1, math_op, op2);
    switch (math_op)
    {
    case '-':
        result = op2 - op1;
        stack_push(operand, result);
        break;
    case '+':
        result = (op2 + op1);
        stack_push(operand, result);
        break;
    case '*':
        result = (op2 * op1);
        stack_push(operand, result);
        break;
    case '/':
        result = (op2 / op1);
        stack_push(operand, result);
        break;
    default:
        break;
    }
}

int solver(char* m)
{
    stack math_operator, operands;
    operands.index = 0;
    math_operator.index = 0;
    char temp;
    char top_of_stack;

    int i = 0;
    while(m[i]!='\0')
    {
        printf("Now handling %c\n", m[i]);
        top_of_stack = stack_top(&math_operator);
        print(&math_operator);
        print(&operands);
        switch (m[i])
        {
        case '+':
        case '-':
            while( !( top_of_stack == '\0' || top_of_stack == '(' )){
                solve_now(&math_operator, &operands);
                top_of_stack = stack_top(&math_operator);
            }
            stack_push(&math_operator, m[i]);
            break;
        case '*':
        case '/':
            while(top_of_stack != '\0' && top_of_stack != '(' &&  top_of_stack != '(' && top_of_stack != '-'  &&  top_of_stack != '+'){
                solve_now(&math_operator, &operands);
                top_of_stack = stack_top(&math_operator);
            }
            stack_push(&math_operator, m[i]);
            break;
        case '(':
            stack_push(&math_operator, m[i]);
            break;
        case ')':
            while(top_of_stack != '('){
                solve_now(&math_operator, &operands);
                top_of_stack = stack_top(&math_operator);
            }
            if(top_of_stack == '('){
                stack_pop(&math_operator);
            }
            break;
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
            stack_push(&operands, m[i] - 48);
            break;
        default:
            break;
        }
        i++;
    }
    while(math_operator.index > 0){
        solve_now(&math_operator, &operands);
    }
    return(stack_pop(&operands));
}


int main()
{
    char* q = "3+2*4-5*(3+2)+(1-4)*(5-3)";

    printf("solution is : %d \n", solver(q));
}