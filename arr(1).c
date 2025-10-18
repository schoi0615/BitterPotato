#include <stdio.h>

int n;
int rev[n];
int list[n];

int sum(void){
    int s = 0;
    for (int i=0; i<n; i++){
        
        s += list[i];
    }
    printf("%d", s);
    return 0;
}

int reverse(void){
    
    for(int j=0;j<n;j++){
        rev[j]=list[n-(j+1)];
    }
    printf("%d", rev);
    return 0;
}


int main(void) {

    
    printf("배열 크기 입력: ");
    scanf("%d\n", &n);
    for (int j=0; j<n; j++) {
        printf("배열 값 입력: ");
        scanf("%d\n", &list[j]);
    }
    
    printf("==============");
    sum();
    reverse();

    return 0;
    
    



}