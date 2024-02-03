#include<iostream>
#include<vector>
using namespace std;

vector<pair<int,string>> map = {
    {1000000000,"Billion"}, {1000000,"Million"}, {1000,"Thousand"}, {100,"Hundred"},
    {90,"Ninety"}, {80,"Eighty"}, {70,"Seventy"}, {60,"Sixty"}, {50,"Fifty"},
    {40,"Forty"}, {30,"Thirty"}, {20,"Twenty"}, {19,"Nineteen"}, {18,"Eighteen"},
    {17,"Seventeen"}, {16,"Sixteen"}, {15,"Fifteen"}, {14,"Fourteen"}, {13,"Thirteen"},
    {12,"Twelve"}, {11,"Eleven"}, {10,"Ten"}, {9,"Nine"}, {8,"Eight"}, {7,"Seven"},
    {6,"Six"}, {5,"Five"}, {4,"Four"}, {3,"Three"}, {2,"Two"}, {1,"One"}
};

string intENG(int num) {
    if (num == 0) {
        return "Zero";
    }
    
    string result = "";
    for (auto i : map) {
        if (num >= i.first) {
            string a = "";
            if (num >= 100) {
                a = intENG(num / i.first) + " ";
            }
            string b = i.second + " ";

            string c = "";
            if (num % i.first != 0) {
                c =" "+ intENG(num % i.first);
                
            }

            result = a + b + c;
            break;
        }
    }

    return result;
}

int main() {
    int num = 178;
    string ans = intENG(num);
    cout << "ans is " << ans << endl;
    return 0;
}

