/*
 * func-name: ??1Skill@GameClient@@UAE@XZ_0
 * func-address: 0x101d2cf0
 * callers: 0x1000d832
 * callees: 0x10014c90, 0x10016b58, 0x10018d31, 0x102c9d50
 */

void __thiscall GameClient::Skill::~Skill(void **this)
{
  int v2; // [esp+0h] [ebp-1Ch]
  int v3; // [esp+0h] [ebp-1Ch]
  int v4; // [esp+0h] [ebp-1Ch]
  int v5; // [esp+0h] [ebp-1Ch]
  int v6; // [esp+0h] [ebp-1Ch]
  int v7; // [esp+0h] [ebp-1Ch]
  int v8; // [esp+4h] [ebp-18h]
  int v9; // [esp+4h] [ebp-18h]
  int v10; // [esp+4h] [ebp-18h]
  int v11; // [esp+4h] [ebp-18h]
  int v12; // [esp+4h] [ebp-18h]
  int v13; // [esp+4h] [ebp-18h]

  *this = &GameClient::Skill::`vftable';
  sub_10014C90(v2, v8);
  sub_10014C90(v3, v9);
  sub_10014C90(v4, v10);
  sub_10016B58(v5, v11);
  sub_10016B58(v6, v12);
  sub_10016B58(v7, v13);
  if ( this[11] )
    operator delete(this[11]);
  this[11] = 0;
  this[12] = 0;
  this[13] = 0;
  if ( this[7] )
    operator delete(this[7]);
  this[7] = 0;
  this[8] = 0;
  this[9] = 0;
  GameClient::DataObject::~DataObject((GameClient::DataObject *)this);
}
