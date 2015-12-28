
/*bubble_sort */

#include<stdio.h>
#define MAXSIZE 10
typedef struct
{
	int r[4+1];
	int length;	
}Sqlist;

/*exchange*/
void swap(Sqlist *L,int i,int j)
{
	int temp=L->r[i];
	L->r[i]=L->r[j];
	L->r[j]=temp;
}

void bubble_sort1(Sqlist *L)
{
	int i,j;
	for(i=1;i<=L->length;i++)
		for(j=i;j<=L->length;j++)
		{
			if(L->r[i]>L->r[j])
			{
			     swap(L,i,j);
			}
                }

}
/*
void bubble_sort2(Sqlist *L)
{
	int i,j;
	for(i=1;i<=L->length;i++)
	{
	      for(j=i;j<=L->length;j++)
	      {
		  if(L->r[j]>L->r[j+1])
			swap(L,i,J);
              }
        }
}
*/

/*
void BubbleSort3(Sqlist *L)
{
	int i,j;
	Status flag=TURE;
        for(i=1;i<L-<length && flag;i++)
	{
	    for(j=L->lengh-1;j>=i;j--)
            {
        	if(L->r[j]>L->[j+1])
                {
                   swap(L,j,j+1);
	           flag=TURE;
                }
            }
        }
}
*/
int main()
{
	Sqlist *L;
	L->length=5;
        L->r[0]=0;L->r[1]=9;;L->r[2]=2;L->r[3]=1;
	bubble_sort1(L);
        int i;	
        for( i=1;i<=4;i++)
	{
	     printf("%d",L->r[i]);
        }        
	return 0;
}


























