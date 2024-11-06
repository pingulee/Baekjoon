#include <stdio.h>
#include <malloc.h>

const int MAX = 8;

int sum_score(int *score) {
    int sum = 0;
    for (int i = 3; i < MAX; i++) {
        sum += score[i];
    }
    return sum;
}

void print_index(int *index) {
    for (int i = 3; i < MAX; i++) {
        printf("%d ", index[i]);
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
                int temp_score = score[i];
                score[i] = score[j];
                score[j] = temp_score;

                int temp_index = index[i];
                index[i] = index[j];
                index[j] = temp_index;
            }
        }
    }

    printf("%d\n", sum_score(score));
    print_index(index);

    free(score);
    free(index);

    return 0;
}
