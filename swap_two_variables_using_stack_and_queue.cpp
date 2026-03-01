#include <iostream>
#include<stack>
#include<queue>

using namespace std;

/*
So basically we are swapping two numbers using stack and queue.
Suppose we have 
a=10
b=20

first we will push this values in a stack.And then we will push their front value in a queue
I think we can do this by pushing the top value of stack in an array but for now leys try with queue ok.



*/

int main(){
	
	int a=10;
	int b=20;
	int i;
	stack<int>s;
	queue<int>q;
	
	s.push(a);
	s.push(b);
	
	for(i=0;i<2;i++){
		q.push(s.top());
		s.pop();
		
		
		
		}
	cout<<"a:"<<q.front()<<endl;
	q.pop();
	cout<<"b:"<<q.front();
	
	return 0;
	
	}
