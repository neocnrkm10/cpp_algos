#include<iostream>
#include<stack>
using namespace std;

int main(){
    
    stack<char> s;
    stack<char> r;
    
    char ch;
    
    cout << "Welcome to NotesWcnr" << endl;
    cout << "Settings:" << endl;
    cout << "$ - Save" << endl;
    cout << "# - Undo" << endl;  
    cout << endl;
    cout << "Enter notes here:" << endl;
    
    for(int i = 0; i < 100; i++){
        cin.get(ch);

        if(ch == '$'){
            cout << "\nSaving feature coming soon...\n";
            break;
        }

        else if(ch == '#'){
            if(!s.empty()){
                r.push(s.top()); 
                s.pop();
                cout << "Undo done\n";
            }
        }

        else{
            s.push(ch); 
        }
    }

    cout << "\nFinal Notes: ";
    stack<char> temp = s;

    stack<char> rev;
    while(!temp.empty()){
        rev.push(temp.top());
        temp.pop();
    }

    while(!rev.empty()){
        cout << rev.top();
        rev.pop();
    }

    return 0;
}