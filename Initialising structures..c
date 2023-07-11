#include<stdio.h>
#include<string.h>
int main()
{
    struct emp
    {
        int eid;
        char ename[20];
        float esal;
    };
    struct emp *p1,*p2,e3,*p3;
    struct emp e1 = {20,"Ramsita",200000};
    p1 = &e1;
    p3 = &e3;
    struct emp e2 = {30};
    printf("%d %s %f",e1.eid,e1.ename,e1.esal);
    printf("\n%d %s %f",e2.eid,e2.ename,e2.esal);
    printf("\nPrinting through addresses:");
    printf("%d %s %f",p1->eid,p1->ename,p1->esal);
    e3.eid = 25;
    p3->esal = 250000;
    strcpy(e3.ename,"Ram");
    printf("\n e3 datas :");
    printf("%d %s %f",p3->eid,p3->ename,p3->esal);
    return 0;
}
