#include<stdio.h>
int main() {
    char str[100];
    int i = 0;
    int chars = 0;
    int spaces = 0;

    printf("Enter a line of text: ");
    gets(str); 

    printf("Output: %s\n", str);

    while (str[i] != '\0') {
        if (str[i] == ' ') {
            spaces++;
        } else {
            chars++;
        }
        i++;
    }

    printf("Total characters: %d\n", chars);
    printf("Total spaces: %d\n", spaces);

    return 0;
}