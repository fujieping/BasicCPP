#include <iostream>
using namespace std;
#include <stack>
#include <string.h>

#define BUFFER_SIZE 15

typedef struct Stu_info
{
    int age;
    char sex;
    char name[BUFFER_SIZE];
}Stu_info;

int main()
{
    #if 0
    stack<int> mystack;

    for (int idx =0 ; idx < BIG_ENDIAN; idx++)
    {
        mystack.push(idx);
    }
    int length = mystack.size();

    printf("length:%d\n", length);

    int topVal = 0;
    while (!mystack.empty())
    {
        topVal = mystack.top();
        mystack.pop();
        printf("topVal:%d\n", topVal);
    }
    #endif
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

    stack<Stu_info*> mystack;
    mystack.push(&stu1);
    mystack.push(&stu2);
    mystack.push(&stu3);

    Stu_info* topVal = NULL;
    while(!mystack.empty())
    {
        topVal = mystack.top();
        mystack.pop();
        printf("age:%d\t, name:%s\t, sex:%c\n", topVal->age, topVal->name, topVal->sex);
    
    }
    

    return 0;
}