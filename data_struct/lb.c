#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next; 
};

int main() 
{
	struct node *head,*p,*q,*t;
	int i,n,a;
	scanf("%d",&n);
	head=NULL; //头指针初始为空
	
	//创建链表 
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a);
		p=(struct node *)malloc(sizeof(struct node));
		p->data=a;
		p->next=NULL;
		if(head==NULL)
		{
			head=p; 
		}
		else{
			q->next=p;
		}
		q=p;//指针q也指向当前结点 
	} 
	
	//插入 
	scanf("%d",&a);
	t=head;
	while(t!=head)
	{
		if(t->next->data>a)
		{
			p=(struct node*)malloc(sizeof(struct node));//动态申请一个空间，存放新增结点 
			p->data=a;
			p->next=t->next;	
			t->next=p;
			break; 
		}
		t=t->next;
	}
	
	//输出
	t=head;
	while(t!=NULL)
	{
		printf("%d",t->data);
		t=t->next; //继续下一个结点 
	} 
	

	return 0;	
}
