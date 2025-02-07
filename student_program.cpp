#include <stdio.h>
#include <string.h>

void reverse(char *str);

int main() {
    char text[50];
    printf("Enter str1: ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = 0; 
    
    reverse(text);
    printf("MAIN : %s\n", text);
    return 0;
}

void reverse(char *str) {
    int text = strlen(str);
    for (int i = 0; i < text / 2; i++) {
        char temp = str[i];
        str[i] = str[text - i - 1];
        str[text - i - 1] = temp;
    }
    printf("FUNC : %s\n", str);
}
