#include<iostream>
#include<stack>
#include<queue>
using namespace std;

int main(){
    queue<int> q;
    int n, k, x;

    cout << "Enter number of elements of queue: ";
    cin >> n;

    for(int i=0;i<n;i++){
        cout << "Enter element " << i+1 << ": ";
        cin >> x;
        q.push(x);
    }

    cout << "Enter the value of k: ";
    cin >> k;

    if(k > n || k <= 0){
        cout << "Invalid k";
        return 0;
    }

    stack<int> s;

    
    for(int i=0;i<k;i++){
        s.push(q.front());
        q.pop();
    }

    
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }

    // Step 3: move remaining elements to back to maintain order
    for(int i=0;i<n-k;i++){
        q.push(q.front());
        q.pop();
    }

    cout << "\nQueue after reversing first k elements:\n";
    while(!q.empty()){
        cout << q.front() << "\n";
        q.pop();
    }

    return 0;
}