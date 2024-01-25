#include <iostream>
using namespace std;
#include <stdbool.h>

int main()
{
#if 0
    bool a = true;
    int len = sizeof(a);

    printf("len:%d\n",len);
    /* 布尔占一个字节 只有true:1和false:0 */
#endif

    

    string s = "hello world";
    const char *ptr = s.c_str();
    printf("s:%s\n", s.c_str());

    /* 字符串删除某个字符*/
    int idx = 0;
    s.erase(idx, 1);

    /* 头插*/
    s.insert(s.begin(), 's');

    /* 尾插*/
    s.push_back('s');

    int len = s.size();
    for (int idx = 0; idx < len; idx++)
    {
        printf("s:%c\n", s[idx]);
    }
    

    return 0;
}
