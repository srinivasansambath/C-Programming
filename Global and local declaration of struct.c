#include<stdio.h>

/*void test();

int main()
{
    struct emp
    {
        int eid;
        char ename[20];
        float esal;
    };
    struct emp e1;
    test();
}

void test()
{
    e1.eid = 20;
}
//This program gives error because struct variable can be created and accessed only inside main function only as struct is declared in main function
*/

//Global declaration of structures

void test();
struct emp
{
    int eid;
    char ename[20];
    float esal;
};

int main()
{
    struct emp e1;
    e1.eid = 20;
    printf("%d ",e1.eid);
    test();
    return 0;
}
void test()
{
    struct emp e2;
    e2.eid = 10;
    printf("%d",e2.eid);
}
