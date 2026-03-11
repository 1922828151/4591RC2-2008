/*
 * func-name: ?Tick@ParticleSystem@@UAEXXZ_0
 * func-address: 0x100acc30
 * callers: 0x10010d1b
 * callees: 0x102c9fe0
 */

void __thiscall ParticleSystem::Tick(ParticleSystem *this)
{
  unsigned int v2; // ebp
  double v3; // st7
  bool v4; // zf
  int v5; // ebx
  int v6; // eax
  int v7; // edi
  double v8; // st6
  unsigned int v9; // ebx
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  unsigned int v13; // edi
  int v14; // eax
  bool v15; // [esp+17h] [ebp-49h]
  float v16; // [esp+18h] [ebp-48h]
  float v17; // [esp+1Ch] [ebp-44h]
  int v18; // [esp+20h] [ebp-40h]
  float v19; // [esp+24h] [ebp-3Ch]
  int v20; // [esp+24h] [ebp-3Ch]
  double v21; // [esp+30h] [ebp-30h]
  float v22; // [esp+3Ch] [ebp-24h]
  float v23; // [esp+40h] [ebp-20h]
  float v24; // [esp+44h] [ebp-1Ch]
  float v25; // [esp+48h] [ebp-18h]
  float v26; // [esp+4Ch] [ebp-14h]
  float v27; // [esp+50h] [ebp-10h]

  v2 = 0;
  if ( !*((_DWORD *)this + 46) )
  {
    v17 = GDeltaTime;
    v3 = GDeltaTime;
    if ( GDeltaTime > 0.1000000014901161 )
    {
      v17 = 0.1;
      v3 = (float)0.1;
    }
    v4 = *((_BYTE *)this + 212) == 0;
    v21 = 1000.0 * v3;
    v19 = v21 + *((float *)this + 52);
    *((float *)this + 52) = v19;
    v15 = v4 && *((float *)this + 57) <= (double)v19;
    v5 = 0;
    v20 = 0;
    if ( *((int *)this + 51) > 0 )
    {
      v18 = 0;
      do
      {
        v6 = *((_DWORD *)this + 48);
        if ( !v6 || v2 >= (*((_DWORD *)this + 49) - v6) / 96 )
        {
          _invalid_parameter_noinfo();
          v3 = v17;
        }
        v7 = v18 + *((_DWORD *)this + 48);
        v16 = *(float *)(v7 + 52) - v21;
        *(float *)(v7 + 52) = v16;
        if ( v16 <= 0.0 && v15 )
        {
          (*(void (__thiscall **)(ParticleSystem *, int))(*(_DWORD *)this + 24))(this, v7);
          v20 = ++v5;
          if ( v5 > *((_DWORD *)this + 82) )
          {
            v15 = 0;
            *((float *)this + 52) = 0.0;
          }
          v3 = v17;
        }
        if ( *((float *)this + 70) <= (double)*(float *)(v7 + 52) )
        {
          v8 = *(float *)(v7 + 56) - *(float *)(v7 + 52);
          if ( *((float *)this + 84) + *((float *)this + 71) > v8 )
          {
            v9 = *(_DWORD *)(v7 + 48);
            v10 = (int)((v8 - *((float *)this + 84)) / *((float *)this + 71) * (double)HIBYTE(v9));
            if ( v10 < 0 )
              v10 = 0;
            v11 = *(unsigned __int8 *)(v7 + 49) | (((v10 << 8) | *(unsigned __int8 *)(v7 + 50)) << 8);
            v12 = (unsigned __int8)v9;
            v5 = v20;
            *(_DWORD *)(v7 + 44) = v12 | (v11 << 8);
          }
        }
        else
        {
          *(_DWORD *)(v7 + 44) = (unsigned __int8)*(_DWORD *)(v7 + 48)
                               | ((*(unsigned __int8 *)(v7 + 49)
                                 | ((*(unsigned __int8 *)(v7 + 50)
                                   | ((unsigned int)(__int64)(*(float *)(v7 + 52)
                                                            / *((float *)this + 70)
                                                            * (double)HIBYTE(*(_DWORD *)(v7 + 48))) << 8)) << 8)) << 8);
        }
        v22 = *(float *)(v7 + 24) * v3;
        v23 = *(float *)(v7 + 28) * v3;
        v24 = *(float *)(v7 + 32) * v3;
        *(float *)v7 = *(float *)v7 + v22;
        *(float *)(v7 + 4) = *(float *)(v7 + 4) + v23;
        *(float *)(v7 + 8) = *(float *)(v7 + 8) + v24;
        v25 = *((float *)this + 66) * v3;
        v26 = *((float *)this + 67) * v3;
        v27 = v3 * *((float *)this + 68);
        *(float *)(v7 + 24) = *(float *)(v7 + 24) + v25;
        *(float *)(v7 + 28) = v26 + *(float *)(v7 + 28);
        *(float *)(v7 + 32) = *(float *)(v7 + 32) + v27;
        if ( 0.0 != *(float *)(v7 + 68) && *(float *)(v7 + 68) > (double)*(float *)(v7 + 4) )
        {
          *(float *)v7 = 9999.0;
          *(float *)(v7 + 4) = -9999.0;
          *(float *)(v7 + 8) = 9999.0;
        }
        v18 += 96;
        ++v2;
      }
      while ( (signed int)v2 < *((_DWORD *)this + 51) );
    }
    if ( v15 )
    {
      while ( 1 )
      {
        v13 = *((_DWORD *)this + 51);
        if ( (signed int)v13 >= *((_DWORD *)this + 54) )
          break;
        v14 = *((_DWORD *)this + 48);
        if ( !v14 || v13 >= (*((_DWORD *)this + 49) - v14) / 96 )
          _invalid_parameter_noinfo();
        (*(void (__thiscall **)(ParticleSystem *, unsigned int))(*(_DWORD *)this + 24))(
          this,
          *((_DWORD *)this + 48) + 96 * v13);
        ++*((_DWORD *)this + 51);
        if ( ++v5 > *((_DWORD *)this + 82) )
        {
          *((float *)this + 52) = 0.0;
          return;
        }
      }
    }
  }
}
