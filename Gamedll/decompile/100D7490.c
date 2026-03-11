/*
 * func-name: sub_100D7490
 * func-address: 0x100d7490
 * callers: 0x1000542f
 * callees: 0x10001032, 0x10004b79, 0x1000db11, 0x102c9dbc
 */

int __userpurge sub_100D7490@<eax>(Concurrency::details::SchedulerBase *this@<ecx>, int a2, int a3, int a4, char a5)
{
  unsigned int v6; // edi
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // eax
  double v12; // st6
  double v13; // st7
  double v14; // st7
  int v15; // ecx
  int v16; // eax
  double v17; // st7
  int v18; // ecx
  int v19; // ecx
  void (__cdecl *v20)(int); // edx
  int v22; // [esp+34h] [ebp-54h]
  float v23; // [esp+38h] [ebp-50h]
  float v24; // [esp+3Ch] [ebp-4Ch]
  float v25; // [esp+3Ch] [ebp-4Ch]
  float v26; // [esp+3Ch] [ebp-4Ch]
  float v27; // [esp+3Ch] [ebp-4Ch]
  float v28; // [esp+3Ch] [ebp-4Ch]
  float v29; // [esp+3Ch] [ebp-4Ch]
  float v30; // [esp+40h] [ebp-48h] BYREF
  float v31; // [esp+44h] [ebp-44h] BYREF
  float v32; // [esp+48h] [ebp-40h]
  float v33; // [esp+4Ch] [ebp-3Ch]
  float v34; // [esp+50h] [ebp-38h] BYREF
  float v35; // [esp+54h] [ebp-34h]
  float v36; // [esp+58h] [ebp-30h]
  float v37; // [esp+60h] [ebp-28h]
  float v38[9]; // [esp+64h] [ebp-24h] BYREF
  float v39; // [esp+90h] [ebp+8h]

  v6 = 0;
  v22 = 0;
  while ( 1 )
  {
    v8 = *((_DWORD *)this + 39);
    if ( !v8 || v6 >= (*((_DWORD *)this + 40) - v8) >> 2 )
      break;
    v9 = *(_DWORD *)(*((_DWORD *)this + 39) + 4 * v6);
    (*(void (__thiscall **)(int, int, int, int))(*(_DWORD *)v9 + 8))(v9, a2, a3, a4);
    v10 = *((_DWORD *)this + 39);
    if ( !v10 || v6 >= (*((_DWORD *)this + 40) - v10) >> 2 )
      _invalid_parameter_noinfo();
    v11 = *((_DWORD *)this + 39);
    if ( *(_BYTE *)(*(_DWORD *)(v11 + 4 * v6) + 140) )
    {
      if ( !v11 || v6 >= (*((_DWORD *)this + 40) - v11) >> 2 )
        _invalid_parameter_noinfo();
      NxHelper::ToVector(&v30, *(_DWORD *)(*((_DWORD *)this + 39) + 4 * v6) + 156);
      if ( v31 > 0.70999998 )
        ++v22;
    }
    ++v6;
  }
  if ( !*((_BYTE *)this + 168) || !*((_BYTE *)this + 181) )
    return sub_1000DB11(a2, a3, a4);
  v39 = 0.0;
  if ( a2 == 1 )
  {
    v12 = *((float *)this + 55) * *((float *)this + 48);
  }
  else
  {
    if ( a2 != 2 )
      goto LABEL_21;
    v12 = -*((float *)this + 48) * *((float *)this + 55);
  }
  v39 = v12;
LABEL_21:
  v23 = 0.0;
  if ( Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup(this) )
  {
    v24 = *((float *)this + 46);
    v23 = (double)(int)Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup(this)
        / 9.0
        * (*((float *)this + 48) - *((float *)this + 49))
        * v24
        + *((float *)this + 49);
    if ( (a3 & 3) != 0 )
      sub_10004B79(0);
  }
  v30 = 0.0;
  v31 = 0.0;
  v32 = v23;
  if ( (a3 & 1) != 0 )
  {
    v37 = (*((float *)this + 48) - *((float *)this + 49)) * *((float *)this + 46) + *((float *)this + 49);
    v25 = 0.0 + 0.0;
    v30 = v25;
    v31 = v25;
    v13 = 0.0;
    v32 = v23 + v37;
  }
  else
  {
    v13 = 0.0;
  }
  if ( (a3 & 2) != 0 )
  {
    v26 = (*((float *)this + 50) - *((float *)this + 51)) * *((float *)this + 46) + *((float *)this + 51);
    v37 = -v26;
    v30 = v30 + v13;
    v31 = v13 + v31;
    v32 = v37 + v32;
  }
  v27 = v32 * v32 + v30 * v30 + v31 * v31;
  v28 = sqrt(v27);
  *((float *)this + 47) = v28;
  if ( (a3 & 4) != 0 )
  {
    v29 = (*((float *)this + 52) - *((float *)this + 53)) * *((float *)this + 46) + *((float *)this + 53);
    v36 = -v29;
    v30 = v36 + v30;
    v14 = 0.0;
    v31 = v31 + 0.0;
    v32 = v32 + 0.0;
  }
  else
  {
    v14 = 0.0;
  }
  if ( (a3 & 8) != 0 )
  {
    v36 = (*((float *)this + 52) - *((float *)this + 53)) * *((float *)this + 46) + *((float *)this + 53);
    v30 = v36 + v30;
    v31 = v31 + v14;
    v32 = v14 + v32;
  }
  if ( ((a3 & 1) != 0 || (a3 & 2) != 0) && ((a3 & 4) != 0 || (a3 & 8) != 0) )
  {
    v30 = v30 * 0.5;
    v31 = v31 * 0.5;
    v32 = 0.5 * v32;
  }
  (*(void (__thiscall **)(_DWORD, float *))(**((_DWORD **)this + 1) + 44))(*((_DWORD *)this + 1), v38);
  v15 = *((_DWORD *)this + 39);
  v33 = v38[2] * v32 + v38[0] * v30 + v38[1] * v31;
  v34 = v38[4] * v31 + v38[3] * v30 + v38[5] * v32;
  v35 = v30 * v38[6] + v31 * v38[7] + v32 * v38[8];
  if ( v15 )
    v16 = (*((_DWORD *)this + 40) - v15) >> 2;
  else
    v16 = 0;
  if ( v22 == v16 || v34 <= 0.70700002 )
  {
    v17 = 0.0;
  }
  else
  {
    v17 = 0.0;
    v33 = 0.0;
    v34 = 0.0;
    v35 = 0.0;
  }
  v18 = *((_DWORD *)this + 1);
  v30 = v17;
  v31 = v39;
  v32 = v17;
  (*(void (__thiscall **)(int, float *, _DWORD, int))(*(_DWORD *)v18 + 300))(v18, &v30, 0, 1);
  v19 = *((_DWORD *)this + 1);
  v31 = 0.0;
  v32 = *((float *)this + 54);
  v33 = 0.0;
  (*(void (__thiscall **)(int, float *, float *, _DWORD, int))(*(_DWORD *)v19 + 276))(v19, &v34, &v31, 0, 1);
  v20 = *(void (__cdecl **)(int))(**((_DWORD **)this + 1) + 208);
  if ( a5 )
  {
    *(float *)&a4 = *((float *)this + 14) * 10.0;
    v20(a4);
  }
  else
  {
    v20(COERCE_INT(*((float *)this + 14)));
  }
  return sub_1000DB11(a2, a3, a4);
}
