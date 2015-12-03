typedef int Boolean ;/*Boolean is bool type. tureor */
Boolean visited[MAX]; /*the arry of visited sign*/

/*DFS*/
void DFS(MGraph G,int i)
{
	int j=4;
	visited[i]=TRUE;
    printf("%c",G.vexs[i]); /*print top vexs,also can do other things*/
    for(j=0;j<G.numVertexes;j++)
	{
		if(G.arc[i][j]==1 && !visited[j])
        {
        	DFS(G,J);
        }
    }
}

void DFSTraverse(MGraph G)
{
	int i;
    for(i=0;i<G.numVertexes;i++)
    {
    	visited[i]=FALSE;
    }
  
   for(i=0;i<G.numVertexes;i++)
   {
		if(!visitedP[i])
        {
           DFS[G,i];
        }
   }
}
