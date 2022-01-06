#include <stdio.h>
#include <windows.h> //打开头文件,使用函数sleep控制电脑打印时间
#include <string.h>
#include <stdlib.h>
// int main(void){
//     int n;
//     for(n=0;n<10;n++)
//         printf("%d %d\n",n,n*2+1);
//     return 0;
// }
int Arry(void);
int half(void);
int move(void);
int passerro(void);
int main(void){
    /*int i,j;
    for(i=0;i<6;i++){
        for(j=6;j>=i;j--){
            printf("#");
        }
        printf("\n");
    }*/
    //Arry();
    //half();
    //move();
    passerro();
    return 0;
}


int Arry(void){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int i;
    int k=7;
    int sz=sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<=sz;i++){
        if(k==arr[i]){
            printf("k=%d\n",i);
            break;
        }

    }
    return 0;
    
}


//根据上方的列子,来个简单,二分查找算法又称折半查找算法
int half(void){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int k =10;
    int left=0;
    int sz=sizeof(arr)/sizeof(arr[0]);
    int right= sz-1;
    while(left<=right){
    int mib=(left+right)/2;
    if(arr[mib]<k){
        left=mib+1;
    }
    else if(arr[mib]>k){
        right=mib-1;
    }
    else{
        printf("下标位置%d\n",mib);
        break;
    }    
    }
    if(left>right){
        printf("找不到!");
    }
    
    //printf("k=%d\n",mib);
    return 0;
}//没有考虑等于的情况下

int move(void){
    char arr1[]="my boy day!!!";
    char arr2[]="#############";
    int left=0;
    //int right=sizeof(arr1)/sizeof(arr1[0])-2;//拿取最右边的下标值,减二是因为字符数组中最后一个元素是\O,所以要减二
    int right=strlen(arr1)-1;//可以用这个函数计算字符串长度
    //printf("%d\n",right);
    while(left<=right){  
    arr2[left]=arr1[left];
    arr2[right]=arr1[right];
    left++;
    right--;
    Sleep(500);//2000毫秒,等于2秒 必须使用大写,因为规则如此
    system("cls");//清除每次打印后的结果;界面上就没有保存打印了
    printf("%s\n",arr2);
    }
    return 0;   
}



// int passerro(void){
//     int pass=123456;
//     int word;
//     int i=0;
//     printf("请输入你的密码:");
//     for(i=3;i>0;i--){
//         scanf("%d",&word);
//         if(word==pass){
//             printf("登录成功");
//             break;
//         }
//         else{
//             i--;
//             printf("密码错误,你还有%d次机会\n",i);
//             i++;
            
//         }
//     }
//     return 0;
// }


// int passerro(void){
//     int pass=123456;
//     int word;
//     int i=0;
//     printf("请输入你的密码:");
//     for(i=3;i>0;i--){
//         scanf("%d",&word);
//         if(word==pass){
//             printf("登录成功");
//             break;
//         }
//         else{
//             i--;
//             if(i>0){
//             printf("密码错误,你还有%d次机会\n",i);
            
//             }
//             if(i==0){
//                 printf("你没有机会了!!!\n");
//             }
//             i++;
            
//         }
//     }
//     return 0;
// }

// int passerro(void){
//     int pass=123456;
//     int word;
//     int i=0;
//     printf("请输入你的密码:");
//     while(i<3){
//         scanf("%d",&word);
//         if(word==pass){
//             printf("登录成功\n");
//             break;
//         }
//         else{
//             printf("密码错误\n");
//             printf("你在输入:\n");
//         }
//         i++;
//     }
//     return 0;
// }


int passerro(void){
    char pass[20];
    int i=0;
    while(i<3){
        printf("请输入你的密码:");
        scanf("%s",&pass);
        //if(pass=="123456");//==不能用来比较字符串
        if(strcmp(pass,"123456")==0){ //使用strcmp函数来比较判断  ==0,就是来判断,如果
        //这两个值相等==0; strcmp用来比较,如果存在两个值相等就是==0,如果左边的值大于右边,返回大于0的数字
        //如果右边的值大于左边的值,就返回小于0的值
            printf("登录成功\n");
            break;
        }
        else{
            printf("密码错误\n");
            //printf("你在输入:\n");
        }
        i++;
    }
    return 0;
}

