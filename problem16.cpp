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
int ctoi(char ch)
{
	return ch-48;
}
void addcarry(string &base, int pos)
{
	if(pos>=base.length())
	{
		base+="1";
	}
	else if(base[pos]=='9')
	{
		base[pos]='0';
		addcarry(base,pos+1);
	}
	else
	{
		base[pos] = ((base[pos]-48)*2)+48;
		if(base[pos]=='9')
		{
			base[pos]='0';
			addcarry(base,pos+1);
		}
		else
			base[pos]++;
	}
	return;
}
string doubl(string base)
{
	for (int i = 0; i < base.length(); ++i)
	{
		if(ctoi(base[i])*2 > 9)
		{
			base[i] = ((ctoi(base[i])*2)%10)+48;
			addcarry(base,i+1);
			i++;
		}
		else
			base[i]= ((ctoi(base[i])*2))+48;
	}
	return base;
}
int main()
{
	int t,n;
	ip t;
	while(t--)
	{
		ip n;
		string ans = "1";
		int sum=0;
		repeat(n)
		{
			ans = doubl(ans);
			op ans; nl
			getchar();
		}
		for (int i = 0; i < ans.length(); ++i)
		{
			sum+= (ans[i]-48);
		}
		op sum;nl
	}
	return 0;
}