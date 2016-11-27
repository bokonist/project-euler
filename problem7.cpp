//https://projecteuler.net/problem=7
#include "bits/stdc++.h"
using namespace std;
/* useful utility macros */
#define MIN(a,b,res) ((a)>(b))? (res)=(b):(res)=(a)
#define MAX(a,b,res) ((a)<(b))? (res)=(b):(res)=(a)
#define printArray(a,l,n) for(int(i)=(l);(i)<int(n);i++) { cout<<(a[i])<<' ';}
#define printWholeArray(a) for(int(i)=0;(i)<int((sizeof(a)/sizeof(a[0])));i++) { cout<<(a[i])<<' ';}
#define repeat(n) for(int (i)=0;(i)<(int)(n);++(i)) //repeat n times
#define repeatBounds(l,u) for(int (i)=(int)(l);(i)<(int)(u);++(i)) //repeat lower to upperbound
#define until(x,val) for(int(i) = int(x); int(x)!=int(val); (i<val)?x++:x--) //until x becomes val through increment or decrement

/*some constants*/
static const long double PI = 3.142857143;

/*some shorthands*/
typedef long long ll;
#define op cout<< // output to stdout
#define ip cin>> //input from stdin
#define err cerr<< //output to stderr
#define nl cout<<"\n"; //newline
void removeMultiples(bool* isPrime, int n , int limit)
{
	/*if(n==2)
		return;*/
	ll k=3,temp=n*2;
	while(temp<limit)
	{
	//	op "purging "<<temp<<' ';
		isPrime[temp]=false;
		temp = n*k;
		k++;
	}
}
int main()
{
	ll t,n,i;
	op "Enter number of queries : ";
	ip t;
	bool isPrime[2000001];
	memset(&isPrime,true,2000001);
	for (i = 2; i <= 2000000; ++i)
	{
		if (isPrime[i])
		{
			removeMultiples(isPrime,i,2000001);
		}
	}
	while(t--)
	{
		op "Enter the rank of the prime to print : ";
		ip n;
		ll count=1;
		for (i = 2; count <= n; ++i)
		{
			if(isPrime[i])
				count++;
		}
		op i-1; nl
	}
	return 0;
}