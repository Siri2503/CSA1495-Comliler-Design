%{
%}
%%
<INITIAL>[0-9]+ {printf("integer\n");}
<INITIAL>[0-9]+[.][0-9]+ {printf("float\n");}
<INITIAL>[A-Za-z0-9_]* {printf("identifier\n");}
<INITIAL>[^\n] {printf("INVALID\n");}
%%
int yywrap(){}
int main()
{
printf("enter string\n");
yylex();
return 0;
}
