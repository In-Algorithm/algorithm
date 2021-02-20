#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    map<string, int> participants; 
    
    for (auto c : completion) { 
        ++participants[c]; 
    } 
    for (auto p : participant) { 
        --participants[p];
        if(participants[p] < 0)
            return p;
    } 

}
