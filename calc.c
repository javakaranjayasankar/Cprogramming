#include<stdio.h>
#include<conio.h>
void add(int a,int b)
{
    int c;
    c=a+b;
    printf("%d additoin value\n",c);
}
void sub(int a,int b)
{
    int c;
    c=a-b;
    printf("%dsubtration value\n",c);
}
void mul(int a,int b)
{
    int c;
    c=a*b;
    printf("%dsubtration value\n",c);
}
void dev(int a,int b)
{
    int c;
    c=a/b;
    printf("%dsubtration value\n",c);
}
void mod(int a,int b)
{
    int c;
    c=a%b;
    printf("%dsubtration value\n",c);
}
void main()
{
    int c,a,b,d;
    printf("calculater\n1.addtion\n2.subtration\n3.multiplication\n4.divituion\n5.modules\n");
    ret:
    printf("ENTER THE CHOICE\n");
    scanf("%d",&c);
    printf("Enter A value\n");
    scanf("%d",&a);
    printf("Enter B value\n");
    scanf("%d",&b);
    if(c==1){
        add(a,b);
            }
    else if (c==2)
    {
        sub(a,b);
    }
    else if (c==3)
    {
        mul(a,b);
    }
    else if (c==4)
    {
        dev(a,b);
    }
    else if (c==5)
    {
        mod(a,b);
    }
    else{
        printf("Invalid choice\n");
    }
    opt:
    printf("do you want to continue \n1.yes\t2.no\n");

    scanf("%d",&d);
    if(d==1){
        goto ret;
    }
    else if(d==2){
        printf("exit");
    }
    else{
        printf("Invalid option\n");
        goto opt;
    }


}
