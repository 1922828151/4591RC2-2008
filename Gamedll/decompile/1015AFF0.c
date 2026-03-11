/*
 * func-name: ??0Equip@GameClient@@QAE@K@Z_0
 * func-address: 0x1015aff0
 * callers: 0x1001a3a7
 * callees: 0x10002d83, 0x1000516e, 0x100057f4, 0x10008634, 0x10018df9, 0x102c9d98
 */

GameClient::Equip *__thiscall GameClient::Equip::Equip(GameClient::Equip *this, GameClient::AEquip *a2)
{
  struct Game *v3; // eax
  int v4; // eax
  unsigned int v5; // eax
  bool v6; // cc
  unsigned int v7; // eax
  unsigned int v8; // edi
  unsigned int v9; // eax
  int v11; // [esp+0h] [ebp-2Ch]
  int v12; // [esp+0h] [ebp-2Ch]
  int v13; // [esp+0h] [ebp-2Ch]
  int v14; // [esp+0h] [ebp-2Ch]
  int v15; // [esp+0h] [ebp-2Ch]
  int v16; // [esp+4h] [ebp-28h]
  int v17; // [esp+4h] [ebp-28h]
  int v18; // [esp+4h] [ebp-28h]
  int v19; // [esp+4h] [ebp-28h]
  int v20; // [esp+4h] [ebp-28h]
  int v21[3]; // [esp+14h] [ebp-18h] BYREF
  int v22; // [esp+28h] [ebp-4h]
  GameClient::AEquip *v23; // [esp+30h] [ebp+4h]
  GameClient::AEquip *v24; // [esp+30h] [ebp+4h]
  GameClient::AEquip *v25; // [esp+30h] [ebp+4h]

  v21[2] = (int)this;
  GameClient::SystemPart::SystemPart(this, (unsigned int)a2);
  *(_DWORD *)this = &GameClient::Equip::`vftable';
  *((float *)this + 38) = 0.0;
  *((float *)this + 39) = 0.0;
  *((float *)this + 40) = 0.0;
  *((float *)this + 41) = 0.0;
  v22 = 0;
  *((float *)this + 42) = 0.0;
  *((_DWORD *)this + 70) = 0;
  *((float *)this + 43) = 0.0;
  *((_DWORD *)this + 71) = 0;
  *((float *)this + 51) = 0.0;
  *((_DWORD *)this + 72) = 0;
  *((float *)this + 52) = 0.0;
  *((float *)this + 53) = 0.0;
  *((float *)this + 54) = 0.0;
  *((float *)this + 55) = 0.0;
  *((float *)this + 56) = 0.0;
  *((float *)this + 57) = 0.0;
  *((float *)this + 58) = 0.0;
  *((float *)this + 59) = 0.0;
  *((_DWORD *)this + 74) = 0;
  *((_DWORD *)this + 75) = 0;
  *((_DWORD *)this + 76) = 0;
  *((_DWORD *)this + 78) = 0;
  *((_DWORD *)this + 79) = 0;
  *((_DWORD *)this + 80) = 0;
  *((_DWORD *)this + 82) = 0;
  *((_DWORD *)this + 83) = 0;
  *((_DWORD *)this + 84) = 0;
  sub_100057F4(v11, v16);
  sub_100057F4(v12, v17);
  sub_100057F4(v13, v18);
  sub_100057F4(v14, v19);
  sub_100057F4(v15, v20);
  *((_DWORD *)this + 37) = 0;
  *((_DWORD *)this + 67) = 0;
  v23 = (GameClient::AEquip *)operator new(0x8ECu);
  LOBYTE(v22) = 10;
  if ( v23 )
  {
    v3 = Game::Instance();
    v4 = GameClient::AEquip::AEquip(v23, *((struct World **)v3 + 25));
  }
  else
  {
    v4 = 0;
  }
  *((_DWORD *)this + 45) = v4;
  *((_DWORD *)this + 68) = 0;
  v5 = *((_DWORD *)this + 71);
  v6 = *((_DWORD *)this + 70) <= v5;
  LOBYTE(v22) = 9;
  v21[0] = v5;
  if ( !v6 )
    _invalid_parameter_noinfo();
  v7 = *((_DWORD *)this + 70);
  v24 = (GameClient::AEquip *)v7;
  if ( v7 > *((_DWORD *)this + 71) )
  {
    _invalid_parameter_noinfo();
    v7 = (unsigned int)v24;
  }
  sub_10018DF9((int)v21, (int)this + 276, v7, (int)this + 276, v21[0]);
  v8 = *((_DWORD *)this + 75);
  if ( *((_DWORD *)this + 74) > v8 )
    _invalid_parameter_noinfo();
  v9 = *((_DWORD *)this + 74);
  v25 = (GameClient::AEquip *)v9;
  if ( v9 > *((_DWORD *)this + 75) )
  {
    _invalid_parameter_noinfo();
    v9 = (unsigned int)v25;
  }
  sub_10018DF9((int)v21, (int)this + 292, v9, (int)this + 292, v8);
  *((float *)this + 47) = 100.0;
  *((_DWORD *)this + 50) = -1;
  *((float *)this + 48) = 1.0;
  *((_BYTE *)this + 196) = 1;
  *((float *)this + 56) = 0.0;
  *((float *)this + 55) = 0.0;
  *((float *)this + 54) = 0.0;
  *((float *)this + 59) = 0.0;
  *((float *)this + 58) = 0.0;
  *((float *)this + 57) = 0.0;
  *((float *)this + 60) = 0.0;
  *((_DWORD *)this + 62) = -1;
  *((_DWORD *)this + 63) = -1;
  *((_DWORD *)this + 64) = -1;
  *((_DWORD *)this + 65) = -1;
  *((_DWORD *)this + 66) = -1;
  *((_BYTE *)this + 244) = 0;
  *((_DWORD *)this + 44) = 0;
  *((_BYTE *)this + 184) = 0;
  *((_BYTE *)this + 185) = 0;
  return this;
}
