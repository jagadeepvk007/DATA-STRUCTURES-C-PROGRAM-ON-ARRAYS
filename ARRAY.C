#include<stdio.h>
#include<conio.h>

 int* create(int size)
  {
   return((int*)malloc(sizeof(int)*size));
  }
  
  
 void display(int a[],int n)
  {
   int i;
   if(n==0)
    printf("no elements to display\n");
   else
    for(i=0;i<n;i++)
     printf("%d",a[i]);
  }


  void insert(int a[],int n,int pos,int ele)
   {
    int i;
    for(i=n-1;i>=pos-1;i--)
    a[i+1]=a[i];
    a[pos-1]=ele;
   }

   void delete(int a[],int pos,int n)
    {
     int i;
     if(n==0)
      printf("no elements to delete\n");
     else
      {
       printf("the element deleted is %d\n",a[pos-1]);
       for(i=pos-1;i<=n-1;i++)
	a[i]=a[i+1];
      }
    }



    void main()
     {
      int *a,i,n=0,size,ch,ele,pos;
      clrscr();
       printf(" 1.create \n  2.display\n  3.insert\n  4.delete\n  5.exit \n");
	while(1)
	 {
	  printf("\nenter your choice\n");
	  scanf("%d",&ch);
	  switch(ch)
	   {
	    case 1:printf("enter the size\n");
		   scanf("%d",&size);
		   a=create(size);
		   break;
	    case 2:printf("array elements are\n");
		   display(a,n);
		   break;
	    case 3:if(size==n)
		    {
		     printf("array is full\n");
		     break;
		    }
		   printf("enter the pos to insert element\n");
		   scanf("%d",&pos);
		   if(pos-1>n)
		    {
		     printf("enter valid position\n");
		     return;
		    }
		   printf("enter the element \n");
		   scanf("%d",&ele);
		   insert(a,n,pos,ele);
		   n++;
		   break;
	    case 4:printf("enter position\n");
		   scanf("%d",&pos);
		   if(pos>n)
		    {
		     printf("enter valid position\n");
		     return;
		    }
		   delete(a,pos,n);
		   n--;
		   break;
	    case 5:exit();

	     }
	    }
	  }




