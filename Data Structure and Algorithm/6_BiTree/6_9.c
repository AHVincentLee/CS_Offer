void PreTreeDepth(BiTree bt, int h)
/* ǰ������������bt�߶ȵĵݹ��㷨��hΪbtָ�������ڲ�Σ���ֵΪ1*/
/*depthΪ��ǰ��õ�����Σ�Ϊȫ�ֱ���������ǰ��ֵΪ0 */
{
  if(bt!=NULL)
  {
     if(h>depth)   depth = h;     /*����ý����ֵ����depth������depth��ֵ*/
     PreTreeDepth(bt->Lchild, h+1);  /* ���������� */
     PreTreeDepth(bt->Rchild, h+1);  /* ���������� */
  }
}