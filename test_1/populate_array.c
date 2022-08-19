//定义populate_array函数中的三个函数，第三个是函数的指针，通过函数来设置数组的值
//定义函数getNextRandomValue，返回一个随机值，它作为指针传递给populate_array函数


#include<stdio.h>
#include<stdlib.h>
//size_t 一种记录大小的数据类型，是一个整数；
void populate_array(int *array,size_t arraySize,int (*getNextValue)(void))
{
    for(size_t i=0; i<arraySize; i++)
        array[i] = getNextValue();
}

//获取随机值
void getNextRandomValue(void){
    return rand();
}

int  main(){
    int myarray[10];
    populate_array(myarray,10,getNextRandomValue);//getNextRandomValue 不能加括号，否则无法编译，
    //因为加上括号之后相当于传入此参数时传入了 int , 而不是函数指针
    for(int i = 0;i < 10;i++){
        printf("%d",myarray[i]);
    }
    printf("\n");
    return 0;
}