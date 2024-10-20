#include <stdio.h>

int main() {
    int i;
    int num;
    int primo=0;
    printf("inserisci il numero da determinare se e' num primo: ");
    scanf("%d",&num);
    for(i=2;i<num;i++) {
        if(num%i==0)
            primo=1;
    }
    if(primo) {
        printf("%d non e' numero primo\n",num);
    }else {
        printf("%d e' numero primo\n",num);
    }
    return 0;
}
