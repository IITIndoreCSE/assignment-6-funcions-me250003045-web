#include <iostream>
#include <vector>
using namespace std;

int sumArray(const vector<int>& arr) {
	int sum=0;
	int size= arr.size();
	for (int i=0; i<size ;i++)
	{
		sum+= arr[i];
	}
	return sum;
    // TODO: complete the function as per instructions
    
}

int main() {
    int n; cin >> n;
    vector<int> arr(n);
    for (int i=0; i<n; i++)
        cin >> arr[i];

    cout << sumArray(arr) << "\n";
    return 0;
}
