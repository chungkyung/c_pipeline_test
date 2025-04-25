// test_main.c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int result = system("main.exe > output.txt");

    if (result != 0) {
        printf("❌ 실행 실패\n");
        return 1;
    }

    FILE *fp = fopen("output.txt", "r");
    if (!fp) {
        printf("❌ 출력 파일 없음\n");
        return 1;
    }

    char buffer[256];
    fgets(buffer, sizeof(buffer), fp);
    fclose(fp);

    if (strcmp(buffer, "Hello Jenkins!\n") == 0) {
        printf("✅ 테스트 통과\n");
        return 0;
    } else {
        printf("❌ 테스트 실패: 출력값 = %s\n", buffer);
        return 1;
    }
}
