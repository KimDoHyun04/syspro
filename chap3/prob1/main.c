#include <stdio.h>
#include <string.h>
#include "copy.h"

char line[MAXLINE];
char longest[MAXLINE];

int main() {
    int len;
    int max = 0;

    printf("Enter text (Ctrl+D to end):\n");
    while (fgets(line, MAXLINE, stdin) != NULL) {
        len = strlen(line);
        
        if (len > 0 && line[len - 1] == '\n') {
            line[len - 1] = '\0';
            len--;
        }

        if (len > max) {
            max = len;
            copy(line, longest);
        }
    }

    if (max > 0)
        printf("Longest line: %s\n", longest);

    return 0;
}

