//
// Created by LEI on 2/8/2018.
//

#ifndef MONOPOLYC_V2_PROPERTY_H
#define MONOPOLYC_V2_PROPERTY_H

#include <string>
#include <iostream>
#include "Player.h"
#include "CSVReader.h"

class Property{
 public:
    Property();
    Property(CSVReader& reader);
    std::string name;
 private:
    int set_id;
    int intra_set_id;


    int cost_to_purchase;
    int cost_to_buy_house;
    int cost_to_buy_hotel;

    int rent;
    int one_house_rent;
    int hotel_rent;

    //Player* playerptr;

};
#endif //MONOPOLYC_V2_PROPERTY_H
