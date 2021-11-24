/*#include <stdio.h>
int main(void)
{
    int two = 100;
    printf("%d和%d和%d\n",two,2);//当格式化少了对应的变量,最后一个%d传的是内存的一个值
    printf("%o和%d和%x\n",two,two,two);//%o代表八进制,%d十进制,%x十六进制
    printf("%#o和%#x\n",two,two);//需要八进制或十六进制需要的前缀需要加上#
    return 0;
}*/
/*#include <stdio.h>
int main(void)
{
    int i = 2147483647;
    unsigned int j = 4294967295;
    printf("%d,%d,%d\n",i,i+1,i+2);// 在有符号整数,可以得知,超出整数范围的则是重新开始,只不过是从-2147483648开始
    printf("%u,%u,%u\n",j,j+1,j+2);//无符合整数,超出整数范围,也是相同,只不过是从0开始
    return 0;

}*/
/*#include <stdio.h>
int main(void)
{
    unsigned int un = 3000000000;
    short end = 200;
    long big = 65537;
    long long verybig = 12345678908642;
    char set = 65;//ASCLL编码字母"A"存放的存储地址,前提是系统使用的是ASCLL编码
    printf("un = %u and not %d\n",un,un);//-1294967296值为3000000000存储位置相同的,当值超出规定的整数时,会出现这样的情况
    printf("end = %hd and %d\n",end,end);// 类型为short的时候,编译器运行会自动转义成int,默认在整数类型中,int运行速度快
    //使用h修饰符,可以显示较大整数被截断的成short类型值的情况
    printf("big = %hd and not %d\n",big,big);//将值65537以二进制写成32位,但是使用hd后就会使print取16位,故而写成1
    //写成32位00000000000000010000000000000001 16位就是从第一个1后面的0开始取,但是前面是0,所以是1
    printf("verybig = %lld and not %ld\n",verybig,verybig);//第一个显示的是完整的,但是使用了ld,会使printf函数取后面的16位值
    printf("%c",set);//打印出来是A
    return 0;
}*/
#include <stdio.h>
int main(void)
{
    char china;
    china='z';
    printf("%c",china);
    return 0;
}


