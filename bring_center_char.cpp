#include <string>
#include <vector>
using namespace std;
 
string solution(string s) {
    string answer = "";
    static const size_t TWO = 2;
    const size_t length = s.length();
    
    if(length % TWO == 0)
    {
        //짝수
        answer += s[length / 2 - 1];
        answer += s[length / 2];
    }
    else
    {
        //홀수
        answer += s[length / 2];
    }
    return answer;
}
