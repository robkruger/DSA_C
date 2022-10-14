/*
Student: Rob Krüger
Number: 5780608
Assignment: 8_List
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
  
#define MAX_SIZE 256
  
/* Declare which values a member should have */
typedef struct {
    char name[32];
    char type;
    int age;
} Member;
  
/* Read the members from the text file and put them in a struct */
int read_members(const char *filename, Member *members) {
    FILE *fin = fopen("members.txt", "r");
    int i = 0;
    if(!fin){
        printf("Cannot open 'members'\n");
        return -1;
    }
  
    while (fscanf(fin, "%s %c %i", 
             members[i].name,
            &members[i].type,
            &members[i].age) == 3)
        ++i;
  
    fclose(fin);
    return i;
}
  
/* Print out the list of members, and calculate the average age at the same time */
void print_members(Member *members, int size) {
    double total_age_a = 0;
    double total_a = 0;
    double total_age_f = 0;
    double total_f = 0;
    int i;
    for (i = 0; i < size; ++i) {
        Member *m = &members[i];
        printf("%s %c %i\n",
            m->name, m->type, m->age);
        if(m->type == 'a'){
            total_a += 1;
            total_age_a += m->age;
        }
        if(m->type == 'f'){
            total_f += 1;
            total_age_f += m->age;
        }
    }
    printf("full member average age %.1f\n", total_age_f / total_f);
    printf("associate member average age %.1f\n", total_age_a / total_a);
}

/* Define a compare method to alphabetically order the list of members */
int compare(const void *s1, const void *s2)
{
    Member *e1 = (Member *)s1;
    Member *e2 = (Member *)s2;
    return strcmp(e1->name, e2->name);
}
  
int main() {
    Member members[MAX_SIZE];
    int size = read_members("members.txt", members);
    /* If size == -1, there was an error reading the file and the program should stop */
    if(size == -1){
        return 1;
    }
    /* Sort the members array */
    qsort(members, size, sizeof(Member), compare);
    print_members(members, size);
    return 0;
}