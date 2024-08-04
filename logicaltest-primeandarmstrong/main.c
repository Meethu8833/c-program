#include<stdio.h>
#include<math.h>

int Armstrong(int,int);
int prime(int);
int main()
{
	int n,count=0,num,a,p;
	printf("Enter a number: ");
	scanf("%d",&n);
	num=n;

	while(num!=0)
	{
		count++;
		num=num/10;
	}

	a=Armstrong(n,count);
	p=prime(n);
	if(a==0&&p==0)
	{
		printf("%d is both Armstrong and prime number",n);
	}
	else if(a==0)
	{
	    printf("%d is an armstrong number",n);
	}
	else if(p==0)
	{
	    printf("%d is a prime number",n);
	}
	else
	{
		printf("%d is not prime and Armstrong",n);
	}
	return 0;

}
int Armstrong(int n,int count)
{
	int num,rem,sum=0;
	num=n;

	while(num!=0)
	{
		rem=num%10;
		sum=sum+pow(rem,count);
		num=num/10;
	}
	if(n==sum)
	{
		return 0;
	}
	else{
		return 1;
	}
}

int prime(int n)
{
	int val=0,i;

	if(n==0||n==1)
	{
		val=1;
	}
	else
	{
		for(i=2;i<=n/2;i++)
		{
			if(n%i==0)
			{
				val=1;
				break;
			}
		}

		if(val==0)
		{
			return 0;
		}
		else
		{
			return 1;
		}
		
	}	
}
