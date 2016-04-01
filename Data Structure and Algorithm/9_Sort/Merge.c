void Merge(RecordType r1[],  int low,   int mid,   int high,  RecordType  r2[])
/* ��֪r1[low..mid]��r1[mid+1..high]�ֱ𰴹ؼ����������У������Ǻϲ���һ���������У������r2[low..high] */
{ 
	int i,j,k;
	i=low;
	j=mid+1;
	k=low;
	while ( (i<=mid)&&(j<=high)  )
	{
		if ( r1[i].key<=r1[j].key )
		{
			r2[k]=r1[i];
			++i;
		}
		else 
		{
			r2[k]=r1[j];
			++j;
		}
		++k;
	}
	while( i<=mid )
	{
		r2[k]=r1[i];
		k++;
		i++;
	}
	while( j<=high)
	{
		r2[k]=r1[j];
		k++;
		j++;
	}
} /* Merge */ 