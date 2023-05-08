#include <stdio.h>

int main() {
    char op;
    printf("Enter an operator: ");
    scanf("%c", &op);

    if(op == '+' || op == '-' || op == '*' || op == '/' || op == '%') {
        printf("%c is an arithmetic operator\n", op);
    } else if(op == '<' || op == '>' || op == '<=' || op == '>=' || op == '==' || op == '!=') {
        printf("%c is a relational operator\n", op);
    } else if(op == '&' || op == '|' || op == '^' || op == '~' || op == '<<' || op == '>>') {
        printf("%c is a bitwise operator\n", op);
    } else if(op == '!' || op == '&&' || op == '||') {
        printf("%c is a logical operator\n", op);
    } else if(op == '=' || op == '+=' || op == '-=' || op == '*=' || op == '/=' || op == '%=' || op == '&=' || op == '|=' || op == '^=' || op == '<<=' || op == '>>=') {
        printf("%c is an assignment operator\n", op);
    } else {
        printf("%c is not a valid operator\n", op);
    }

    return 0;
}
