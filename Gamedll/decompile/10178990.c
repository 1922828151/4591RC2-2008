/*
 * func-name: ??0Robot@GameClient@@QAE@K@Z_0
 * func-address: 0x10178990
 * callers: 0x10001195
 * callees: 0x1000516e, 0x100057f4, 0x10005fb5, 0x1000d224, 0x1000d3e6, 0x1000f1dc, 0x100141eb, 0x100145c9, 0x10016fef, 0x10018e71, 0x102c1270, 0x102c9d98, 0x102c9ea2
 */

GameClient::Robot *__thiscall GameClient::Robot::Robot(GameClient::Robot *this, unsigned int a2)
{
  GameClient::CombinRobot *v3; // esi
  struct Game *v4; // eax
  int v5; // eax
  _DWORD *v6; // eax
  int v7; // edx
  float v8; // edx
  int v9; // ecx
  float v10; // ecx
  float v11; // edx
  void *v12; // edi
  void *v13; // eax
  int v15; // [esp+4h] [ebp-70h]
  int v16; // [esp+4h] [ebp-70h]
  int v17; // [esp+4h] [ebp-70h]
  int v18; // [esp+4h] [ebp-70h]
  int v19; // [esp+4h] [ebp-70h]
  int v20; // [esp+4h] [ebp-70h]
  int v21; // [esp+8h] [ebp-6Ch]
  int v22; // [esp+8h] [ebp-6Ch]
  int v23; // [esp+8h] [ebp-6Ch]
  int v24; // [esp+8h] [ebp-6Ch]
  int v25; // [esp+8h] [ebp-6Ch]
  int v26; // [esp+8h] [ebp-6Ch]
  int v27; // [esp+1Ch] [ebp-58h] BYREF
  float v28; // [esp+20h] [ebp-54h]
  float v29; // [esp+24h] [ebp-50h]
  _BYTE v30[64]; // [esp+28h] [ebp-4Ch] BYREF
  int v31; // [esp+70h] [ebp-4h]
  unsigned int v32; // [esp+78h] [ebp+4h]

  GameClient::WorldObject::WorldObject(this, a2);
  v31 = 0;
  GameClient::DamageUnit::DamageUnit((GameClient::Robot *)((char *)this + 148));
  *(_DWORD *)this = &GameClient::Robot::`vftable'{for `GameClient::WorldObject'};
  *((_DWORD *)this + 37) = &GameClient::Robot::`vftable'{for `GameClient::DamageUnit'};
  *((_DWORD *)this + 63) = 0;
  *((_DWORD *)this + 64) = 0;
  *((_DWORD *)this + 65) = 0;
  *((_DWORD *)this + 67) = 0;
  *((_DWORD *)this + 68) = 0;
  *((_DWORD *)this + 69) = 0;
  *((_DWORD *)this + 77) = 0;
  *((_DWORD *)this + 78) = 0;
  *((_DWORD *)this + 79) = 0;
  *((float *)this + 94) = 10.0;
  *((float *)this + 95) = 10.0;
  *((float *)this + 96) = 10.0;
  *((float *)this + 102) = 10.0;
  *((float *)this + 97) = 0.0;
  *((float *)this + 98) = 0.0;
  *((float *)this + 99) = 0.0;
  *((float *)this + 100) = 0.0;
  *((float *)this + 101) = 30.0;
  *((float *)this + 103) = 0.0;
  sub_1000F1DC();
  sub_1000F1DC();
  sub_1000F1DC();
  sub_1000F1DC();
  *((float *)this + 144) = 0.0;
  *((float *)this + 145) = 0.0;
  *((float *)this + 146) = 0.0;
  *((float *)this + 147) = 0.0;
  *((float *)this + 148) = 0.0;
  *((float *)this + 149) = 0.0;
  *((float *)this + 151) = 0.0;
  *((float *)this + 152) = 0.0;
  *((float *)this + 153) = 0.0;
  *((float *)this + 155) = 0.0;
  *((float *)this + 156) = 0.0;
  *((float *)this + 157) = 0.0;
  *((float *)this + 159) = 0.0;
  *((float *)this + 160) = 0.0;
  *((float *)this + 161) = 0.0;
  memset((char *)this + 588, 0, 0x40u);
  sub_102C1270(1.0);
  *((float *)this + 162) = 1.0;
  *((float *)this + 168) = 0.0;
  *((float *)this + 169) = 0.0;
  *((float *)this + 170) = 0.0;
  *((float *)this + 177) = 0.0;
  *((float *)this + 178) = 0.0;
  *((float *)this + 179) = 0.0;
  *((float *)this + 183) = 0.0;
  *((float *)this + 184) = 0.0;
  *((float *)this + 185) = 0.0;
  *((float *)this + 188) = 0.0;
  *((float *)this + 189) = 0.0;
  *((float *)this + 190) = 0.0;
  *((float *)this + 191) = 0.0;
  *((float *)this + 192) = 0.0;
  *((float *)this + 193) = 0.0;
  *((float *)this + 200) = 0.0;
  *((float *)this + 201) = 0.0;
  *((float *)this + 202) = 0.0;
  *((float *)this + 203) = 0.0;
  *((float *)this + 204) = 0.0;
  *((float *)this + 205) = 0.0;
  *((float *)this + 206) = 0.0;
  *((float *)this + 207) = 0.0;
  *((float *)this + 208) = 0.0;
  *((float *)this + 209) = 0.0;
  *((float *)this + 210) = 0.0;
  *((float *)this + 211) = 0.0;
  *((float *)this + 213) = 0.0;
  *((float *)this + 214) = 0.0;
  *((float *)this + 215) = 0.0;
  *((float *)this + 217) = 0.0;
  *((float *)this + 218) = 0.0;
  *((float *)this + 219) = 0.0;
  *((float *)this + 221) = 0.0;
  *((float *)this + 222) = 0.0;
  *((float *)this + 223) = 0.0;
  memset((char *)this + 836, 0, 0x40u);
  sub_102C1270(1.0);
  *((float *)this + 224) = 1.0;
  sub_100145C9(v15, v21);
  sub_100057F4(v16, v22);
  sub_100057F4(v17, v23);
  sub_100057F4(v18, v24);
  sub_100057F4(v19, v25);
  sub_100057F4(v20, v26);
  *((_DWORD *)this + 369) = 0;
  *((_DWORD *)this + 370) = 0;
  *((_DWORD *)this + 371) = 0;
  *((float *)this + 42) = 0.0;
  v3 = (GameClient::CombinRobot *)operator new(0x714u);
  LOBYTE(v31) = 16;
  if ( v3 )
  {
    v4 = Game::Instance();
    v5 = GameClient::CombinRobot::CombinRobot(v3, *((struct World **)v4 + 25));
  }
  else
  {
    v5 = 0;
  }
  LOBYTE(v31) = 15;
  *((_DWORD *)this + 43) = v5;
  v6 = operator new(8u);
  if ( v6 )
  {
    *v6 = &GameClient::RobotCallback::`vftable';
    v6[1] = this;
  }
  else
  {
    v6 = 0;
  }
  *((_DWORD *)this + 47) = v6;
  *((float *)this + 75) = -1.0;
  *((_DWORD *)this + 54) = -1;
  *((float *)this + 81) = 100.0;
  *((_DWORD *)this + 70) = -1;
  *((_DWORD *)this + 71) = -1;
  *((float *)this + 82) = 6.0;
  *((_DWORD *)this + 44) = 0;
  *((float *)this + 163) = 8.0;
  *((_DWORD *)this + 45) = 0;
  *((_DWORD *)this + 46) = 0;
  *(float *)&v27 = 0.0;
  *((_DWORD *)this + 48) = 0;
  v7 = v27;
  v29 = 0.0;
  *(float *)&v27 = 0.0;
  *((_DWORD *)this + 144) = v7;
  v8 = v29;
  v28 = 0.0;
  v29 = 0.0;
  *((float *)this + 145) = 0.0;
  v9 = v27;
  *((float *)this + 167) = 100.0;
  *((_DWORD *)this + 168) = v9;
  v10 = v29;
  *((float *)this + 146) = v8;
  v11 = v28;
  *((float *)this + 174) = 0.0;
  *((float *)this + 169) = v11;
  *((float *)this + 225) = 1.0;
  *((_DWORD *)this + 49) = 0;
  *((_DWORD *)this + 50) = 0;
  *((float *)this + 94) = 0.0;
  *((_DWORD *)this + 51) = 0;
  *((float *)this + 95) = 0.0;
  *((_DWORD *)this + 52) = 0;
  *((float *)this + 96) = 0.0;
  *((_DWORD *)this + 53) = 0;
  *((float *)this + 97) = 0.0;
  *((_DWORD *)this + 56) = 0;
  *((_DWORD *)this + 55) = 0;
  *((_DWORD *)this + 57) = 0;
  *((_DWORD *)this + 58) = 0;
  *((_DWORD *)this + 59) = 0;
  *((_DWORD *)this + 60) = 0;
  *((_DWORD *)this + 61) = 0;
  *((_DWORD *)this + 74) = 0;
  *((_DWORD *)this + 80) = 100;
  *((_DWORD *)this + 186) = 0;
  *((_DWORD *)this + 88) = 0;
  *((_DWORD *)this + 89) = 0;
  *((_DWORD *)this + 90) = 3;
  *((_DWORD *)this + 91) = 0;
  *((_DWORD *)this + 92) = 0;
  *((_DWORD *)this + 84) = 0;
  *((_DWORD *)this + 85) = 0;
  *((_DWORD *)this + 86) = 1;
  *((_DWORD *)this + 87) = 1;
  *((float *)this + 170) = v10;
  *((_DWORD *)this + 165) = 1;
  *((_BYTE *)this + 705) = 0;
  *((_BYTE *)this + 700) = 0;
  *((_BYTE *)this + 701) = 0;
  *((_BYTE *)this + 664) = 0;
  *((_BYTE *)this + 702) = 0;
  *((_BYTE *)this + 703) = 1;
  *((_BYTE *)this + 704) = 1;
  *((_BYTE *)this + 720) = 0;
  *((_DWORD *)this + 93) = 0;
  *((float *)this + 98) = 0.0;
  *((float *)this + 99) = 0.0;
  *((float *)this + 100) = 0.0;
  *((float *)this + 101) = 0.0;
  *((float *)this + 102) = 0.0;
  *((float *)this + 103) = 0.0;
  *((float *)this + 6) = -10.0;
  *((float *)this + 7) = 10.0;
  *(float *)&v27 = 1.0;
  v28 = 0.0;
  v29 = 0.0;
  *((float *)this + 8) = -10.0;
  qmemcpy((char *)this + 36, (const void *)sub_10018E71(v30, (int)&v27), 0x40u);
  *((float *)this + 195) = 2.0;
  *((float *)this + 194) = 0.0;
  *((float *)this + 196) = 0.0;
  *((float *)this + 197) = 0.0;
  *((float *)this + 198) = 1.0;
  v28 = 1.0;
  *((float *)this + 199) = 0.0;
  *(float *)&v27 = 0.0;
  *((float *)this + 200) = 0.0;
  v29 = 0.0;
  *((float *)this + 201) = 1.0;
  *((float *)this + 202) = 0.0;
  *((float *)this + 205) = 0.0;
  *((float *)this + 204) = 0.0;
  *((float *)this + 203) = 0.0;
  *((float *)this + 208) = 0.0;
  *((float *)this + 207) = 0.0;
  *((float *)this + 206) = 0.0;
  *((_DWORD *)this + 226) = -1;
  *((_DWORD *)this + 227) = -1;
  *((_DWORD *)this + 229) = -1;
  *((_DWORD *)this + 72) = -1;
  *((_DWORD *)this + 228) = -1;
  *((_DWORD *)this + 231) = 0;
  *((_DWORD *)this + 372) = 0;
  *((_BYTE *)this + 920) = 0;
  *((_DWORD *)this + 366) = -1;
  v12 = (void *)*((_DWORD *)this + 78);
  if ( *((_DWORD *)this + 77) > (unsigned int)v12 )
    _invalid_parameter_noinfo();
  v13 = (void *)*((_DWORD *)this + 77);
  v32 = (unsigned int)v13;
  if ( (unsigned int)v13 > *((_DWORD *)this + 78) )
  {
    _invalid_parameter_noinfo();
    v13 = (void *)v32;
  }
  sub_100141EB((int)&v27, (int)this + 304, v13, (int)this + 304, v12);
  sub_10005FB5((char *)this + 264, 5, 0);
  return this;
}
