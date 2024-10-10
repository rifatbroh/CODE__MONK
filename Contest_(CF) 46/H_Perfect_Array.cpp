#include <bits/stdc++.h>
using namespace std;

#define BISMILLAH                 \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main() {
    BISMILLAH

    int N;
    cin >> N; // Input the length of the array
    vector<int> Arr(N);
    
    // Input the elements of the array
    for (int i = 0; i < N; i++) {
        cin >> Arr[i];
    }

    vector<int> Ans; // Initialize an empty array for the answer

    for (int i = 0; i < N; i++) {
        int index = -1; // Initialize index for tracking the right-most element
        
        // Find the right-most element such that Arr[j] == j + 1
        for (int j = N - 1; j >= i; j--) {
            if (Arr[j] == j + 1) {
                index = j; // Store the index
                break; // Exit the inner loop
            }
        }

        // Check if we found a valid index
        if (index == -1) {
            cout << "NO" << endl; // Output NO if no such element exists
            return 0; // Exit the program
        }

        // Remove the element from Arr and insert it into Ans
        Ans.push_back(Arr[index]); // Insert the found element into Ans
        Arr.erase(Arr.begin() + index); // Remove the element from Arr
        N--; // Decrease the length of Arr by 1
        i--; // Decrement i to recheck the current position
    }

    cout << "YES" << endl; // Output YES since we successfully found elements
    
    // Output the elements of Ans in reverse order
    for (int j = Ans.size() - 1; j >= 0; j--) {
        cout << Ans[j] << " ";
    }
    cout << endl;

    return 0;
}
