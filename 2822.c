#include <stdio.h>
#include <malloc.h>

const int MAX = 8;

void print_array(int *score) {
    for (int i = 0; i < MAX; i++) {
        printf("%d\n", score[i]);
    }
}

int main(void) {
    int *score;
    int *index;

    score = (int *)malloc(MAX * sizeof(int));
    index = (int *)malloc(MAX * sizeof(int));

    printf("입력\n");
    for (int i = 0; i < MAX; i++) {
        scanf("%d", score + i);
    }

    for (int i = 0; i < MAX - 1; i++) {
        for (int j = i + 1; j < MAX; j++) {
            if (score[i] > score[j]) {
                int temp = score[i];
                score[i] = score[j];
                score[j] = temp;
            }
        }
    }

    printf("출력\n");
    print_array(score);

    free(score);
    free(index);

    return 0;
}
