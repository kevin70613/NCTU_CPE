#include <iostream>
#include <string>
#include <stack>
#include <algorithm>

using namespace std;

bool evaluate(stack<int> & s, char op){
	if(s.empty())
		return false;
	int top1 = s.top();
	s.pop();

	if(s.empty())
        return false;
	int top2 = s.top();
	s.pop();

	int result = 0;
	switch(op){
		case '+':
		     result = top1 + top2;
		     break;
        case '-':
             result = top1 - top2;
             break;
        case '*':
             result = top1 * top2;
             break;
        case '/':
             result = top1 / top2;
             break;
        case '%':
             result = top1 % top2;
             break;
	}
	s.push(result);
	return true;
}

int prefixEval(string exp){
	stack<int> s;
	int operand = 0;
	for(int i = exp.size()-1; i>=0; i--){
		switch(exp[i]){
			case '+':
			case '-':
			case '*':
			case '/':
			case '%':
			     if( !evaluate(s, exp[i]) ) return -1;
			     break;
			case ' ':
			     break;
			default:
                 int pow = 1;
			     while(exp[i] >= '0' && exp[i] <= '9'){
			     	operand = operand + (exp[i]-'0') * pow;
			     	pow *= 10;
			     	i--;
			     }
			     s.push(operand);
			     operand = 0;
			     break;
		}
	}
	return s.top();
}

int main()
{
    string input;
    while(1){
        getline(cin, input);
        if(input == ".") break;
        int answer = 0;
        answer = prefixEval(input);
        if(answer == -1)
            cout << "illegal" << endl;
        else
            cout << answer << endl;

    }
    return 0;
}