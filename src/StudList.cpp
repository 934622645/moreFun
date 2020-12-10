#include "../include/StudentList.h"

void delList(node *h)
{
	node *p = h; //指针p指向头结点，第一个要删除的结点
	while (p)	 //这个结点是存在的
	{
		h = h->next; //头指针h指向下一个结点（下一个结点的地址存在当前结点的指针域中，即h->next中
		delete p;	 //删除p指向的结点
		p = h;		 //p指向当前的头结点，即下一个要删除的结点
	}
}

void printList(node *h)
{
	cout << "List:";
	while (h)
	{							//h为真，即h指向的结点存在，则输出该结点的数据
		cout << " " << h->data; //输出结点数据
		h = h->next;			//将该结点的指针域赋值给h，h就指向了下一个结点
	}
	cout << endl; //输出换行符
}

int listLength(node *h)
{
	int leng = 0;
	node *s=h;
	if (s==NULL)
	{
		/* code */
		return leng;
	}
	while (s)
	{
		leng++;
		s=s->next;
	}
	return leng;
}

node *delHas(node *h, int n)
{
	node *s = h;
	if (s == NULL)
	{
		return s;
	}
	if (s->data == n)
	{
		return s->next;
	}
	while (s->next)
	{
		if (s->next->data == n)
		{
			s->next = s->next->next;
			break;
		}
		s = s->next;
	}
	return h;
}

node *delAt(node *h, int i)
{
	node *s = h;
	if (s == NULL)
	{
		return s;
	}
	if (i == 0)
	{
		return s->next;
	}
	if (s == NULL || s->next == NULL)
	{
		return h;
	}	
	for (size_t n = 0; n < i -1 ; n++)
	{
		s = s->next;
		if (s == NULL || s->next == NULL)
		{
			return h;
		}
	}
	s->next = s->next->next;
	return h;
}

node *search(node *h, int num)
{
	node *s = h;
	if (s == NULL)
	{
		return s;
	}
	while (s)
	{
		if (s->data == num)
		{
			break;
		}

		s = s->next;
	}
	return s;
}

node *insertTail(node *h, node *t)
{
	if (h == NULL) //空链表单独处理
	{
		t->next = NULL; //链表尾指针置为NULL
		return t;		//返回第一个结点的地址（即链表头指针）
	}
	//非空链表的情况
	node *p = h;
	//让p指向最后一个结点
	while (p->next)
		p = p->next;
	p->next = t;	//让最后一个结点的指针域指向结点t
	t->next = NULL; //链表尾指针置为NULL
	return h;		//返回第一个结点的地址（即链表头指针）
}

node *insertHead(node *h, node *t)
{
	t->next = h;
	return t;
}

node *insertSort(node *h, node *t)
{
	node *p = NULL, *q = h;		   //定位第一个插入点：链首
	while (q && q->data < t->data) //查找插入点
	{							   //两个指针并行后移
		p = q;
		q = q->next;
	}
	if (p == NULL) //插入链首
	{
		t->next = h;
		return t;
	}
	if (q == NULL) //插入链尾
	{
		p->next = t;
		t->next = NULL;
		return h;
	}
	//插入p、q之间
	t->next = q;
	p->next = t;
	return h;
}

node * listSort(node *h)
{
	node *p=NULL, *t=h;
	while(t)
	{
		h=h->next;
		t->next=NULL;
		p=insertSort(p,t);
		t=h;
	}
	return p;
}