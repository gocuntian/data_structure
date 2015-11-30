
/*�ڽӾ���洢�ṹ*/
typedef char VertexType; /* ���������Ӧ���û�����*/
typedef int EdgeType;    /*���ϵ�Ȩֵ����Ӧ�����û�����*/ 
#define MAXVEX 100       /*��󶥵�����Ӧ���û�����*/
#define INFINITY 65535   /*��65535����������*/
typedef struct
{
	VertexType vexs[MAXVEX];/*�����*/
	EdgeType arc[MAXVEX][MAXVEX]; /*�ڽӾ��󣬿��Կ����߱�*/
	int numVertexes,numEdges;     /*ͼ�е�ǰ�Ķ������ͱ���*/ 
}MGraph;

/*����������ͼ���ڽӾ����ʾ*/
void CreateMGraph(MGraph *G) 
{
	int i,j,k,w;
	printf("���붥�����ͱ���");
	scanf("%d,%d",&G-numVertexes,&G->numEdegs); /*���붥�����ͱ���*/
	for(i=0;i<G->numVertexes;i++) /*���붥����Ϣ�����������*/
	{	
		scanf(&G->vex[i]);
	} 
	for(i=0;i<G->numVertexes;i++)
		for(j=0;j<G->numVertexes;j++)
		G->arc[i][j]=INFINITY;     /*�ڽӾ����ʼ��*/
		
	for(k=0;k<G->numEdges;k++)
	{
		printf("����ߣ�vi,vj���ϵ��±�i,�±�j��Ȩw:\n");
		scanf("%d,%d,%d",&i,&j,&w); /*�����(vi,vj)�ϵ�Ȩw*/
		G->arc[i][j]=w;
		G->arc[j][i]=G->arc[i][j] ;  /*��Ϊ������ͼ������Գ�*/
	}	
}

/*�ڽӱ�洢�ṹ*/ 
typedef char VertexType; /*��������Ӧ�����û�����*/
typedef int EdgeType;    /*���ϵ�Ȩֵ����Ӧ���û�����*/

typedef struct EdgeNode   /*�߱���*/
{
	int adjvex;   /*�ڽӵ��򣬴洢�ö����Ӧ���±�*/
	EdgeType weight;  /*���ڴ洢Ȩֵ�����ڷ���ͼ���Բ���Ҫ*/
	struct EdgeNode *next;   /*����ָ����һ���ڽӵ�*/
}EdgeNode;

typedef struct VertexNode  /*�������*/
{
	VertexType data;
	EdgeNode *firstedge;   /*�߱�ͷָ��*/ 
}VertexNode,AdjList[MAXVEX];

typedef struct
{
	Adjlist adjlist;
	int numVertexes,numEdges;  /*ͼ�е�ǰ�������ͱ���*/ 
}GraphAdjList;

/*��������ͼ���ڽӱ�ṹ*/
void CreateALGraph(GraphAdjList *G) 
{
	int i,j,l;
	EdgeNode *e;
	printf("���붥�����ͱ�����\n");
	for(i=0;i<G->numVertexes;i++)  /*���붥����Ϣ�����������*/
	{
		scanf(&G->adjList[i].data); /*���붥����Ϣ*/
	    G->adjList[i].firstedge=NULL; /*���߱���Ϊ�ձ�*/	
	} 
	for(k=0;k<G->numEdeges;k++)  /*�����߱�*/
	{
		printf("�����(vi,vj)�ϵĶ�����ţ�\n");
		scanf("%d��%d",&i,&j); /*�����(vi,vj)�ϵĶ������*/
		e=(EdegeNode *)malloc(sizeof(EdgeNode)); /*���ڴ�������ռ�*/
		                                         /*���ɱ߱���*/ 
		e->adjvex=j;       /*�ڽ����Ϊj*/
		e->next=G->adjList[i].firstedge;   /*��eָ��ָ��ǰ���ָ��Ľ��*/
		G->adjList[i].firstedge=e;         /*����ǰ�����ָ��ָ��e*/ 
	
		e=(EdegNode *)malloc(sizeof(EdgeNode)); /*���ڴ�����ռ�*/
		                                        /*���ɱ߱���*/
		e->adjvex=i; /*�ڽ����Ϊi*/ 
		e->next=G->adjList[j].firstedge;   /*��eָ��ָ��ǰ���ָ��Ľ��*/
		G->adjList[j].firstedge=e;         /*����ǰ�����ָ��ָ��e*/ 
	} 																																				
}
