#include <iostream>
#include <vector>
using namespace std;

int main(){

    //normal pair
    pair<int,float> p1 = {1,1.5};

    cout<<p1.first<<" --> first "<<p1.second<<" --> second \n";

    //nested pair
    pair<int,pair<int,int>> p2 = {1,{2,5}};

    cout<<p2.second.second<< "--> this the second of second element \n";

    //array of pair
    pair<int,int> num[] = {{1,5},{5,6},{8,9}};

    cout<<num[1].second<<"\n";

    vector<int> v1;

    v1.push_back(1);
    v1.emplace_back(3);

    vector<pair<int,float>> v2;

    v2.push_back({1,2.5});
    v2.emplace_back(5,4.3);

    vector<int> v3(3,50);//{50,50,50}
    vector<int> v4(v3); //{50,50,50}

    v4.push_back(8);

    cout<<v4[0] << v4[1] << v4[2] << v4[3] << "\n";

    vector<int>::iterator pos = v4.begin();

    pos++;
    cout<<*(pos)<<" ";

    return 0;
}