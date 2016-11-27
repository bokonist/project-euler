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
void removeMultiples(set<int> &s, int n , int limit)
{
	if(n==2)
		return;
	int k=3,temp=n*2;
	while(temp<limit)
	{
		s.erase(temp);
		temp = n*k;
		k++;
	}
}
int main()
{
	set<int> s;
	s.insert(2);
	int n = 2000000; 
	for (int i = 3; i < n; i=i+2)
		s.insert(i);
	ll sum=0;
	for(auto a : s)
	{
		sum+=a;
		removeMultiples(s,a,n);
	}
	op sum;
	return 0;
}