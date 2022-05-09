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


int main()
{
    struct person student[10];
    struct person* ptr = student;
    int choice = 0, i = 0;
    char temp[50] = {};
    while(1)
    {
    printf("------------------------\n");
    printf("1. 입력   2. 출력   3. 종료\n");
    printf("------------------------\n[<] ");
    
    scanf("%d", &choice);
    
   
    switch(choice){
        case 1: // 입력
                if( ptr + i != NULL && i <= 10){
                    student[i].number = 0;
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
                    break;
                
            }
        case 2: // 출력
            printf("학번\t이름\t국어\t수학\t프로그래밍\n");
            for(int j = 0; j <= 10 && student[j].number == 0; j++){
                printf("%d",student[j].student_number);
                printf("%s \t",student[j].name);
                printf("%d \t",student[j].lang);
                printf("%d \t", student[j].math);
                printf("%d \n", student[j].programming);
                
            
            }break;
        case 3: // 종료
            return 0;
            break;
    
    
    }
        
    }
}
	
