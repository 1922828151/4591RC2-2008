/*
 * func-name: ??1Robot@GameClient@@UAE@XZ_0
 * func-address: 0x101785f0
 * callers: 0x10015adc
 * callees: 0x10003e54, 0x10005aba, 0x1000ab55, 0x100141eb, 0x10014c90, 0x10016b58, 0x10017693, 0x102c0750, 0x102c9d50
 */

void __thiscall GameClient::Robot::~Robot(GameClient::Robot *this)
{
  void *v2; // edi
  bool v3; // cc
  char *v4; // ebp
  void *v5; // ebx
  void *v6; // ebx
  void *v7; // eax
  int v8; // [esp+0h] [ebp-30h]
  int v9; // [esp+0h] [ebp-30h]
  int v10; // [esp+0h] [ebp-30h]
  int v11; // [esp+0h] [ebp-30h]
  int v12; // [esp+0h] [ebp-30h]
  int v13; // [esp+0h] [ebp-30h]
  int v14; // [esp+4h] [ebp-2Ch]
  int v15; // [esp+4h] [ebp-2Ch]
  int v16; // [esp+4h] [ebp-2Ch]
  int v17; // [esp+4h] [ebp-2Ch]
  int v18; // [esp+4h] [ebp-2Ch]
  int v19; // [esp+4h] [ebp-2Ch]
  int v20[3]; // [esp+18h] [ebp-18h] BYREF
  int v21; // [esp+2Ch] [ebp-4h]

  v20[2] = (int)this;
  *(_DWORD *)this = &GameClient::Robot::`vftable'{for `GameClient::WorldObject'};
  *((_DWORD *)this + 37) = &GameClient::Robot::`vftable'{for `GameClient::DamageUnit'};
  v2 = (void *)*((_DWORD *)this + 78);
  v3 = *((_DWORD *)this + 77) <= (unsigned int)v2;
  v4 = (char *)this + 304;
  v21 = 14;
  if ( !v3 )
    _invalid_parameter_noinfo();
  v5 = (void *)*((_DWORD *)v4 + 1);
  if ( (unsigned int)v5 > *((_DWORD *)v4 + 2) )
    _invalid_parameter_noinfo();
  sub_100141EB((int)v20, (int)v4, v5, (int)v4, v2);
  v6 = (void *)*((_DWORD *)this + 68);
  if ( *((_DWORD *)this + 67) > (unsigned int)v6 )
    _invalid_parameter_noinfo();
  v7 = (void *)*((_DWORD *)this + 67);
  v3 = (unsigned int)v7 <= *((_DWORD *)this + 68);
  v20[0] = (int)v7;
  if ( !v3 )
  {
    _invalid_parameter_noinfo();
    v7 = (void *)v20[0];
  }
  sub_10017693((int)v20, (int)this + 264, v7, (int)this + 264, v6);
  sub_10003E54();
  LOBYTE(v21) = 13;
  sub_10014C90(v8, v14);
  LOBYTE(v21) = 12;
  sub_10014C90(v9, v15);
  LOBYTE(v21) = 11;
  sub_10014C90(v10, v16);
  LOBYTE(v21) = 10;
  sub_10014C90(v11, v17);
  LOBYTE(v21) = 9;
  sub_10014C90(v12, v18);
  LOBYTE(v21) = 8;
  sub_10016B58(v13, v19);
  LOBYTE(v21) = 7;
  sub_102C0750((char *)this + 536);
  LOBYTE(v21) = 6;
  sub_102C0750((char *)this + 496);
  LOBYTE(v21) = 5;
  sub_102C0750((char *)this + 456);
  LOBYTE(v21) = 4;
  sub_102C0750((char *)this + 416);
  if ( *((_DWORD *)v4 + 1) )
    operator delete(*((void **)v4 + 1));
  *((_DWORD *)v4 + 1) = 0;
  *((_DWORD *)v4 + 2) = 0;
  *((_DWORD *)v4 + 3) = 0;
  if ( *((_DWORD *)this + 67) )
    operator delete(*((void **)this + 67));
  *((_DWORD *)this + 67) = 0;
  *((_DWORD *)this + 68) = 0;
  *((_DWORD *)this + 69) = 0;
  if ( *((_DWORD *)this + 63) )
    operator delete(*((void **)this + 63));
  *((_DWORD *)this + 63) = 0;
  *((_DWORD *)this + 64) = 0;
  *((_DWORD *)this + 65) = 0;
  LOBYTE(v21) = 0;
  GameClient::DamageUnit::~DamageUnit((GameClient::Robot *)((char *)this + 148));
  v21 = -1;
  GameClient::WorldObject::~WorldObject(this);
}
