#pragma once
#include <iostream>
#include "BanhCuon.h"
using namespace std;
class BC_thit_lon : public BanhCuon
{
private:
    /* data */
public:
    BC_thit_lon(/* args */);
    BC_thit_lon(float, float, float, float);
    void setKL_vo(float);
    void setKL_nhan(float);
    void setGia_vo(float);
    void setGia_nhan(float);
    float getKL_vo()const;
    float getKL_nhan()const;
    float getGia_vo()const;
    float getGia_nhan()const;
    virtual float getPrice()const;
    ~BC_thit_lon();
};

BC_thit_lon::BC_thit_lon(/* args */){}
BC_thit_lon::BC_thit_lon(float kl_vo, float don_gia_vo, float kl_nhan, float don_gia_nhan)
{
    this->kl_vo=kl_vo;
    this->kl_nhan=kl_nhan;
    this->don_gia_nhan=don_gia_nhan;
    this->don_gia_vo=don_gia_vo;
}
void BC_thit_lon::setKL_vo(float kl_vo)
{kl_vo=kl_vo;}
void BC_thit_lon::setKL_nhan(float kl_nhan)
{kl_nhan=kl_nhan;}
void BC_thit_lon::setGia_vo(float don_gia_vo)
{don_gia_vo=don_gia_vo;}
void BC_thit_lon::setGia_nhan(float don_gia_nhan)
{don_gia_nhan=don_gia_nhan;}
float BC_thit_lon::getKL_vo()const
{return kl_vo;}
float BC_thit_lon::getKL_nhan()const
{return kl_nhan;}
float BC_thit_lon::getGia_vo()const
{return (kl_vo/100.0)*don_gia_vo;} 
float BC_thit_lon::getGia_nhan()const
{return (kl_nhan/100.0)*don_gia_nhan;}
float BC_thit_lon::getPrice()const
{return getGia_vo()+getGia_nhan();}
BC_thit_lon::~BC_thit_lon()
{}