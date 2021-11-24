//嵌套循环的初始
// #include <stdio.h>
// #define rows 6
// #define chars 10
// int main(void){
//     int row;
//     char ch;
//     for (row=0;row<rows;row++){
//         for (ch='A';ch<('A'+chars);ch++){
//             printf("%c",ch);
//             printf("1");
//         }
//         printf("\n");       
//     }
//     return 0;
// }


//while 失败的案例,经验告诉我说并不能这么使用,只循环了一次,就跳过去了,条件是满足的
// #include <stdio.h>
// #define rows 6
// #define chars 10
// int main(void){
//     int row =0;
//     char ch ='A';
//     while(row<rows){
//         row++;
//         while(ch<('A'+chars)){ //为什么只循环了一次?在第一次外循环结束后,内循环ch
//         //依旧等于K.就是不满足了内循环的测试条件了,就是没有再次初始化内循环的值
//             ch++;
//             printf("%c",ch);
//         }
//             //printf("%c",ch);
//             //printf("1");   
//         printf("\n"); 
//     }
//     return 0;
// }


//一个失败的无限循环案例
// #include <stdio.h>
// #define rows 6
// #define chars 10
// int main(void){
//     int row =0;
//     char ch ='A';
//     while(row<rows){
//         row++;
//         while(ch=0,ch<('A'+chars)){ //因为在逗号表达式面前,逗号右边的变量永远取左边的变量
//             ch++;
//             printf("%c",ch);
//         }
//             //printf("%c",ch);
//             //printf("1");   
//         printf("\n"); 
//     }
//     return 0;
// }

//一个失败的无限循环
// #include <stdio.h>
// #define rows 6
// #define chars 10
// int main(void){
//     int row;
//     char ch;
//     for (row=0;row<rows;row++){
//         for (ch='A';row<rows;ch++){//不能这么写,测试条件row<rows造成了无限循环,因为row一直
//         //是0,在外循环的时候,row还能更新,而内循环中,没有
//             printf("%c",ch);
//             printf("1");
//         }
//         printf("\n");       
//     }
//     return 0;
// }

//针对上方的循环,我做了改造,但得出的结果差强人意
// #include <stdio.h>
// #define rows 6
// #define chars 10
// int main(void){
//     int row;
//     char ch;
//     for (row=0;row<rows;row++){
//         for (ch='A';row<rows;row++,ch++){//毫无疑问,我已经摆脱无限循环,但是却陷入了另一个困境
//         // 外循环只会循环一次了,后面才发现,内循环row已经循环了6次了,到外循环后,row已经是6,自然满足不了外循环的测试条件
//             printf("%c",ch);
//             printf("1");
//         }
//         printf("\n");       
//     }
//     return 0;
// }

//针对上方三个for嵌套循环的失败案例,我们来实验下方唯一一条成功的案例
//最开始的想法是想让内循环跟着外循环同步,外循环多少次,内循环就打印多少字符
// #include <stdio.h>
// #define rows 6
// #define chars 6 //这里我们将值修改6对应外循环
// int main(void){
//     int row;
//     char ch;
//     for (row=0;row<rows;row++){
//         for (ch=('A'+row);ch<('A'+chars);ch++){ // 这个其实也很好理解,当你理解了初始化在开头
//         //只循环一次就行
//             printf("%c",ch);
//             //printf("1");
//         }
//         printf("\n");       
//     }
//     return 0;
//}

//for + 数组
#include <stdio.h>
#define size 10
#define par 72
int main(void){
    int index,score[size];
    int sum = 0;
    float average;
    printf("Enter %D golf scores:\n",size);
    for (index = 0; index<size;index++){ //为什么不用逗号表达式,因为逗号会让index一直初始话,造成无限循环
        scanf("%D",&score[index]);

    }
    printf("The scores read in are as follows:\n");
    for (index = 0;index<size;index++){
        printf("%5d",score[index]);//验收输入的值
       
    }
    printf("\n");
    for (index = 0;index<size;index++){
        sum+=score[index];//求总分
    }
    average=(float)sum/size;//求平均分
    printf("sum of scores = %d,average=%.2f\n",sum,average);
    printf("that's a handicap of %.0f.\n",average-par);//且平均分于标准分的差值
    return 0;


}

