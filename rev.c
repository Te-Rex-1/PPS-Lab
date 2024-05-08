// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int num,rev=0;
    printf("Enter no ");
    scanf("%d",&num);
    int temp=num;
    while(temp!=0)
    {
        rev=rev*10+(temp%10);
        temp/=10;
    }
    if(rev==num)
    printf(" no is palindrome");
    else
    printf("no is not palindrome");
    

    return 0;
}
