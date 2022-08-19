// 声明一个函数指针变量p，指向函数max
#include<stdio.h>
int max(int x,int y)
{
    return x > y ? x : y;
}
int main(){
    int (*p)(int,int) = &max;  //p是函数指针
    int a,b,c,d;
    printf("请输入三个数字: ");
    scanf("%d%d%d",&a,&b,&c);
    //三个数字先两两比较，然后得出结果
    //可以直接调用函数   d = max(max(a,b),c);
    d = p(p(a,b),c);//也可以是直接调用指针p
    printf("最大的数值是:%d\n",d);

    return 0;
}