
#include <stdio.h>
int main() {
    int n,rev=0,t; scanf("%d",&n); t=n;
    while(t>0){rev=rev*10+t%10; t/=10;}
    if(rev==n) printf("Palindrome");
    else printf("Not Palindrome");
    return 0;
}
