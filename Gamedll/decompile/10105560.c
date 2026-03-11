/*
 * func-name: ??0CombinActor@GameClient@@QAE@PAVWorld@@@Z_0
 * func-address: 0x10105560
 * callers: 0x1000da80
 * callees: 0x1000451b, 0x100082a6, 0x10009c8c, 0x10015bb8, 0x102c9d98
 */

GameClient::CombinActor *__thiscall GameClient::CombinActor::CombinActor(
        GameClient::CombinActor *this,
        struct World *a2)
{
  AsyncLoaderReport *v3; // ebx
  AsyncLoaderReport *v4; // eax
  AsyncLoaderReport *v5; // ebp
  unsigned int v6; // ebx
  unsigned int v7; // ebp
  _BYTE v9[8]; // [esp+1Ch] [ebp-14h] BYREF
  int v10; // [esp+2Ch] [ebp-4h]

  GameClient::AdapterActor::AdapterActor(this, a2);
  v3 = 0;
  v10 = 0;
  *(_DWORD *)this = &GameClient::CombinActor::`vftable';
  sub_10009C8C((int)&a2, (int)&a2);
  sub_100082A6((int)&a2, (int)&a2);
  *((_DWORD *)this + 339) = 0;
  *((_DWORD *)this + 340) = 0;
  *((_DWORD *)this + 341) = 0;
  *((_DWORD *)this + 343) = 0;
  *((_DWORD *)this + 344) = 0;
  *((_DWORD *)this + 345) = 0;
  LOBYTE(v10) = 4;
  v4 = (AsyncLoaderReport *)operator new(8u);
  v5 = v4;
  if ( v4 )
  {
    AsyncLoaderReport::AsyncLoaderReport(v4);
    *(_DWORD *)v5 = &GameClient::PartAsyncLoaderReport::`vftable';
    *((_DWORD *)v5 + 1) = this;
    v3 = v5;
  }
  *((_DWORD *)this + 346) = v3;
  *((_BYTE *)this + 1388) = 1;
  *((_BYTE *)this + 1389) = 1;
  v6 = *((_DWORD *)this + 340);
  if ( *((_DWORD *)this + 339) > v6 )
    _invalid_parameter_noinfo();
  v7 = *((_DWORD *)this + 339);
  if ( v7 > *((_DWORD *)this + 340) )
    _invalid_parameter_noinfo();
  sub_10015BB8((int)v9, (int)this + 1352, v7, (int)this + 1352, v6);
  return this;
}
