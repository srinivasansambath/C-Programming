#include<stdio.h>
//call by value
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
    printf("%d",e1.eid);
    test(e1);
    printf("\n%d",e1.eid);
}
void test(struct emp e2)
{
    e2.eid = 10;
}
