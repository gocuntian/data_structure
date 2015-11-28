/*�������Ķ��������㶨��*/ 
 typedef struct BiTNode
 {
 	TElemType data;
 	struct BitNode *lchild ,*rchild;  
 } BitNode,*BitTree
  
  /*ǰ�����*/
  /****************
  ��������������Ϊ�գ���ղ������أ������ȷ��ʸ��ڵ㣬
  Ȼ��ǰ���������������ǰ������������� 
  *******************/ 
  void PreOrderTraverse(BitTree T)
  {
  	if (T==NULL)
  	{
  		return ; 
  	}
  	printf("%C",T->data) ;/*��ʾ�������*/
  	PreOrderTraverse(T->lchild); /*�ٱ���������*/
  	PreOrderTraverse(T->rchild); /*������������*/
  } 
  
  /*�������*/
  /****************
 ����Ϊ�գ���ղ������أ�����Ӹ���㿪ʼ
��ע�Ⲣ�����ȷ��ʸ��ڵ㣩�����������������������
 Ȼ���Ƿ��ʸ���㣬����������������
 *******************/ 
  void InOrderTraverse(BitTree T)
  {
  	if (T==NULL)
  	{
  		return ; 
  	}
  	PreOrderTraverse(T->lchild); /*�������������*/
  	printf("%C",T->data) ;/*��ʾ�������*/
  	PreOrderTraverse(T->rchild); /*����������������*/
  } 
  
  /*�������*/ 
  /******************
  ����Ϊ�գ���ղ������أ������������Ҷ�Ӻ�
  ���ķ�ʽ����������������������Ƿ��ʸ���� 
  **********************/ 
  
  void PostOrderTraverse(BitTree T)
  {
  	if (T==NULL)
  	{
  		return ; 
  	}
  	PreOrderTraverse(T->lchild); /*�Ⱥ������������*/
  	PreOrderTraverse(T->rchild); /*�ٺ������������*/
    printf("%C",T->data) ;/*��ʾ�������*/
  	
