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
	head=NULL; //ͷָ���ʼΪ��
	
	//�������� 
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
		q=p;//ָ��qҲָ��ǰ��� 
	} 
	
	//���� 
	scanf("%d",&a);
	t=head;
	while(t!=head)
	{
		if(t->next->data>a)
		{
			p=(struct node*)malloc(sizeof(struct node));//��̬����һ���ռ䣬���������� 
			p->data=a;
			p->next=t->next;	
			t->next=p;
			break; 
		}
		t=t->next;
	}
	
	//���
	t=head;
	while(t!=NULL)
	{
		printf("%d",t->data);
		t=t->next; //������һ����� 
	} 
	

	return 0;	
}
