#include <stdio.h>

int main()
{
    int age = 0;
    char name[100] = "";
    char sex;
    
    FILE *fp;
    fp = fopen("data.txt","w+");
    
    printf("[>] 이름\n[<] ");
    scanf(" %s",name);
    
    printf("[>] 나이\n[<] ");
    scanf(" %d", &age);
    
    printf("[>] 성별(M,W)\n[<] ");
    scanf(" %c", &sex);
    
    fprintf(fp, "%s %d %c\n", name,age, sex);
    
    
    fclose(fp);
    
    
}
