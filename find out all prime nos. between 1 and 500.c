
#include <stdio.h>
int main() {
    for(int i=2;i<=500;i++){
        int prime=1;
        for(int j=2;j<=i/2;j++) if(i%j==0) prime=0;
        if(prime) printf("%d ",i);
    }
    return 0;
}
