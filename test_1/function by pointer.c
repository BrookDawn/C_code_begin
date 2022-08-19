// 指针变量是一个地址:*ptr，创建指针变量要先声明指针变量的类型
// 指针的地址运算符  &(ptr = &one 指向one的指针)  * (val = *ptr 把地址上的值赋值给val)

#include<stdio.h>

//使用指针来实现函数之间值的互换
void interchange(int *u, int *v);

int main()
{
    int x = 5;
    int y = 10;
    printf("Originally x = %d and y = %d.\n", x , y);
    interchange(&x,&y);//把地址发送给函数   
    printf("x = %d and y = %d.\n", x , y);
    return 0;
}
void interchange(int *u,int *v)
{
    int temp;
    temp = *u;
    *u = *v;
    *v = temp;
    
}