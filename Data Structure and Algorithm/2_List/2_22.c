void  polyadd(Polylist polya, Polylist polyb)
/*�˺������ڽ���������ʽ��ӣ�Ȼ�󽫺Ͷ���ʽ����ڶ���ʽpolya�У���������ʽploybɾ��*/
{
	Polynode  *p, *q, *pre, *temp;
	int sum;
	p=polya->next;   /*�� p��q�ֱ�ָ��polya��polyb����ʽ�����еĵ�һ�����*/
	q=polyb->next;        
	pre=polya;  /* rָ��Ͷ���ʽ��β���*/
	while (p!=NULL && q!=NULL) /*����������ʽ��δɨ�����ʱ*/
	{ 
		if  (p->exp < q->exp)
			/*���pָ��Ķ���ʽ���ָ��С��q��ָ������p�����뵽�Ͷ���ʽ��*/
		{ 
			pre->next=p;  
			pre=p; 
			p=p->next;
		}
		else
			if ( p->exp == q->exp)  /*��ָ����ȣ�����Ӧ��ϵ�����*/
			{  
				sum=p->coef + q->coef;
				if (sum != 0)
				{ 
					p->coef=sum;
					pre->next=p; 
					pre=p;
					p=p->next;
					temp=q; 
					q=q->next; 
					free(temp);
				}
				else
				{  
					temp=p;
					p=p->next;
					free(temp); 
		/*��ϵ����Ϊ�㣬��ɾ�����p��q������ָ��ָ����һ�����*/
					temp=q; 
					q=q->next;
					free(temp);
				}
			}
			else
			{  
				pre->next=q;
				pre=q; /*��q�����뵽�Ͷ���ʽ��*/
				q = q->next; 
			}
	}
	if(p!=NULL)  /*����ʽA�л���ʣ�࣬��ʣ��Ľ����뵽�Ͷ���ʽ��*/
		pre->next=p;
	else      /*���򣬽�B�еĽ����뵽�Ͷ���ʽ��*/
		pre->next=q;
}