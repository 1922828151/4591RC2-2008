/*
 * func-name: ??1Equip@GameClient@@UAE@XZ_0
 * func-address: 0x1015aeb0
 * callers: 0x10012fd0
 * callees: 0x100090f7, 0x10011a72, 0x10012b07, 0x10014c90, 0x102c9d50
 */

void __thiscall GameClient::Equip::~Equip(void **this)
{
  int v2; // [esp+0h] [ebp-20h]
  int v3; // [esp+0h] [ebp-20h]
  int v4; // [esp+0h] [ebp-20h]
  int v5; // [esp+0h] [ebp-20h]
  int v6; // [esp+0h] [ebp-20h]
  int v7; // [esp+4h] [ebp-1Ch]
  int v8; // [esp+4h] [ebp-1Ch]
  int v9; // [esp+4h] [ebp-1Ch]
  int v10; // [esp+4h] [ebp-1Ch]
  int v11; // [esp+4h] [ebp-1Ch]

  *this = &GameClient::Equip::`vftable';
  sub_10014C90(v2, v7);
  sub_10014C90(v3, v8);
  sub_10014C90(v4, v9);
  sub_10014C90(v5, v10);
  sub_10014C90(v6, v11);
  sub_100090F7();
  sub_100090F7();
  if ( this[74] )
  {
    sub_10011A72();
    operator delete(this[74]);
  }
  this[74] = 0;
  this[75] = 0;
  this[76] = 0;
  if ( this[70] )
  {
    sub_10011A72();
    operator delete(this[70]);
  }
  this[70] = 0;
  this[71] = 0;
  this[72] = 0;
  GameClient::SystemPart::~SystemPart((GameClient::SystemPart *)this);
}
