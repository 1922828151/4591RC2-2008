/*
 * func-name: ?Tick@TraceLineSystem@@UAEXXZ_0
 * func-address: 0x100caa40
 * callers: 0x1000d72e
 * callees: 0x102ca08c, 0x102ca092
 */

void __thiscall TraceLineSystem::Tick(TraceLineSystem *this)
{
  double v1; // st7
  bool v3; // zf
  int v4; // ebx
  unsigned int i; // ebp
  int v6; // eax
  int v7; // esi
  int v8; // eax
  double v9; // st6
  int v10; // edx
  int v11; // eax
  int v12; // edx
  int v13; // eax
  double v14; // st6
  unsigned int v15; // esi
  int v16; // eax
  bool v17; // [esp+Bh] [ebp-69h]
  float v18; // [esp+Ch] [ebp-68h]
  float v19; // [esp+10h] [ebp-64h]
  float v20; // [esp+14h] [ebp-60h]
  int v21; // [esp+14h] [ebp-60h]
  float v22; // [esp+18h] [ebp-5Ch]
  float v23; // [esp+1Ch] [ebp-58h]
  double v24; // [esp+24h] [ebp-50h]
  float v25; // [esp+2Ch] [ebp-48h]
  float v26; // [esp+30h] [ebp-44h]
  float v27; // [esp+34h] [ebp-40h]
  float v28; // [esp+38h] [ebp-3Ch]
  float v29; // [esp+3Ch] [ebp-38h]
  float v30; // [esp+40h] [ebp-34h]
  float v31; // [esp+44h] [ebp-30h]
  float v32; // [esp+48h] [ebp-2Ch]
  float v33; // [esp+4Ch] [ebp-28h]
  float v34; // [esp+50h] [ebp-24h]
  float v35; // [esp+54h] [ebp-20h]
  float v36; // [esp+58h] [ebp-1Ch]
  float v37; // [esp+68h] [ebp-Ch]
  float v38; // [esp+70h] [ebp-4h]

  v19 = GDeltaTime;
  v1 = GDeltaTime;
  if ( GDeltaTime > 0.1000000014901161 )
  {
    v19 = 0.1;
    v1 = (float)0.1;
  }
  v3 = *((_BYTE *)this + 200) == 0;
  v24 = 1000.0 * v1;
  v20 = v24 + *((float *)this + 49);
  *((float *)this + 49) = v20;
  v17 = v3 && *((float *)this + 53) <= (double)v20;
  v4 = 0;
  v21 = 0;
  if ( *((_BYTE *)this + 317) && *((_DWORD *)this + 48) )
  {
    v17 = 0;
    *((_DWORD *)this + 48) = 1;
  }
  for ( i = 0; (signed int)i < *((_DWORD *)this + 48); v4 += 184 )
  {
    v6 = *((_DWORD *)this + 45);
    if ( !v6 || i >= (*((_DWORD *)this + 46) - v6) / 184 )
    {
      _invalid_parameter_noinfo();
      v1 = v19;
    }
    v7 = v4 + *((_DWORD *)this + 45);
    if ( !*((_BYTE *)this + 317) )
      *(float *)(v7 + 64) = *(float *)(v7 + 64) - v24;
    if ( *(float *)(v7 + 64) <= 0.0 && v17 )
    {
      (*(void (__thiscall **)(TraceLineSystem *, int))(*(_DWORD *)this + 20))(this, v7);
      if ( ++v21 > *((_DWORD *)this + 75) )
      {
        v17 = 0;
        *((float *)this + 49) = 0.0;
      }
      v1 = v19;
    }
    if ( *((float *)this + 64) > (double)*(float *)(v7 + 64) )
    {
      v8 = *((_DWORD *)this + 52);
      if ( v8 == 9 || v8 == 10 || v8 == 4 || v8 == 2 || v8 == 3 )
      {
        v9 = *(float *)(v7 + 64) / *((float *)this + 64);
        *(_DWORD *)(v7 + 56) = *(_DWORD *)(v7 + 60) & 0xFF000000
                             | (__int64)(v9 * (double)(unsigned __int8)*(_DWORD *)(v7 + 60))
                             | (((unsigned int)(__int64)((double)*(unsigned __int8 *)(v7 + 61) * v9)
                               | ((unsigned int)(__int64)((double)*(unsigned __int8 *)(v7 + 62) * v9) << 8)) << 8);
      }
      else
      {
        *(_DWORD *)(v7 + 56) = (unsigned __int8)*(_DWORD *)(v7 + 60)
                             | ((*(unsigned __int8 *)(v7 + 61)
                               | ((*(unsigned __int8 *)(v7 + 62)
                                 | ((unsigned int)(__int64)(*(float *)(v7 + 64)
                                                          / *((float *)this + 64)
                                                          * (double)HIBYTE(*(_DWORD *)(v7 + 60))) << 8)) << 8)) << 8);
      }
    }
    if ( 0.0 != *((float *)this + 81) )
    {
      v18 = v1 * *((float *)this + 81) * (double)*(int *)(v7 + 180);
      v23 = sin(v18);
      v22 = cos(v18);
      v37 = v22 * *(float *)v7 + v23 * *(float *)(v7 + 8);
      v38 = v22 * *(float *)(v7 + 8) - v23 * *(float *)v7;
      *(float *)v7 = v37;
      *(float *)(v7 + 8) = v38;
      v1 = v19;
    }
    v10 = *(_DWORD *)(v7 + 4);
    v11 = *(_DWORD *)(v7 + 8);
    *(_DWORD *)(v7 + 12) = *(_DWORD *)v7;
    *(_DWORD *)(v7 + 16) = v10;
    *(_DWORD *)(v7 + 20) = v11;
    v25 = *(float *)(v7 + 36) * v1;
    v26 = *(float *)(v7 + 40) * v1;
    v27 = *(float *)(v7 + 44) * v1;
    *(float *)v7 = *(float *)v7 + v25;
    *(float *)(v7 + 4) = v26 + *(float *)(v7 + 4);
    *(float *)(v7 + 8) = *(float *)(v7 + 8) + v27;
    v28 = *((float *)this + 60) * v1;
    v29 = v1 * *((float *)this + 61);
    v30 = *((float *)this + 62) * v1;
    *(float *)(v7 + 36) = *(float *)(v7 + 36) + v28;
    *(float *)(v7 + 40) = *(float *)(v7 + 40) + v29;
    *(float *)(v7 + 44) = *(float *)(v7 + 44) + v30;
    v12 = *(_DWORD *)(v7 + 144);
    v13 = *(_DWORD *)(v7 + 148);
    *(_DWORD *)(v7 + 128) = *(_DWORD *)(v7 + 140);
    *(_DWORD *)(v7 + 132) = v12;
    *(_DWORD *)(v7 + 136) = v13;
    v31 = *((float *)this + 5) - *(float *)(v7 + 24);
    v32 = *((float *)this + 6) - *(float *)(v7 + 28);
    v33 = *((float *)this + 7) - *(float *)(v7 + 32);
    v34 = *(float *)v7 + v31;
    *(float *)(v7 + 140) = v34;
    v35 = v32 + *(float *)(v7 + 4);
    v14 = *(float *)(v7 + 8);
    *(float *)(v7 + 144) = v35;
    v36 = v14 + v33;
    *(float *)(v7 + 148) = v36;
    if ( 0.0 != *(float *)(v7 + 72) && *(float *)(v7 + 72) > (double)*(float *)(v7 + 4) )
    {
      *(float *)v7 = 9999.0;
      *(float *)(v7 + 4) = -9999.0;
      *(float *)(v7 + 8) = 9999.0;
    }
    ++i;
  }
  if ( v17 )
  {
    while ( 1 )
    {
      v15 = *((_DWORD *)this + 48);
      if ( (signed int)v15 >= *((_DWORD *)this + 51) )
        break;
      v16 = *((_DWORD *)this + 45);
      if ( !v16 || v15 >= (*((_DWORD *)this + 46) - v16) / 184 )
        _invalid_parameter_noinfo();
      (*(void (__thiscall **)(TraceLineSystem *, unsigned int))(*(_DWORD *)this + 20))(
        this,
        *((_DWORD *)this + 45) + 184 * v15);
      ++*((_DWORD *)this + 48);
      if ( ++v21 > *((_DWORD *)this + 75) )
      {
        *((float *)this + 49) = 0.0;
        return;
      }
    }
  }
}
