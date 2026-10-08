#include <iostream>
#include "include/Market.hpp"

int main() {
    Market market;

    market.ticker = "TEST";
    market.eventTicker = "TEST-EVENT";
    market.title = "Test Market";

    market.yesBid = 0.45;
    market.yesAsk = 0.48;

    market.noBid = 0.51;
    market.noAsk = 0.54;

    market.volume = 1000;
    market.openInterest = 500;

    std::cout << "Market: " << market.ticker << '\n';
    std::cout << "YES Ask: $" << market.yesAsk << '\n';
    std::cout << "NO Ask: $" << market.noAsk << '\n';

    return 0;
}