#include<stdio.h>
#include <string.h>
#include "Functions.h"
int main(){
    char string[100];
    Node* head = (Node*) malloc(1 * sizeof (Node));
    printf("Enter a string: ");
    scanf("%[^\n]s", string);
    printf("\n");
    for(int i = 0; i < strlen(string); i++) {
        push(head, string[i]);
        printf("Top of stack: %c\n", peek(head));
    }
    printf("Reversed string: ");
    while(!isEmpty(head)){
        printf("%c", pop(head));
    }
    return 0;
}