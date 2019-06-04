
#pragma once
#include <iostream>
using namespace std;
class BanhCuon
{
protected:
    float kl_vo;
    float kl_nhan;
    float don_gia_vo;
    float don_gia_nhan;
public:
    BanhCuon();
    virtual float getPrice(){};
    ~BanhCuon();
};
BanhCuon::BanhCuon()
{}
BanhCuon::~BanhCuon()
{}