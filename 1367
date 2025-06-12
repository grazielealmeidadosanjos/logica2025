#include <stdio.h>
#include <string.h>

#define MAX_PROBLEMS 200

typedef struct {
    int penalty;
    int solved;
} Problem;

int main() {
    int submissionCount, T;
    char X, Y[10];

    scanf("%d", &submissionCount);
    if (submissionCount == 0){
        return 0;
}
    Problem problems[MAX_PROBLEMS];
    for (int i = 0; i < MAX_PROBLEMS; i++) {
        problems[i].penalty = 0;
        problems[i].solved = 0;
    }

    int totalTime = 0;
    int totalSolved = 0;

 

    for (int i = 0; i < submissionCount; i++) {
        scanf(" %c", &X);
        scanf("%d", &T);
        scanf("%s", Y);
        //printf("%c %d %s", X,T,Y);
        //printf("%d\n",problems[X].penalty);
        
        
        if(strcmp(Y, "correct")== 0){
            problems[X].solved = T+problems[X].solved;
            totalSolved = totalSolved+1;
            totalTime = totalTime+problems[X].solved+problems[X].penalty;
        }
        if((strcmp(Y, "incorrect")== 0)){
        problems[X].penalty = problems[X].penalty+ 20;
        }
        
    
        
        
        
 
    //printf(" %c, %d, %d\n", X,problems[X].solved, problems[X].penalty);
        
    }

    printf("%d %d\n", totalSolved, totalTime);

    return 0;
}
