/*
 * func-name: sub_100D8080
 * func-address: 0x100d8080
 * callers: 0x1000eac0
 * callees: 0x10001032, 0x10004b79, 0x1000db11
 */

int __thiscall sub_100D8080(Concurrency::details::SchedulerBase *this, int a2, int a3, int a4)
{
  int v4; // ebx
  unsigned int i; // edi
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  unsigned int j; // edi
  int v14; // ecx
  int v15; // ecx
  float v17; // [esp+1Ch] [ebp-Ch]
  float v18; // [esp+20h] [ebp-8h]
  float v19; // [esp+20h] [ebp-8h]
  float v20; // [esp+24h] [ebp-4h]
  float v21; // [esp+24h] [ebp-4h]
  float v22; // [esp+24h] [ebp-4h]

  v4 = 0;
  for ( i = 0; ; ++i )
  {
    v7 = *((_DWORD *)this + 39);
    if ( !v7 || i >= (*((_DWORD *)this + 40) - v7) >> 2 )
      break;
    v8 = *(_DWORD *)(*((_DWORD *)this + 39) + 4 * i);
    if ( *(_BYTE *)(v8 + 140) )
    {
      if ( *(_BYTE *)(v8 + 192) )
        ++v4;
    }
  }
  v17 = 0.0;
  if ( Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup(this) )
  {
    v18 = *((float *)this + 46);
    v17 = (double)(int)Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup(this)
        / 9.0
        * (*((float *)this + 48) - *((float *)this + 49))
        * v18
        + *((float *)this + 49);
    if ( (a3 & 3) != 0 )
      sub_10004B79(0);
  }
  v19 = 0.0;
  v20 = 0.0;
  if ( v4 )
  {
    v9 = *((_DWORD *)this + 39);
    if ( v9 )
      v10 = (*((_DWORD *)this + 40) - v9) >> 2;
    else
      v10 = 0;
    v17 = v17 / (double)(unsigned int)v10;
    if ( v9 )
      v11 = (*((_DWORD *)this + 40) - v9) >> 2;
    else
      v11 = 0;
    v21 = (*((float *)this + 48) - *((float *)this + 49)) * *((float *)this + 46) + *((float *)this + 49);
    v19 = v21 / (double)(unsigned int)v11;
    if ( v9 )
      v12 = (*((_DWORD *)this + 40) - v9) >> 2;
    else
      v12 = 0;
    v22 = (*((float *)this + 50) - *((float *)this + 51)) * *((float *)this + 46) + *((float *)this + 51);
    v20 = v22 / (double)(unsigned int)v12;
  }
  *((float *)this + 47) = v19;
  for ( j = 0; ; ++j )
  {
    v14 = *((_DWORD *)this + 39);
    if ( !v14 || j >= (*((_DWORD *)this + 40) - v14) >> 2 )
      break;
    v15 = *(_DWORD *)(*((_DWORD *)this + 39) + 4 * j);
    (*(void (__thiscall **)(int, int, int, int, float, float, float))(*(_DWORD *)v15 + 12))(
      v15,
      a2,
      a3,
      a4,
      COERCE_FLOAT(LODWORD(v19)),
      COERCE_FLOAT(LODWORD(v20)),
      COERCE_FLOAT(LODWORD(v17)));
  }
  return sub_1000DB11(a2, a3, a4);
}
