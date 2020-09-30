#include<stdio.h>
int main()
{
    int A[5] = { 10,12,31,17,25 };
    int B[5] = { 3,8,78,91,71 };
    int N = 4;
    int C[5];

    for (int i = 0; i < N + 1; i++)
    {
        for (int j = 0; j < i + 1; j++) {
            if (!j) {
                C[i] = A[j] * B[i - j];
            }
            else {
                C[i] = C[i] + (A[j] * B[i - j]);
            }
        }
        printf("C[%d] = %d\n", i, C[i]);
    }
    return 0;

}