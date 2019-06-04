#pragma once
#include <iostream>
#include "BC_thit_lon.h"
using namespace std;
class BC_db : public BC_thit_lon
{
private:
    float kl_cc;
    float don_gia_cc;
public:
    BC_db(/* args */);
    BC_db(float, float, float, float, float, float);
    void setKL_vo(float);
    void setKL_nhan(float);
    void setGia_vo(float);
    void setGia_nhan(float);
    void setKL_cc(float);
    void setGia_cc(float);
    float getKL_vo()const;
    float getKL_nhan()const;
    float getGia_vo()const;
    float getGia_nhan()const;
    float getKL_cc()const;
    float getGia_cc()const;
    virtual float getPrice()const;
    ~BC_db();
};

BC_db::BC_db(/* args */)
{}
BC_db::BC_db(float kl_vo, float don_gia_vo, float kl_nhan, float don_gia_nhan, float kl_cc, float don_gia_cc)
{
    this->kl_vo=kl_vo;
    this->don_gia_vo=don_gia_vo;
    this->kl_nhan=kl_nhan;
    this->don_gia_nhan=don_gia_nhan;
    this->kl_cc=kl_cc;
}
void BC_db::setKL_vo(float kl_vo)
{kl_vo=kl_vo;}
void BC_db::setKL_nhan(float kl_nhan)
{kl_nhan=kl_nhan;}
void BC_db::setGia_vo(float don_gia_vo)
{don_gia_vo=don_gia_vo;}
void BC_db::setGia_nhan(float don_gia_nhan)
{don_gia_nhan=don_gia_nhan;}
void BC_db::setKL_cc(float kl_cc)
{kl_cc=kl_cc;}
void BC_db::setGia_cc(float don_gia_cc)
{don_gia_cc=don_gia_cc;}
float BC_db::getKL_vo()const
{return kl_vo;}
float BC_db::getKL_nhan()const
{return kl_nhan;}
float BC_db::getGia_vo()const
{return (kl_vo/100.0)*don_gia_vo;}
float BC_db::getGia_nhan()const
{return (kl_nhan/100.0)*don_gia_nhan;}
float BC_db::getKL_cc()const
{return kl_cc;}
float BC_db::getGia_cc()const
{return (kl_cc/100.0)*don_gia_cc;}
float BC_db::getPrice()const
{return getGia_vo()+getGia_nhan()+getGia_cc();}
BC_db::~BC_db()
{}