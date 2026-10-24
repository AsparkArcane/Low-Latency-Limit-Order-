#include <iostream>
#include <map>
#include <unordered_map>
#include <list>
#include <cstdint>
#include <vector>
#include <chrono>
#include <iostream>

using namespace std;

enum class OrderType {BUY, SELL};


struct Order{
    OrderType orderType;
    map<int, int> price;
    unordered_map<int, list<int>> orders;
};

void matching(Order order){
    if (order.orderType == OrderType::BUY){
        if (order.price[0] <= order.orders[0]){
            //no trade
            break;
        }
        else{
            for(auto it: order.orders){
                //smallest value
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    return 0;
}