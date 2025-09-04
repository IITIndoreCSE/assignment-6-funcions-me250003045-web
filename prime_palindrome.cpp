#include <iostream>
using namespace std;

bool isPrime(int n) {
	int c=0;
	for (int i=1;i<=n;i++)
	{
		if (n%i==0)
			c++;
	}
	if (c==2)
		return true;
	return false;
    // TODO: complete the function as per instructions

}

bool isPalindrome(int n) {
	int nn=0;
	int copy=n;
	while (n>0)
	{
		int a=n%10;
		nn=nn*10 + a;
		n/=10;
	}
	if (copy==nn)
		return true;
		
	return false;
    // TODO: complete the function as per instructions

}

bool primePalindrome(int n) {
	if (isPrime(n) == 1 && isPalindrome(n) == 1)
		return true;
	return false;
    // TODO: complete the function as per instructions
    
}

int main() {
    int n; cin >> n;
    cout << (primePalindrome(n) ? 1 : 0) << "\n";
    return 0;
}
