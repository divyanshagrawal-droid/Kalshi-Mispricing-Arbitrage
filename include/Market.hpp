#ifndef MARKET_HPP
#define MARKET_HPP

#include <string>

struct Market {
    std::string ticker;
    std::string eventTicker;
    std::string title;

    double yesBid;
    double yesAsk;

    double noBid;
    double noAsk;

    double volume;
    double openInterest;
};

#endif