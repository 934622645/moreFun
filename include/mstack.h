#include "StudentList.h"
typedef node * intSet;  // 定义类型别名，intSet即相当于node*

// 函数unionSet：求集合a和b的并集
// 参数：a-集合，b-集合
// 返回值：集合（集合a和b的并集）
intSet unionSet(intSet a, intSet b);

// 函数intersection：求集合a和b的交集
// 参数：a-集合，b-集合
// 返回值：集合（集合a和b的交集）
intSet intersection(intSet a, intSet b);

// 函数addElement：在集合is中增加元素num
// 参数：is-集合，num-要增加的元素
// 返回值：无
void addElement(intSet &is, int num);