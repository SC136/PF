#include <stdio.h>

int power(int x, int y) {
    if(y==0) {
        return 1;
    } else {
        return (x*power(x,y-1));
    }
}

int main() {
    int x,y;
    printf("\nenter x: ");
    scanf("%d", &x);
    printf("\nenter y: ");
    scanf("%d", &y);
    
    printf("%d",power(x,y));

    return 0;
}
