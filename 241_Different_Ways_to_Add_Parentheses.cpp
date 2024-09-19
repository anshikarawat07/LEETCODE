class Solution {
public:
int calculate(int left, int right, char op) {
    if (op == '+') return left + right;
    else if (op == '-') return left - right;
    else if (op == '*') return left * right;
    else if (op == '/') return left / right;
    else return left % right;
    return 0; 
}
   vector<int> diffWaysToCompute(const string& expression) {
    vector<int> results;
    for (int i = 0; i < expression.length(); ++i) {
        if (expression[i] == '+' || expression[i] == '-' || expression[i] == '*' ||expression[i] == '/' ||expression[i] == '%') {
            string leftExpr = expression.substr(0, i);
            string rightExpr = expression.substr(i + 1);
            vector<int> leftResults = diffWaysToCompute(leftExpr);
            vector<int> rightResults = diffWaysToCompute(rightExpr);
            for (int l : leftResults) {
                for (int r : rightResults) {
                    results.push_back(calculate(l, r, expression[i]));
                }
            }
        }
    }
    if (results.empty()) {
        istringstream iss(expression);
        int value;
        iss >> value;
        results.push_back(value);
    }
    return results;
}
};
