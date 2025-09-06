
#include <stdio.h>
int main() {
    int n,prime=1; scanf("%d",&n);
    if(n<=1) prime=0;
    for(int i=2;i<=n/2;i++) if(n%i==0) prime=0;
    if(prime) printf("Prime");
    else printf("Not Prime");
    return 0;
}
