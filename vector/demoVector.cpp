#include <iostream>
#include <string.h>
using namespace std;
#include <vector>
#include <stdio.h>

#define BUFFER_SIZE 20

typedef struct Stu_info
{
    int age;
    char sex;
    char name[BUFFER_SIZE];
}Stu_info;

int main()
{
    #if 0
    vector<int> myvec;

    /* 插入数据*/
    myvec.push_back(5);

    /* 查询数组的元素大小*/
    int length = myvec.size();
    int capacity = myvec.capacity();

    for (int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        myvec.push_back(idx);
    }
    int length = myvec.size();
    int capacity = myvec.capacity();

    printf("length:%d\n", length);
    printf("length:%d\n", capacity);
    #endif

    #if 1
    Stu_info stu1, stu2, stu3;
    stu1.age = 10;
    strncpy(stu1.name, "zhangsan", sizeof(stu1.name) - 1);
    stu1.sex = 'm';

    stu2.age = 12;
    strncpy(stu2.name, "lisi", sizeof(stu2.name) - 1);
    stu2.sex = 'w';

    stu3.age = 16;
    strncpy(stu3.name, "wangwu", sizeof(stu3.name) - 1);
    stu3.sex = 'm';

    vector<Stu_info> myvec;
    myvec.push_back(stu1);
    myvec.push_back(stu2);
    myvec.push_back(stu3);

    int length = myvec.size();
    int capacity = myvec.capacity();

    printf("length:%d\n", length);
    printf("capacity:%d\n", capacity);

    Stu_info tmpInfo;
    memset(&tmpInfo, 0, sizeof(tmpInfo));
    for (int idx = 0; idx < length; idx++)
    {
        tmpInfo = myvec[idx];
        printf("age:%d\t, name:%s\t, sex:%c\n", tmpInfo.age, tmpInfo.name, tmpInfo.sex);
    }
    #endif
    return 0;
}