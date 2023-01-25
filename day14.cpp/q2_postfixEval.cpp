#include <bits/stdc++.h>
using namespace std;

struct Stack
{
    int *arr;
    unsigned int capacity;
    int top;
};

struct Stack *createStack(int m)
{
    struct Stack *s = (struct Stack *)malloc(sizeof(struct Stack));
    if (!s)   
        return NULL;
    s->top = -1;
    s->capacity = m;
    s->arr = (int *)malloc(s->capacity * sizeof(int));

    if (!s->arr)
        return NULL;

    return s;
}

int isEmpty(struct Stack *s)
{
    return s->top == -1;
}
char peek(struct Stack *s)
{
    return s->arr[s->top];
}
char pop(struct Stack *s)
{
    if (!isEmpty(s))
        return s->arr[s->top--];

    return '$';
}
void push(struct Stack *s, char x)
{
    s->arr[++s->top] = x;
}

int evaluatePostfix(char *exp)
{
    struct Stack *stack = createStack(strlen(exp));
    if (!stack)
        return -1;
    int i;
    for (i = 0; exp[i]; ++i)
    {
        if (isdigit(exp[i]))
            push(stack, exp[i] - '0');

        else
        {
            int val1 = pop(stack);
            int val2 = pop(stack);
            switch (exp[i])
            {
            case '+':
                push(stack, val2 + val1);
                break;
            case '-':
                push(stack, val2 - val1);
                break;
            case '*':
                push(stack, val2 * val1);
                break;
            case '/':
                push(stack, val2 / val1);
                break;
            }
        }
    }
    return pop(stack);
}
int main()
{
    char exp[] = "231*+9-";
    cout << "postfix evaluation: " << evaluatePostfix(exp);

    return 0;
}