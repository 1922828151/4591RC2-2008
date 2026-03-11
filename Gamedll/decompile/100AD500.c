/*
 * func-name: ?Tick@ParticleSystemEx@@UAEXXZ_0
 * func-address: 0x100ad500
 * callers: 0x1000b9ce
 * callees: 0x102c9fe0
 */

void __thiscall ParticleSystemEx::Tick(ParticleSystemEx *this)
{
  unsigned int v2; // ebp
  double v3; // st7
  bool v4; // zf
  double v5; // st6
  int v6; // ebx
  int v7; // eax
  int v8; // esi
  double v9; // st5
  unsigned int v10; // ebx
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  unsigned int v14; // esi
  int v15; // eax
  bool v16; // [esp+17h] [ebp-49h]
  float v17; // [esp+18h] [ebp-48h]
  float v18; // [esp+1Ch] [ebp-44h]
  int v19; // [esp+20h] [ebp-40h]
  float v20; // [esp+24h] [ebp-3Ch]
  int v21; // [esp+24h] [ebp-3Ch]
  double v22; // [esp+30h] [ebp-30h]
  float v23; // [esp+3Ch] [ebp-24h]
  float v24; // [esp+40h] [ebp-20h]
  float v25; // [esp+44h] [ebp-1Ch]
  float v26; // [esp+48h] [ebp-18h]
  float v27; // [esp+4Ch] [ebp-14h]
  float v28; // [esp+50h] [ebp-10h]

  v2 = 0;
  if ( !*((_DWORD *)this + 46) )
  {
    v18 = GDeltaTime;
    v3 = GDeltaTime;
    if ( GDeltaTime > 0.1000000014901161 )
    {
      v18 = 0.1;
      v3 = (float)0.1;
    }
    v4 = *((_BYTE *)this + 212) == 0;
    v22 = 1000.0 * v3;
    v20 = v22 + *((float *)this + 52);
    *((float *)this + 52) = v20;
    v16 = v4 && *((float *)this + 57) <= (double)v20;
    v5 = 0.0;
    v6 = 0;
    v21 = 0;
    if ( *((int *)this + 51) > 0 )
    {
      v19 = 0;
      do
      {
        v7 = *((_DWORD *)this + 48);
        if ( !v7 || v2 >= (*((_DWORD *)this + 49) - v7) / 96 )
        {
          _invalid_parameter_noinfo();
          v3 = v18;
          v5 = 0.0;
        }
        v8 = v19 + *((_DWORD *)this + 48);
        v17 = *(float *)(v8 + 52) - v22;
        *(float *)(v8 + 52) = v17;
        if ( v17 <= v5 && v16 )
        {
          (*(void (__thiscall **)(ParticleSystemEx *, int))(*(_DWORD *)this + 24))(this, v8);
          v21 = ++v6;
          if ( v6 > *((_DWORD *)this + 82) )
          {
            *((float *)this + 52) = 0.0;
            v16 = 0;
          }
          v5 = 0.0;
          v3 = v18;
        }
        if ( *((float *)this + 70) <= (double)*(float *)(v8 + 52) )
        {
          v9 = *(float *)(v8 + 56) - *(float *)(v8 + 52);
          if ( *((float *)this + 84) + *((float *)this + 71) > v9 )
          {
            v10 = *(_DWORD *)(v8 + 48);
            v11 = (int)((v9 - *((float *)this + 84)) / *((float *)this + 71) * (double)HIBYTE(v10));
            if ( v11 < 0 )
              v11 = 0;
            v12 = *(unsigned __int8 *)(v8 + 49) | (((v11 << 8) | *(unsigned __int8 *)(v8 + 50)) << 8);
            v13 = (unsigned __int8)v10;
            v6 = v21;
            *(_DWORD *)(v8 + 44) = v13 | (v12 << 8);
          }
        }
        else
        {
          *(_DWORD *)(v8 + 44) = (unsigned __int8)*(_DWORD *)(v8 + 48)
                               | ((*(unsigned __int8 *)(v8 + 49)
                                 | ((*(unsigned __int8 *)(v8 + 50)
                                   | ((unsigned int)(__int64)(*(float *)(v8 + 52)
                                                            / *((float *)this + 70)
                                                            * (double)HIBYTE(*(_DWORD *)(v8 + 48))) << 8)) << 8)) << 8);
        }
        v23 = *(float *)(v8 + 24) * v3;
        v24 = *(float *)(v8 + 28) * v3;
        v25 = *(float *)(v8 + 32) * v3;
        *(float *)v8 = *(float *)v8 + v23;
        *(float *)(v8 + 4) = *(float *)(v8 + 4) + v24;
        *(float *)(v8 + 8) = *(float *)(v8 + 8) + v25;
        v26 = *((float *)this + 66) * v3;
        v27 = *((float *)this + 67) * v3;
        v28 = v3 * *((float *)this + 68);
        *(float *)(v8 + 24) = *(float *)(v8 + 24) + v26;
        *(float *)(v8 + 28) = v27 + *(float *)(v8 + 28);
        *(float *)(v8 + 32) = *(float *)(v8 + 32) + v28;
        *(float *)(v8 + 36) = *(float *)(v8 + 40) * v3 + *(float *)(v8 + 36);
        *(float *)(v8 + 64) = *((float *)this + 90) * v3 + *(float *)(v8 + 64);
        *(float *)(v8 + 60) = *((float *)this + 90) * v3 + *(float *)(v8 + 60);
        if ( v5 > *(float *)(v8 + 64) )
          *(float *)(v8 + 64) = v5;
        if ( v5 > *(float *)(v8 + 60) )
          *(float *)(v8 + 60) = v5;
        if ( v5 != *(float *)(v8 + 68) && *(float *)(v8 + 68) > (double)*(float *)(v8 + 4) )
        {
          *(float *)v8 = 9999.0;
          *(float *)(v8 + 4) = -9999.0;
          *(float *)(v8 + 8) = 9999.0;
        }
        v19 += 96;
        ++v2;
      }
      while ( (signed int)v2 < *((_DWORD *)this + 51) );
    }
    if ( v16 )
    {
      while ( 1 )
      {
        v14 = *((_DWORD *)this + 51);
        if ( (signed int)v14 >= *((_DWORD *)this + 54) )
          break;
        v15 = *((_DWORD *)this + 48);
        if ( !v15 || v14 >= (*((_DWORD *)this + 49) - v15) / 96 )
          _invalid_parameter_noinfo();
        (*(void (__thiscall **)(ParticleSystemEx *, unsigned int))(*(_DWORD *)this + 24))(
          this,
          *((_DWORD *)this + 48) + 96 * v14);
        ++*((_DWORD *)this + 51);
        if ( ++v6 > *((_DWORD *)this + 82) )
        {
          *((float *)this + 52) = 0.0;
          return;
        }
      }
    }
  }
}
