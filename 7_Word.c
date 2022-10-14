/*
Student: Rob Krüger
Number: 5780608
Assignment: 7_Word
*/

#include <stdio.h>
#include <string.h>

/* Count the amount of times the string we're looking for exists in the current input string using the method strstr
which is true while the substring exists in the main string */
int count_substring(const char *string, const char *substring){
    int count = 0;
    const char *tmp = string;
    while((tmp = strstr(tmp, substring)))
    {
        count++;
        tmp++;
    }
    return count;
}

int main(int argc, char **argv){
    char current_input[1024];
    int count = 0;
    
    /* If argc is 0 or 1, the user didn't give an argument */
    if(argc <= 1){
        printf("Please specify a program argument.\n");
        return 0;
    } 

    while(1) {
        /* Get the next word in the input */
        scanf("%s", current_input);
        /* If the current word is #EOF, break out of the while loop and print the results */
        if(strcmp(current_input, "#EOF") == 0){
            break;
        }
        count += count_substring(current_input, argv[1]);
    }

    printf("%i\n", count);
    return 0;
}