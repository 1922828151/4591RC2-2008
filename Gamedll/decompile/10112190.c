/*
 * func-name: ??1CombinRobot@GameClient@@UAE@XZ_0
 * func-address: 0x10112190
 * callers: 0x10004bd8
 * callees: 0x10006ca8, 0x1000dc4c, 0x1000e192, 0x1000e845, 0x100122b5, 0x102c9d50
 */

void __thiscall GameClient::CombinRobot::~CombinRobot(GameClient::CombinRobot *this)
{
  bool v2; // zf
  unsigned int v3; // ebp
  unsigned int v4; // eax
  bool v5; // cc
  void *v6; // eax
  void *v7; // eax
  int v8; // [esp+0h] [ebp-2Ch]
  int v9; // [esp+0h] [ebp-2Ch]
  int v10; // [esp+0h] [ebp-2Ch]
  int v11; // [esp+4h] [ebp-28h]
  int v12; // [esp+4h] [ebp-28h]
  int v13; // [esp+4h] [ebp-28h]
  _DWORD v14[3]; // [esp+14h] [ebp-18h] BYREF
  int v15; // [esp+28h] [ebp-4h]

  v14[2] = this;
  *(_DWORD *)this = &GameClient::CombinRobot::`vftable';
  v2 = *((_DWORD *)this + 349) == 0;
  v15 = 3;
  if ( !v2 )
    Precacher::PurgeModel((struct Model **)this + 349);
  sub_1000E845(v8, v11);
  v14[1] = *((_DWORD *)this + 428);
  v14[0] = (char *)this + 1708;
  sub_10006CA8(9, (int)v14);
  *((_DWORD *)this + 434) = 1;
  *((_DWORD *)this + 435) = 1;
  v3 = *((_DWORD *)this + 438);
  if ( *((_DWORD *)this + 437) > v3 )
    _invalid_parameter_noinfo();
  v4 = *((_DWORD *)this + 437);
  v5 = v4 <= *((_DWORD *)this + 438);
  v14[0] = v4;
  if ( !v5 )
  {
    _invalid_parameter_noinfo();
    v4 = v14[0];
  }
  sub_1000DC4C((int)v14, (int)this + 1744, v4, (int)this + 1744, v3);
  v6 = (void *)*((_DWORD *)this + 445);
  LOBYTE(v15) = 2;
  if ( v6 )
    operator delete(v6);
  *((_DWORD *)this + 445) = 0;
  *((_DWORD *)this + 446) = 0;
  *((_DWORD *)this + 447) = 0;
  sub_1000E845(v9, v12);
  operator delete(*((void **)this + 442));
  *((_DWORD *)this + 442) = 0;
  LOBYTE(v15) = 1;
  sub_1000E192();
  v7 = (void *)*((_DWORD *)this + 431);
  LOBYTE(v15) = 0;
  if ( v7 )
    operator delete(v7);
  *((_DWORD *)this + 431) = 0;
  *((_DWORD *)this + 432) = 0;
  *((_DWORD *)this + 433) = 0;
  sub_1000E845(v10, v13);
  operator delete(*((void **)this + 428));
  *((_DWORD *)this + 428) = 0;
  v15 = -1;
  GameClient::CombinActor::~CombinActor(this);
}
