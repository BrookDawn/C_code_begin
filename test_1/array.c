//指针之间的赋值比数值之间的赋值要严格，两个类型的指针不能互相变换(int 和 double)
// int **p1  //指向指针的指针

// pt = &ar1[0][0];  都是指向指针的指针
// pt = ar1[0]       都是指向指针的指针

// const指针赋值给非const指针不安全

#include<stdio.h>
#define COLS 4
int sum2d(const int ar[][COLS],int rows);
int sum(const int ar[],int n);             //符合字面量作为实际参数传递带有匹配形式参数的函数

int main(){
    int total1,total2,total3;
    int *pt1;              //符合字面量是匿名的，必须在创建的时候同时使用它，使用指针记录地址就是一种方法
    int (*pt2)[COLS];      //声明一个指向二维数组的指针
    pt1 = (int[2]){10,20};
    pt2 = (int[2][COLS]){{1,2,3,-9},{4,5,6,-8}};  // 2x4的格式，两个元素，每个元素里面有四个int类型数值
    total1 = sum(pt1,2);
    total2 = sum2d(pt2,2);
    total3 = sum((int[]){4,4,4,5,5,5,5},6);
    printf("total1 = %d\n",total1);
    printf("total2 = %d\n",total3);
    printf("total3 = %d\n",total2);
    return 0;
}

int sum(const int ar[],int n)
{
    int i;
    int total = 0;
    for(i = 0; i < n;i++)
        total += ar[i];
    return total;
}

int sum2d(const int ar[][COLS],int rows)
{
    int r;
    int c;
    int tot = 0;
    for(r = 0; r < rows;r++)
        for(c=0;c<COLS;c++)
            tot += ar[r][c];
    return tot;
}