#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

bool solution(vector<string> phone_book) {
    unordered_set<string> hashSet(phone_book.begin(), phone_book.end());
/*
    for (auto it1 = tmp.begin(); it1 != tmp.end(); ++it1){
        size_t len_it1 = it1->size();
        for(auto it2 = tmp.begin() ; it2 != tmp.end(); ++it2){
            if(it1 == it2) continue;
            
            size_t subStringLen = min(len_it1, it2->size());
            
            if(it1->substr(0,subStringLen) == it2->substr(0,subStringLen)) return false;
            
        }
    }
    */
    for(auto phone : phone_book){
        string tmp = "";
        for(auto ch : phone){
            tmp += ch;
            if(hashSet.find(tmp) != hashSet.end() && tmp != phone) return false;
        }
    }
            
    return true;
}