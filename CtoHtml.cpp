#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
using namespace std;
typedef	long long ll;

string html_tags[]={
    "a","abbr","acronym","address","applet","area","article","b","base","basefont","bdi","bdo","bgsound","big","input",
    "blink","blockquote","body","br","button","canvas","caption","center","cite","code","col","colgroup","content",
    "data","datalist","dd","decorator","del","details","dfn","dir","div","dl","dt","element","em","embed","fieldset",
    "figcaption","figure","font","footer","form","frame","frameset","h1","h2","h3","h4","h5","h6","head","header","hgroup","hr"};


void printLine(vector<string>&arr){
    for(auto i:arr) cout<<i<<' ';
}

bool isTag(string s){
    for(auto i:html_tags){
        if(i==s)return true;
    }
    return false;
}

int main(){
    char filename[]="index.html";
	freopen(filename, "w", stdout);
	string s,s1;
    cout<<"<!DOCTYPE html><head><title>From C++</title></head><body>";
    vector<string>line;
    while (cin>>s){
        if(s=="stop") break;
        else{
            if(!isTag(s)) s="p";
            line.clear();
            while (cin>>s1){
                if(s1==".")break;
                line.push_back(s1);
            }
            cout<<"<"<<s<<">";
            printLine(line);
            cout<<"</"<<s<<">";
        }
    }
    cout<<"</body></html>";
}
