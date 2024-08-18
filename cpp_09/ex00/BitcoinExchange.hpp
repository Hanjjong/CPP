#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP
#include <fstream>
#include <sstream>
#include <iostream>

#include <map>
class BitcoinExchange
{
private:
    /* data */
    std::map<std::string, float> bitcoinData;
    std::map<std::string, float> inputData;
    void loadDataBase(std::string fname);
    void is_valid_date(std::string date);
    float is_valid_value(std::string rate);
    float getExchangeRate(std::string date);
    std::string findClosestDate(std::string date);
public:
    BitcoinExchange(std::string fname);
    ~BitcoinExchange();
    void processInput(std::string fname);
};

static std::string trim(const std::string& str);
static bool isLeapYear(int year);

#endif