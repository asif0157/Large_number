#include <stdio.h>
int main(){
    int n1, n2, n3, raw ;
    
    printf("Frist Number: ");
    scanf("%d",&n1);
    printf("Second number: ");
    scanf("%d",&n2);
    printf("Third number: ");
    scanf("%d",&n3);
    // if statemnt

if (n1>n2 && n1>n3)
{
    printf("%d is the biggest number (First Number)\n", n1);

}
else if (n2>n1 && n2>n3)
{
    printf("%d is the biggest number (Second Number)\n", n2);
}
else{
    printf("%d is the biggest number (Third Number)\n", n3);

}
/*

// switch statement

switch (n1,n2,n3)
{
case 'n1>n2':
    printf("%d Frist Number is big", n1);
    break;
case 'n1>n3':
    printf("%d Frist Number is big", n1);
    break;
case 'n2>n1':
    printf("%d Secound Number is big", n1);
    break;
case 'n2>n3':
    printf("%d Secound Number is big", n1);
    break;

default:
    printf("%d Third Number is big", n1);
    break;
}
    scanf("%d", raw);
    */
    return 0;
}