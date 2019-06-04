#pragma once
#include <bits/stdc++.h>
#include "BanhCuon.h"
#include "BC_mong.h"
#include "BC_chay.h"
#include "BC_thit_lon.h"
#include "BC_db.h"
using namespace std;
class Don_hang : public BanhCuon
{
protected:
    BC_chay chay;
    BC_mong mong;
    BC_thit_lon thit_lon;
    BC_db db;
public:
    Don_hang();
    Don_hang(BC_chay, BC_mong, BC_thit_lon, BC_db);
    void Print()const;
    ~Don_hang();
};
Don_hang::Don_hang(/* args */)
{}
Don_hang::Don_hang(BC_chay chay, BC_mong mong, BC_thit_lon thit_lon, BC_db db)
{
    this->chay = chay;
    this->mong = mong;
    this->thit_lon = thit_lon;
    this->db = db;
}
void Don_hang::Print()const
{
    cout<<setw(20)<<left<<"Ten Loai Banh"<<setw(20)<<left<<"Khoi luong vo"<<setw(20)<<left<<"Khoi luong nhan"<<setw(20)<<left<<"Thanh Tien"<<endl;
    cout<<setw(20)<<left<<"Banh Cuon Chay"<<setw(20)<<left<<chay.getKL_vo()<<setw(20)<<left<<chay.getKL_nhan()<<setw(20)<<left<<chay.getPrice()<<endl;
    cout<<setw(20)<<left<<"Banh Cuon Mong"<<setw(20)<<left<<mong.getKL_vo()<<setw(20)<<left<<mong.getKL_nhan()<<setw(20)<<left<<mong.getPrice()<<endl;
    cout<<setw(20)<<left<<"Banh Cuon Thit Lon"<<setw(20)<<left<<thit_lon.getKL_vo()<<setw(20)<<left<<thit_lon.getKL_nhan()<<setw(20)<<left<<thit_lon.getPrice()<<endl;
    cout<<setw(20)<<left<<"Banh Cuon DB"<<setw(20)<<left<<db.getKL_vo()<<setw(20)<<left<<db.getKL_nhan()<<setw(20)<<left<<thit_lon.getPrice()<<endl;
}
Don_hang::~Don_hang()
{}