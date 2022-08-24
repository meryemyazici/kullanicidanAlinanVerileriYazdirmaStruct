#include <stdio.h>
#include <stdlib.h>

struct person
{
    int age;
    float weight;
    char name[30];

};
int main()
{
    struct person *ptr;
    int i,n;
    printf("enter the number of persons: "),
    scanf("%d",&n);
    ptr= (struct person*) malloc(n*sizeof(struct person));

    for(i=0;i<n;++i)
    {
        printf("enter first name and age respectively: ");
        scanf("%s %d",&(ptr+i)->name,&(ptr+i)->age);
    }

    printf("displaying information:\n");
    for(i=0;i<n;++i)
        printf("mame: %s\tAge: %d\n",(ptr+i)->name,(ptr+i)->age);
}
