/*二叉树的二叉链表结点定义*/ 
 typedef struct BiTNode
 {
 	TElemType data;
 	struct BitNode *lchild ,*rchild;  
 } BitNode,*BitTree
  
  /*前序遍历*/
  /****************
  规则是若二叉树为空，则空操作返回，否则先访问根节点，
  然后前序遍历左子树，再前序遍历右子树。 
  *******************/ 
  void PreOrderTraverse(BitTree T)
  {
  	if (T==NULL)
  	{
  		return ; 
  	}
  	printf("%C",T->data) ;/*显示结点数据*/
  	PreOrderTraverse(T->lchild); /*再遍历左子树*/
  	PreOrderTraverse(T->rchild); /*最后遍历右子树*/
  } 
  
  /*中序遍历*/
  /****************
 若树为空，则空操作返回，否则从根结点开始
（注意并不是先访问根节点），中序遍历根结点的左子树，
 然后是访问根结点，最后中序遍历右子树
 *******************/ 
  void InOrderTraverse(BitTree T)
  {
  	if (T==NULL)
  	{
  		return ; 
  	}
  	PreOrderTraverse(T->lchild); /*中序遍历左子树*/
  	printf("%C",T->data) ;/*显示结点数据*/
  	PreOrderTraverse(T->rchild); /*最后中序遍历右子树*/
  } 
  
  /*后序遍历*/ 
  /******************
  若树为空，则空操作返回，否则从左到右先叶子后
  结点的方式遍历访问左右子树，最后是访问根结点 
  **********************/ 
  
  void PostOrderTraverse(BitTree T)
  {
  	if (T==NULL)
  	{
  		return ; 
  	}
  	PreOrderTraverse(T->lchild); /*先后序遍历左子树*/
  	PreOrderTraverse(T->rchild); /*再后序遍历右子树*/
    printf("%C",T->data) ;/*显示结点数据*/
  	
