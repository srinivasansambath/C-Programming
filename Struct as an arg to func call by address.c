#include<stdio.h>
#include<string.h>

void test(struct emp * p);
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
    strcpy(e1.ename,"Ram");
    e1.esal = 20000;
    printf("%d %s %f",e1.eid,e1.ename,e1.esal);
    test(&e1);
    printf("\n%d %s %f",e1.eid,e1.ename,e1.esal);
    return 0;
}
test(struct emp * p)
{
    p->eid = 30;
    strcpy(p->ename,"rama");
    p->esal = 25000;
}
