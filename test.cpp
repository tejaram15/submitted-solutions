#include<iostream>
using namespace std;


#define pc(x) putchar(x);

    inline void writeInt (int n)
    {
        int N = n, rev, count = 0;
        rev = N;
        if (N == 0) { pc('0'); pc('\n'); return ;}
        while ((rev % 10) == 0) { count++; rev /= 10;} //obtain the count of the number of 0s
        rev = 0;
        while (N != 0) { rev = (rev<<3) + (rev<<1) + N % 10; N /= 10;}  //store reverse of N in rev
        while (rev != 0) { pc(rev % 10 + '0'); rev /= 10;}
        while (count--) pc('0');
    }
    
//perfect o/p for signed integers
inline void writeInt_all (int n)
{
    int N = n, rev, count = 0;
    rev = N;
    if (N == 0) { pc('0'); pc('\n'); return ;}
    while ((rev % 10) == 0) { count++; rev /= 10;}
    rev = 0;
    while (N != 0) { rev = (rev<<3) + (rev<<1) + N % 10; N /= 10;}  
    if(rev<0) 
    {
    	rev*=-1;
    	pc('-');
	}
	while (rev > 0) { pc(rev % 10 + '0'); rev /= 10;}
    while (count--) pc('0');
}


inline void fastRead(int *a)
{
 register char c=0;
 while (c<33) c=getchar_unlocked();
 *a=0;
 while (c>33)
 {
     *a=*a*10+c-'0';
     c=getchar_unlocked();
 }
}

inline void fastRead(int *a)
{
register char c=0;
while (c<33) c=getchar();
*a=0;
while (c>33)
{
    *a=*a*10+c-'0';
    c=getchar();
}
}

int main()
{
	cout<<(10>>3);
	return 0;
}
