#include <stdio.h>
#include <string.h>

int count_substring(char *str, char *what){
    int what_len = strlen(what);
    int count = 0;

    char *where = str;

    if (what_len){ 
        while ((where = strstr(where, what))) {
            where += what_len;
            count++;
        }
    }
    return count;
}

int main(int argc, char **argv){
    if(!argc){
        printf("Please specify a program argument.");
        return 0;
    }

    char current_input[1024];
    int count = 0;

    do {
        scanf("%s", current_input);
        count += count_substring(current_input, argv[1]);
    }
    while(strcmp(current_input, "#EOF"));

    printf("%i", count);
    return 0;
}