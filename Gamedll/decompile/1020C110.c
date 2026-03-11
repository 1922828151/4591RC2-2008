/*
 * func-name: sub_1020C110
 * func-address: 0x1020c110
 * callers: 0x1000cdbf
 * callees: 0x102c9d50
 */

void __thiscall sub_1020C110(void **this)
{
  *this = &GameClient::Send_Chat_Result::`vftable';
  std::string::~string(this + 20);
  if ( this[17] )
    operator delete(this[17]);
  this[17] = 0;
  this[18] = 0;
  this[19] = 0;
  std::string::~string(this + 9);
  *this = &Outpop::IONetwork::Asynch_Result::`vftable';
}
