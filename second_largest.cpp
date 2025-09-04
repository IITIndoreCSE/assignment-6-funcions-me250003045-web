#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int secondLargest(const vector<int>& arr) {
	int size=arr.size();
	if (size <2)
		return -1;
		int largest=INT_MIN;
		int second=INT_MIN;
	for (int val : arr)
	{
		if (val > largest){
			second =largest;
			largest =val;
		}
		else if (val >second && val != largest)
			second = val;
			
	}
	if (second == INT_MIN)
		return -1;
	return second;
    // TODO: complete the function as per instructions

}

int main() {
    int n; cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) cin >> arr[i];

    cout << secondLargest(arr) << "\n";
    return 0;
}
