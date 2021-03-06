#pragma once
#include <iostream>
#include "BanhCuon.h"
using namespace std;
class BC_mong : public BanhCuon
{
private:
    /* data */
public:
    BC_mong();
    BC_mong(float, float, float, float);
    void setKL_vo(float);
    void setKL_nhan(float);
    void setGia_vo(float);
    void setGia_nhan(float);
    float getKL_vo()const;
    float getKL_nhan()const;
    float getGia_vo()const;
    float getGia_nhan()const;
    virtual float getPrice()const;
    ~BC_mong();
};
BC_mong::BC_mong(){}
BC_mong::BC_mong(float kl_vo, float don_gia_vo, float kl_nhan, float don_gia_nhan)
{
    this->kl_vo=kl_vo;
    this->kl_nhan=kl_nhan;
    this->don_gia_vo=don_gia_vo;
    this->don_gia_nhan=don_gia_nhan;
}
void BC_mong::setKL_vo(float kl_vo)
{kl_vo=kl_vo;}
void BC_mong::setKL_nhan(float kl_nhan)
{kl_nhan=kl_nhan;}
void BC_mong::setGia_vo(float don_gia_vo)
{don_gia_vo=don_gia_vo;}
void BC_mong::setGia_nhan(float don_gia_nhan)
{don_gia_nhan=don_gia_nhan;}
float BC_mong::getKL_vo()const
{return kl_vo;}
float BC_mong::getKL_nhan()const
{return kl_nhan;}
float BC_mong::getGia_vo()const
{return (kl_vo/100.0)*don_gia_vo;}
float BC_mong::getGia_nhan()const
{return (kl_nhan/100.0)*don_gia_nhan;}
float BC_mong::getPrice()const
{return getGia_vo()+getGia_nhan();}
BC_mong::~BC_mong()
{}