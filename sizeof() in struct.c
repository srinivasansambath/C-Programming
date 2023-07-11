#include<stdio.h>

int main()
{
    struct emp
    {
        int eid;
        char ename[20];
        float esal;
    };
    struct emp e1; // This is struct variable.
    printf("%d %d %d",sizeof(e1.eid),sizeof(e1.ename),sizeof(e1.esal));
    return 0;
}

/*
int main()
{
    struct emp
    {
        int eid;
        char ename;
        float esal;
    };
    printf("%d %d %d",sizeof(eid),sizeof(ename),sizeof(esal));
    return 0;
}*/
/*This program gives error because, struct variable is not created. After creation of struct variable only
memory is allocated*/
