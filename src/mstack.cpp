#include "../include/mstack.h"
// 函数unionSet：求集合a和b的并集
// 参数：a-集合，b-集合
// 返回值：集合（集合a和b的并集）
intSet unionSet(intSet a, intSet b)
{
    // 请在此添加代码，补全函数unionSet
    /********** Begin *********/
    intSet c = new node;
    intSet ta = a;
    intSet tb = b;
    for (size_t i = 0; i < listLength(a); i++)
    {
        intSet d = new node;
        d->data = ta->data;
        c = insertSort(c,d);
        ta = ta->next;
    }

    for (size_t i = 0; i < listLength(b); i++)
    {
        if (search(c,tb->data))
        {
            tb = tb->next;
            continue;
        }
        intSet d = new node;
        d->data = tb->data;
        c = insertSort(c,d);
        tb = tb->next;
    }
    
    return c;
    /********** End **********/
}

// 函数intersection：求集合a和b的交集
// 参数：a-集合，b-集合
// 返回值：集合（集合a和b的交集）
intSet intersection(intSet a, intSet b)
{
    // 请在此添加代码，补全函数intersection
    /********** Begin *********/
    intSet c = new node;
    c = NULL;
    intSet ta = a;
    for (size_t i = 0; i < listLength(a); i++)
    {
        if (search(b,ta->data))
        {
            intSet d = new node;
            d->data = ta->data;
            c = insertSort(c,d);
        }
        ta = ta->next;
    }
    return c; 

    /********** End **********/
}

// 函数addElement：在集合is中增加元素num
// 参数：is-集合，num-要增加的元素
// 返回值：无
void addElement(intSet &is, int num)
{
    // 请在此添加代码，补全函数addElement
    /********** Begin *********/
    intSet src = new node;
    src->data=num;
    is = insertHead(is,src);
    /********** End **********/
}