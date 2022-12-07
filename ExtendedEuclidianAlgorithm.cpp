//Assignment: Extended Euclidian Algorithm to find Multiplicative inverse ofn a number  
// i.e A* A^-1 =1 mod n
#include <iostream>
using namespace std;
int main()
{
	long long A,B, Q,R,t1=0,t2=1,t,n,modu;
	cout << "Enter a number whose multiplicative inverse is to be found" << endl;
	cin >> n;
	cout << "Enter modulo number"<< endl;
	cin >> modu;
	B=n;
	A=modu;
	if(B==0)
	{
		cout << "Multiplicative inverse of " << n << " mod " << modu << " is " << A;
	}
else{	
    while(B>0)
    {
   	 Q=A/B;
   	 R=A%B;
   	 t= t1- t2*Q;
   	 A=B;
   	 B=R;
   	 t1=t2;
   	 t2=t;
   }
   if(t1 < 0)
      t1+=modu;
	 cout << "Multiplicative inverse of " << n << " mod " << modu << " is " << t1;
}
	 return 0; 
}
