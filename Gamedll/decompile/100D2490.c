/*
 * func-name: sub_100D2490
 * func-address: 0x100d2490
 * callers: 0x10003e0e
 * callees: 0x10001032, 0x10004b79, 0x1000db11
 */

int __thiscall sub_100D2490(Concurrency::details::SchedulerBase *this, int a2, int a3, int a4)
{
  unsigned int v5; // ebx
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  int v9; // edi
  int v10; // edx
  float v12; // [esp+4h] [ebp-28h]
  float v13; // [esp+8h] [ebp-24h]
  float v14; // [esp+1Ch] [ebp-10h]
  float v15; // [esp+20h] [ebp-Ch]
  float v16; // [esp+24h] [ebp-8h]
  float v17; // [esp+24h] [ebp-8h]
  float v18; // [esp+24h] [ebp-8h]
  float v19; // [esp+24h] [ebp-8h]
  float v20; // [esp+28h] [ebp-4h]

  v15 = *((float *)this + 51) * *((float *)this + 46);
  v20 = *((float *)this + 53) * *((float *)this + 46);
  v14 = 0.0;
  if ( Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup(this) )
  {
    v16 = *((float *)this + 46);
    v14 = (double)(int)Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup(this)
        / 9.0
        * (*((float *)this + 51) - *((float *)this + 52))
        * v16
        + *((float *)this + 52);
    if ( (a3 & 3) != 0 )
      sub_10004B79(0);
  }
  v5 = 0;
  *((float *)this + 47) = v15;
  while ( 1 )
  {
    v6 = *((_DWORD *)this + 39);
    if ( !v6 || v5 >= (*((_DWORD *)this + 40) - v6) >> 2 )
      break;
    v7 = *((_DWORD *)this + 39);
    v8 = *(_DWORD *)(v7 + 4 * v5);
    if ( v7 )
      v9 = (*((_DWORD *)this + 40) - v7) >> 2;
    else
      v9 = 0;
    if ( v7 )
      v10 = (*((_DWORD *)this + 40) - v7) >> 2;
    else
      v10 = 0;
    if ( v7 )
      v7 = (*((_DWORD *)this + 40) - v7) >> 2;
    v17 = v14 / (double)(unsigned int)v9;
    v13 = v17;
    v18 = v20 / (double)(unsigned int)v10;
    v12 = v18;
    v19 = v15 / (double)(unsigned int)v7;
    (*(void (__stdcall **)(int, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v8 + 12))(
      a2,
      a3,
      a4,
      LODWORD(v19),
      LODWORD(v12),
      LODWORD(v13));
    ++v5;
  }
  return sub_1000DB11(a2, a3, a4);
}
