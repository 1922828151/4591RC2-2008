/*
 * func-name: ??0CombinRobot@GameClient@@QAE@PAVWorld@@@Z_0
 * func-address: 0x10111e30
 * callers: 0x1000d224
 * callees: 0x10009052, 0x1000da80, 0x1000e598, 0x1000e845, 0x1000f04c, 0x102c9d98
 */

GameClient::CombinRobot *__thiscall GameClient::CombinRobot::CombinRobot(
        GameClient::CombinRobot *this,
        struct World *a2)
{
  AsyncLoaderReport *v3; // eax
  AsyncLoaderReport *v4; // ebx
  _DWORD *v5; // eax
  int v6; // edx
  int v7; // ecx
  int v8; // eax
  unsigned int v9; // ebx
  bool v10; // cc
  struct World *v11; // eax
  unsigned int v12; // ebx
  int v13; // eax
  unsigned int v14; // ebp
  struct World *v15; // eax
  unsigned int v16; // ebp
  int v18; // [esp+0h] [ebp-34h]
  int v19; // [esp+0h] [ebp-34h]
  int v20; // [esp+4h] [ebp-30h]
  int v21; // [esp+4h] [ebp-30h]
  char *v22; // [esp+18h] [ebp-1Ch] BYREF
  int v23; // [esp+1Ch] [ebp-18h]
  _BYTE v24[8]; // [esp+20h] [ebp-14h] BYREF
  int v25; // [esp+30h] [ebp-4h]

  GameClient::CombinActor::CombinActor(this, a2);
  *(_DWORD *)this = &GameClient::CombinRobot::`vftable';
  *((float *)this + 352) = 0.0;
  *((float *)this + 353) = 0.0;
  *((_BYTE *)this + 1420) = 1;
  *((float *)this + 354) = 1.0;
  *((_DWORD *)this + 356) = 0;
  *((_DWORD *)this + 351) = -1;
  *((float *)this + 357) = 0.0;
  *((float *)this + 358) = 0.0;
  *((float *)this + 359) = 0.0;
  *((float *)this + 360) = 0.0;
  *((float *)this + 361) = 0.0;
  *((float *)this + 362) = 0.0;
  *((float *)this + 363) = 0.0;
  v25 = 0;
  *((float *)this + 364) = 0.0;
  *((float *)this + 365) = 0.0;
  *((float *)this + 369) = 0.0;
  *((float *)this + 370) = 0.0;
  *((_DWORD *)this + 368) = -1;
  *((_BYTE *)this + 1488) = 1;
  *((float *)this + 371) = 1.0;
  *((_DWORD *)this + 373) = 0;
  *((float *)this + 375) = 0.0;
  *((_DWORD *)this + 374) = -1;
  *((float *)this + 376) = 0.0;
  *((_BYTE *)this + 1512) = 1;
  *((_DWORD *)this + 379) = 0;
  *((float *)this + 377) = 1.0;
  sub_1000F04C((int)&a2, (int)&a2);
  *((_DWORD *)this + 437) = 0;
  *((_DWORD *)this + 438) = 0;
  *((_DWORD *)this + 439) = 0;
  sub_1000F04C((int)&a2, (int)&a2);
  LOBYTE(v25) = 3;
  *((_DWORD *)this + 62) = 1;
  v3 = (AsyncLoaderReport *)operator new(8u);
  v4 = v3;
  if ( v3 )
  {
    AsyncLoaderReport::AsyncLoaderReport(v3);
    *(_DWORD *)v4 = &GameClient::RobotAsyncLoaderReport::`vftable';
    *((_DWORD *)v4 + 1) = this;
  }
  else
  {
    v4 = 0;
  }
  *((_DWORD *)this + 308) = v4;
  *((_BYTE *)this + 1108) = 0;
  *((_BYTE *)this + 1392) = 0;
  *((_DWORD *)this + 366) = -1;
  *((_DWORD *)this + 367) = -1;
  *((_DWORD *)this + 368) = -1;
  *((_DWORD *)this + 374) = -1;
  v5 = (_DWORD *)((char *)this + 1580);
  v6 = 3;
  do
  {
    v7 = 5;
    do
    {
      *(v5 - 15) = -1;
      *v5++ = -1;
      --v7;
    }
    while ( v7 );
    --v6;
  }
  while ( v6 );
  *((_DWORD *)this + 410) = -1;
  *((_DWORD *)this + 418) = -1;
  *((_DWORD *)this + 411) = -1;
  *((_DWORD *)this + 419) = -1;
  *((_DWORD *)this + 412) = -1;
  *((_DWORD *)this + 420) = -1;
  *((_DWORD *)this + 413) = -1;
  *((_DWORD *)this + 421) = -1;
  *((_DWORD *)this + 414) = -1;
  *((_DWORD *)this + 422) = -1;
  *((_DWORD *)this + 415) = -1;
  *((_DWORD *)this + 423) = -1;
  *((_DWORD *)this + 416) = -1;
  *((_DWORD *)this + 424) = -1;
  *((_DWORD *)this + 417) = -1;
  *((_DWORD *)this + 425) = -1;
  sub_1000E845(v18, v20);
  v8 = *((_DWORD *)this + 428);
  v22 = (char *)this + 1708;
  v9 = *((_DWORD *)this + 432);
  v10 = *((_DWORD *)this + 431) <= v9;
  v23 = v8;
  if ( !v10 )
    _invalid_parameter_noinfo();
  v11 = (struct World *)*((_DWORD *)this + 431);
  v10 = (unsigned int)v11 <= *((_DWORD *)this + 432);
  a2 = v11;
  if ( !v10 )
  {
    _invalid_parameter_noinfo();
    v11 = a2;
  }
  sub_1000E598((int)v24, (int)this + 1720, (int)v11, (int)this + 1720, v9);
  v12 = *((_DWORD *)this + 431);
  if ( v12 > *((_DWORD *)this + 432) )
    _invalid_parameter_noinfo();
  sub_10009052((int)this + 1720, v12, 9, (int)&v22);
  *((_DWORD *)this + 434) = 1;
  *((_DWORD *)this + 435) = 1;
  *((_DWORD *)this + 349) = 0;
  *((_DWORD *)this + 350) = -1;
  *((_DWORD *)this + 351) = -1;
  sub_1000E845(v19, v21);
  v13 = *((_DWORD *)this + 442);
  v22 = (char *)this + 1764;
  v14 = *((_DWORD *)this + 446);
  v10 = *((_DWORD *)this + 445) <= v14;
  v23 = v13;
  if ( !v10 )
    _invalid_parameter_noinfo();
  v15 = (struct World *)*((_DWORD *)this + 445);
  v10 = (unsigned int)v15 <= *((_DWORD *)this + 446);
  a2 = v15;
  if ( !v10 )
  {
    _invalid_parameter_noinfo();
    v15 = a2;
  }
  sub_1000E598((int)v24, (int)this + 1776, (int)v15, (int)this + 1776, v14);
  v16 = *((_DWORD *)this + 445);
  if ( v16 > *((_DWORD *)this + 446) )
    _invalid_parameter_noinfo();
  sub_10009052((int)this + 1776, v16, 9, (int)&v22);
  *((_DWORD *)this + 448) = 1;
  *((_DWORD *)this + 449) = 1;
  *((float *)this + 282) = 1.0;
  *((_DWORD *)this + 450) = 0;
  *((_DWORD *)this + 451) = 0;
  *((_DWORD *)this + 452) = 0;
  return this;
}
