/*
3-1. 编程，任意输入10个整数，按从小到大的顺序输出。
*/
#include <stdio.h>
int b[1000];

//冒泡排序
/*
void bubbleSort(int a[],int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		int flag=1;
		for(j=1;j<n-i;++j)
	        if(a[j]<a[j-1])
	        {
	        	int temp;
	        	temp=a[j];
	        	a[j]=a[j-1];
	        	a[j-1]=temp;
	        	flag=0;
			}
		if(flag==1) break;
	}
	
 } */
 
//简单选择排序
void selectionSort(int a[],int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		int min=i;
		 for(j=i+1;j<n;j++)
	        if(a[j]<a[min])
	            min=j;
	    if(min!=i)
		{  	
			int temp;
	       	temp=a[min];a[min]=a[i];a[i]=temp;
		}
	}
	   
	
 } 
 
 //插排
 /*
void insertSort(int a[],int n)
{
	int i,j;
	for(i=1;i<n;i++)
	{
		int temp=a[i];
		for(j=i;j>0&&a[j-1]>temp;--j)
		    a[j]=a[j-1];
		a[j]=temp;
	}
	
 } 
 */
 //希尔排序
 /*
void shellSort(int a[],int n)
{
	int i,j,d;
	for(d=n/2;d>=1;d/=2) //缩小增量
	    for(i=d;i<n;i++)  //插排部分
		{
			int temp=a[i];
			for(j=i;j-d>=0&&a[j-d]>temp;j-=d)
			    a[j]=a[j-d];
			a[j]=temp;
		 } 
 } 
 */
//归并排序
//归并排序
/*
void Merge(int a[],int TemArray[],int lpos,int rpos,int rightEnd)//lpos=左半部分的开始，rpos=右半部分的开始。
{
    int i,leftEnd,Numelements,TmpPos;

    leftEnd=rpos-1;
    TmpPos=lpos;
    Numelements=rightEnd-lpos+1;

    while(lpos<=leftEnd&&rpos<=rightEnd)
        if(a[lpos]<=a[rpos])
            TemArray[TmpPos++]=a[lpos++];
    else
            TemArray[TmpPos++]=a[rpos++];

    while(lpos<=leftEnd)
        TemArray[TmpPos++]=a[lpos++];
    while(rpos<=rightEnd)
        TemArray[TmpPos++]=a[rpos++];

    for(i=0;i<Numelements;i++,rightEnd--)
        a[rightEnd]=TemArray[rightEnd];
}

void MSort(int a[],int TempArray[],int left,int right)
{
    int mid;
    if(left<right)
    {
        mid=(left+right)/2;
        MSort(a,TempArray,left,mid);
        MSort(a,TempArray,mid+1,right);
        Merge(a,TempArray,left,mid+1,right);
    }
}

void MergeSort(int a[],int n)
{
    int *TemArray;
    TemArray=malloc(n*sizeof(int));
    if(TemArray!=NULL)
    {
        MSort(a,TemArray,0,n-1);
        free(TemArray);
    }
    else
      printf("no");
}
*/
//快排
/*

void Sort(int a[],int low,int high)
{
	int temp;
	int i=low,j=high;
	if(low<high)
	{
		temp=a[low];
		while(i!=j)
		{
			while(j>i&&a[j]>temp)  j--;
			if(j>i)
			{
				a[i]=a[j];
				++i;
			}
			while(j>i&&a[i]<temp)   i++;
			if(j>i)
			{
				a[j]=a[i];
				j--;
			}
		}
		a[i]=temp;
		Sort(a,low,i-1);
		Sort(a,i+1,high);
	}
}
void QuickSort(int a[],int n)
{
	Sort(a,0,n-1);
 } 
 */

int main()
{
	int i;int a[100];
	for(i=0;i<10;i++)
	     scanf("%d",&a[i]);
	selectionSort(a,10);
	for(i=0;i<10;i++)
	    printf("%d ",a[i]);
}





 
 

