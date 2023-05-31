#include <studio.h>
void main(){
    int a,b;
    clrscr();
    printf("Enter two number");
    scanf("%d%d", &a,&b);
    a=a+b;
    b=a-b;
    printf("%d %d",a,b);
    getch();
}