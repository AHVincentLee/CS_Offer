void CrtHuffmanCode(HuffmanTree *ht, HuffmanCode *hc, int n)
/*��Ҷ�ӽ�㵽����������ÿ��Ҷ�ӽ���Ӧ�Ĺ���������*/
{
	char *cd;
	int i;
	unsigned int c;
	int start;
	int p;
	hc=(HuffmanCode *)malloc((n+1)*sizeof(char *));  /*����n�������ͷָ��*/
	cd=(char * )malloc(n * sizeof(char ));  /*������ǰ����Ĺ����ռ�*/
	cd[n-1]='\0';   /*����������λ��ű��룬���ȴ�ű��������*/
	for(i=1;i<=n;i++)  /*��n��Ҷ�ӽ���Ӧ�Ĺ���������*/
	{
		start=n-1;    /*��ʼ��������ʼָ��*/
		for(c=i,p=(*ht)[i].parent; p!=0; c=p,p=(*ht)[p].parent) /*��Ҷ�ӵ�����������*/
			if( (*ht)[p].LChild == c) 
				cd[--start]='0';  /*���֧��0*/
			else 
				cd[--start]='1';  /*�ҷ�֧��1*/
	hc[i]=(char *)malloc((n-start)*sizeof(char));  /*Ϊ��i���������ռ�*/
	strcpy(hc[i],&cd[start]);
	}
	free(cd);
	for(i=1;i<=n;i++)
		printf("%d����Ϊ%s\n",(*ht)[i].weight,hc[i]);
}