#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char id[50];
    int i, len;
    printf("Enter an identifier: ");
    scanf("%s", id);

    len = strlen(id);
    if(!isalpha(id[0]) && id[0] != '_') {
        printf("%s is not a valid identifier\n", id);
        return 0;
    }

    for(i = 1; i < len; i++) {
        if(!isalnum(id[i]) && id[i] != '_') {
            printf("%s is not a valid identifier\n", id);
            return 0;
        }
    }

    printf("%s is a valid identifier\n", id);

    return 0;
}
