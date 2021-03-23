#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int main()
{   
    vector<string> array1={"a","b","c"};
    vector<string> array2={"x","y","z","c"};
    unordered_map<string,int> map;  
    for(int i=0;i<array1.size();i++){
        map[array1[i]]=1;
    }
    
    for(auto x:array2){
        if(!(map.find(x)==map.end())){
            cout<<"true"<<x;
        }
    }
    return 0;
}