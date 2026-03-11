/*
 * func-name: ?Tick@RandomTextureParticlesEx@@UAEXXZ_0
 * func-address: 0x100ad9c0
 * callers: 0x1000849f
 * callees: none
 */

void __thiscall RandomTextureParticlesEx::Tick(RandomTextureParticlesEx *this)
{
  unsigned int v2; // ebp
  double v3; // st7
  bool v4; // zf
  int v5; // ebx
  int v6; // eax
  int v7; // edi
  unsigned int v8; // edi
  int v9; // eax
  bool v10; // [esp+13h] [ebp-45h]
  float v11; // [esp+14h] [ebp-44h]
  float v12; // [esp+18h] [ebp-40h]
  float v13; // [esp+1Ch] [ebp-3Ch]
  int v14; // [esp+1Ch] [ebp-3Ch]
  double v15; // [esp+28h] [ebp-30h]
  float v16; // [esp+34h] [ebp-24h]
  float v17; // [esp+38h] [ebp-20h]
  float v18; // [esp+3Ch] [ebp-1Ch]
  float v19; // [esp+40h] [ebp-18h]
  float v20; // [esp+44h] [ebp-14h]
  float v21; // [esp+48h] [ebp-10h]

  v2 = 0;
  if ( !*((_DWORD *)this + 46) )
  {
    v12 = GDeltaTime;
    v3 = GDeltaTime;
    if ( GDeltaTime > 0.1000000014901161 )
    {
      v12 = 0.1;
      v3 = (float)0.1;
    }
    v4 = *((_BYTE *)this + 212) == 0;
    v15 = 1000.0 * v3;
    v13 = v15 + *((float *)this + 52);
    *((float *)this + 52) = v13;
    v10 = v4 && *((float *)this + 57) <= (double)v13;
    v5 = 0;
    if ( *((int *)this + 51) > 0 )
    {
      v14 = 0;
      do
      {
        v6 = *((_DWORD *)this + 48);
        if ( !v6 || v2 >= (*((_DWORD *)this + 49) - v6) / 96 )
        {
          _invalid_parameter_noinfo();
          v3 = v12;
        }
        v7 = v14 + *((_DWORD *)this + 48);
        v11 = *(float *)(v7 + 52) - v15;
        *(float *)(v7 + 52) = v11;
        if ( v11 <= 0.0 && v10 )
        {
          (*(void (__thiscall **)(RandomTextureParticlesEx *, int))(*(_DWORD *)this + 24))(this, v7);
          if ( ++v5 > *((_DWORD *)this + 82) )
          {
            v10 = 0;
            *((float *)this + 52) = 0.0;
          }
          v3 = v12;
        }
        if ( *((float *)this + 70) > (double)*(float *)(v7 + 52) )
          *(_DWORD *)(v7 + 44) = (unsigned __int8)*(_DWORD *)(v7 + 48)
                               | ((*(unsigned __int8 *)(v7 + 49)
                                 | ((*(unsigned __int8 *)(v7 + 50)
                                   | ((unsigned int)(__int64)(*(float *)(v7 + 52)
                                                            / *((float *)this + 70)
                                                            * (double)HIBYTE(*(_DWORD *)(v7 + 48))) << 8)) << 8)) << 8);
        v16 = *(float *)(v7 + 24) * v3;
        v17 = *(float *)(v7 + 28) * v3;
        v18 = *(float *)(v7 + 32) * v3;
        *(float *)v7 = *(float *)v7 + v16;
        *(float *)(v7 + 4) = *(float *)(v7 + 4) + v17;
        *(float *)(v7 + 8) = *(float *)(v7 + 8) + v18;
        v19 = *((float *)this + 66) * v3;
        v20 = *((float *)this + 67) * v3;
        v21 = v3 * *((float *)this + 68);
        *(float *)(v7 + 24) = *(float *)(v7 + 24) + v19;
        *(float *)(v7 + 28) = v20 + *(float *)(v7 + 28);
        *(float *)(v7 + 32) = *(float *)(v7 + 32) + v21;
        *(float *)(v7 + 36) = *(float *)(v7 + 40) * v3 + *(float *)(v7 + 36);
        *(float *)(v7 + 64) = *((float *)this + 104) * v3 + *(float *)(v7 + 64);
        *(float *)(v7 + 60) = *((float *)this + 104) * v3 + *(float *)(v7 + 60);
        if ( 0.0 != *(float *)(v7 + 68) && *(float *)(v7 + 68) > (double)*(float *)(v7 + 4) )
        {
          *(float *)v7 = 9999.0;
          *(float *)(v7 + 4) = -9999.0;
          *(float *)(v7 + 8) = 9999.0;
        }
        v14 += 96;
        ++v2;
      }
      while ( (signed int)v2 < *((_DWORD *)this + 51) );
    }
    if ( v10 )
    {
      while ( 1 )
      {
        v8 = *((_DWORD *)this + 51);
        if ( (signed int)v8 >= *((_DWORD *)this + 54) )
          break;
        v9 = *((_DWORD *)this + 48);
        if ( !v9 || v8 >= (*((_DWORD *)this + 49) - v9) / 96 )
          _invalid_parameter_noinfo();
        (*(void (__thiscall **)(RandomTextureParticlesEx *, unsigned int))(*(_DWORD *)this + 24))(
          this,
          *((_DWORD *)this + 48) + 96 * v8);
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
