/*
 * func-name: sub_10148A00
 * func-address: 0x10148a00
 * callers: 0x1000d080
 * callees: 0x10014c90, 0x10016b58, 0x10018d31, 0x102c9d50
 */

void __thiscall sub_10148A00(void **this)
{
  int v2; // [esp+0h] [ebp-18h]
  int v3; // [esp+0h] [ebp-18h]
  int v4; // [esp+0h] [ebp-18h]
  int v5; // [esp+0h] [ebp-18h]
  int v6; // [esp+4h] [ebp-14h]
  int v7; // [esp+4h] [ebp-14h]
  int v8; // [esp+4h] [ebp-14h]
  int v9; // [esp+4h] [ebp-14h]

  *this = &GameClient::Bullet::`vftable';
  sub_10016B58(v2, v6);
  sub_10016B58(v3, v7);
  sub_10014C90(v4, v8);
  sub_10014C90(v5, v9);
  if ( this[30] )
    operator delete(this[30]);
  this[30] = 0;
  this[31] = 0;
  this[32] = 0;
  GameClient::DataObject::~DataObject((GameClient::DataObject *)this);
}
