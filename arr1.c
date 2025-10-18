#include <stdio.h>

int sum(int n, int list[]) {
    int s = 0;
    for (int i=0; i<n; i++) {
        s += list[i];
    }
    return s;
}

void reverse(int n, int list[]) {
    for (int i= n-1; i>=0; i--) {
        printf("%d ", list[i]);
    }
}

int main(void) {

    int n = 0;

    printf("배열 크기 입력: ");
    scanf("%d", &n);

    int arr[n];
    printf("배열 값 입력: ");
    for (int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("===================\n");
    printf("배열 값 합계: %d\n", sum(n, arr));
    printf("배열 역순: ");
    reverse(n, arr);
    printf("\n");

    return 0;

}