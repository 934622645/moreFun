#include <iostream>
using namespace std;

// 定义结点结构
struct node
{
    int data;  // 数据域
    node * next;  // 指针域,指向下一个结点
};

// 函数listLength：计算并返回链表的长度
// 参数：h-链表头指针
// 返回值：链表长度
int listLength(node * h);

// 函数delHas：删除链表中data为n的结点，如果有多个这样的结点，只删除第一个
// 参数：h-链表头指针，n-结点包含的数据
// 返回值：删除结束后链表首结点地址
node * delHas(node * h, int n);

// 函数delAt：删除链表中序号为i的结点，如果i是非法序号则不做操作
// 参数：h-链表头指针，i-要删除结点的序号
// 返回值：删除结束后链表首结点地址
node * delAt(node * h, int i);

// 函数search：在链表中查找包含数据num的结点
// 参数：h-链表头指针，num-要查找的数据
// 返回值：找到了返回该结点的地址，否则返回NULL
node * search(node * h, int num);

// 函数insertSort：链表排序插入
// 参数：h-链表头指针，t-指向要插入的结点
// 返回值：插入结点后链表的首结点地址
node * insertSort(node *h, node *t);

// 函数insertHead：链表头部插入
// 参数：h-链表头指针，t-指向要插入的结点
// 返回值：插入结点后链表的首结点地址
node * insertHead(node *h, node *t);

// 函数printList：输出链表，每个数据之间用一个空格隔开
// 参数：h-链表头指针
void printList(node *h);

// 函数insertTail：链表尾部插入
// 参数：h-链表头指针，t-指向要插入的结点
// 返回值：插入结点后链表的首结点地址
node *insertTail(node *h, node *t);

// 函数delList：删除链表，释放空间
// 参数：h-链表头指针
void delList(node *h);

//函数listSort：链表排序（为了输出结果唯一）
//参数：h-链表头指针
//返回值：排序后的链表
node * listSort(node *h);