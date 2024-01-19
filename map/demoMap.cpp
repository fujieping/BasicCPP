#include <stdio.h>
using namespace std;
#include <set>
#include <map>
#include <string.h>    

struct stbInfo
{
    int age;
    char sex;
};

int main()
{
    map<int,int> mymap;

    /* 7这个位置来决定的*/
    mymap[7] = 666;

    printf("map:%d\n", mymap[7]);

    stbInfo info;
    info.age = 20;
    info.sex = 'c'; 
    map<string,stbInfo> mymap2;


    return 0;                                                                                                                                                                                                                                            
}