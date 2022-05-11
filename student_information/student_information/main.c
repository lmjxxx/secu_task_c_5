#include <stdio.h>
#include <string.h>


struct person{
    int number;
    int student_number;
    char name[50];
    int lang;
    int math;
    int programming;
    
};
void input (struct person * ptr);
void output(struct person * ptr);

int i = 0;

int main()
{
    struct person student[10];
    int choice = 0;
    while(1)
    {
    printf("------------------------\n");
    printf("1. 입력   2. 출력   3. 종료\n");
    printf("------------------------\n[<] ");
    
    scanf("%d", &choice);
    
   
    switch(choice){
        case 1: // 입력
            input(student);
            break;
        case 2: // 출력
            output(student);
            break;
        
            return 0;
            break;
    
    
    }
        
    }
}
	
void input (struct person * ptr)
{
   
    char temp[50] = {};
    
    if( ptr + i != NULL && i <= 10){
        (ptr+i) -> number = 0;
        printf("[>] 학번을 입력하세요 \n[<] ");
        scanf(" %d", &(ptr+i)->student_number);
        printf("[>] 이름을 입력해주세요\n[<] ");
        scanf(" %s", temp);
        strcpy((ptr+i)->name, temp);
        printf("[>] 성적을 입력하세요\n");
        printf("[>] 국어\n[<] ");
        scanf(" %d", &(ptr+i)->lang);
        printf("[>] 수학\n[<] ");
        scanf(" %d", &(ptr+i)->math);
        printf("[>] 프로그래밍\n[<] ");
        scanf(" %d", &(ptr+i)->programming);
        i++;
    }
}

void output (struct person * ptr)
{
    printf("학번\t이름\t국어\t수학\t프로그래밍\n");
    for(int j = 0; j <= 10 && (ptr + j) -> number == 0; j++){
        printf("%d",(ptr + j) -> student_number);
        printf("%s \t", (ptr + j) -> name);
        printf("%d \t",(ptr + j) -> lang);
        printf("%d \t", (ptr + j) -> math);
        printf("%d \n", (ptr + j) -> programming);
    }
}
