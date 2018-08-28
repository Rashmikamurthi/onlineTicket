#include <stdio.h>
void fun();
int fno[30],an[30],d[30],s[30],dd[30],ad[30],p[30];
void fnum()
{
    int f,data;
    scanf("%d",&data);
    fno[f++]=data;
}
void anum()
{
    int a,data;
    scanf("%d",&data);
    an[a++]=data;
}
void dest()
{
    int de,data;
    scanf("%d",&data);
    d[de++]=data;
}
void source()
{
    int so,data;
    scanf("%d",&data);
    s[so++]=data;
}
void dep()
{
    int dt,data;
    scanf("%d",&data);
    dd[dt++]=data;
}
void arr()
{
    int at,data;
    scanf("%d",&data);
    ad[at++]=data;
}
void price()
{
    int pr,data;
    scanf("%d",&data);
    p[pr++]=data;
}
void display()
{
    int i;
    for(i=0;i<10;i++)
    {
        printf("flight num:%d",fno[i]);
        printf("airlines name:%d",an[i]);
        printf("destination:%d",d[i]);
        printf("source:%d",s[i]);
        printf("dep:%d",dd[i]);
        printf("arrival:%d",ad[i]);
        printf("price:%d",p[i]);
    }
}
int main()
{
    
    char c;
    printf("Do you wish to add(y/n):");
    scanf("%c",&c);
    do{
        switch(c)
        {
        case 'y':fun();
        break;
        case 'n':break;
        }
    }while(c=='y'||c=='Y');
    return 0;
}
void fun()
{
    int ch;
    printf("1.Flight num\n2.airlines name\n3.destination\n4.source\n5.dep date and time\n6.arr date and time\n7.price\nenter choice:");
    scanf("%d",&ch);
    do{
        switch(ch)
        {
        case 1:fnum();
        break;
        case 2:anum();
        break;
        case 3:dest();
        break;
        case 4:source();
        break;
        case 5:dep();
        break;
        case 6:arr();
        break;
        case 7:price();
        break;
        case 8:display();
        break;
        case 9:printf("EXIT");
        break;
        default:printf("Enter valid option");
        break;
        }
    }while(ch!=9);
}