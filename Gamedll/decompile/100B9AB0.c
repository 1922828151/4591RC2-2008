/*
 * func-name: ?Tick@PhysicsParticles@@UAEXXZ_0
 * func-address: 0x100b9ab0
 * callers: 0x10015ec9
 * callees: none
 */

void __thiscall PhysicsParticles::Tick(PhysicsParticles *this)
{
  bool v2; // zf
  double v3; // st7
  int v4; // ebx
  unsigned int v5; // ebp
  int v6; // eax
  int v7; // esi
  int v8; // ecx
  double v9; // st6
  int v10; // esi
  float *v11; // eax
  int v12; // ecx
  float *v13; // eax
  double v14; // st5
  unsigned int v15; // esi
  int v16; // eax
  int v17; // edx
  bool v18; // [esp+15h] [ebp-59h]
  float v19; // [esp+16h] [ebp-58h]
  float v20; // [esp+1Ah] [ebp-54h]
  float v21; // [esp+1Ah] [ebp-54h]
  int i; // [esp+1Ah] [ebp-54h]
  double v23; // [esp+26h] [ebp-48h]
  float v24; // [esp+32h] [ebp-3Ch]
  float v25; // [esp+36h] [ebp-38h]
  float v26; // [esp+3Ah] [ebp-34h]
  float v27[3]; // [esp+4Ah] [ebp-24h] BYREF
  _BYTE v28[12]; // [esp+56h] [ebp-18h] BYREF
  _BYTE v29[12]; // [esp+62h] [ebp-Ch] BYREF

  v20 = GDeltaTime;
  if ( GDeltaTime > 0.1000000014901161 )
    v20 = 0.1;
  v2 = *((_BYTE *)this + 212) == 0;
  v23 = v20 * 1000.0;
  v21 = v23 + *((float *)this + 52);
  *((float *)this + 52) = v21;
  v18 = v2 && *((float *)this + 57) <= (double)v21;
  v3 = 0.0;
  v4 = 0;
  v5 = 0;
  for ( i = 0; (signed int)v5 < *((_DWORD *)this + 51); v4 += 96 )
  {
    v6 = *((_DWORD *)this + 48);
    if ( !v6 || v5 >= (*((_DWORD *)this + 49) - v6) / 96 )
    {
      _invalid_parameter_noinfo();
      v3 = 0.0;
    }
    v7 = *((_DWORD *)this + 48);
    v8 = *(_DWORD *)(v7 + v4 + 92);
    v9 = *(float *)(v7 + v4 + 52) - v23;
    v10 = v4 + v7;
    v19 = v9;
    *(float *)(v10 + 52) = v19;
    if ( !v8 || v19 <= v3 && v18 )
    {
      if ( v8 && (++i, i > *((_DWORD *)this + 82)) )
      {
        v17 = *(_DWORD *)this;
        *((float *)this + 52) = v3;
        v18 = 0;
        (*(void (__thiscall **)(PhysicsParticles *, int))(v17 + 24))(this, v10);
      }
      else
      {
        (*(void (__thiscall **)(PhysicsParticles *, int))(*(_DWORD *)this + 24))(this, v10);
      }
    }
    if ( *((float *)this + 70) > (double)*(float *)(v10 + 52) )
      *(_DWORD *)(v10 + 44) = (unsigned __int8)*(_DWORD *)(v10 + 48)
                            | ((*(unsigned __int8 *)(v10 + 49)
                              | ((*(unsigned __int8 *)(v10 + 50)
                                | ((unsigned int)(__int64)(*(float *)(v10 + 52)
                                                         / *((float *)this + 70)
                                                         * (double)HIBYTE(*(_DWORD *)(v10 + 48))) << 8)) << 8)) << 8);
    v11 = (float *)(*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(v10 + 92) + 40))(*(_DWORD *)(v10 + 92), v28);
    v12 = *(_DWORD *)(v10 + 92);
    *(float *)v10 = *v11;
    *(float *)(v10 + 4) = v11[1];
    *(float *)(v10 + 8) = v11[2];
    v13 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v12 + 232))(v12, v29);
    *(float *)(v10 + 24) = *v13;
    *(float *)(v10 + 28) = v13[1];
    *(float *)(v10 + 32) = v13[2];
    v14 = *((float *)this + 95);
    v24 = *((float *)this + 66) * v14;
    v25 = *((float *)this + 67) * v14;
    v26 = v14 * *((float *)this + 68);
    v27[0] = v24;
    v27[1] = v25;
    v27[2] = v26;
    (*(void (__thiscall **)(_DWORD, float *, _DWORD, int))(**(_DWORD **)(v10 + 92) + 288))(
      *(_DWORD *)(v10 + 92),
      v27,
      0,
      1);
    v3 = 0.0;
    if ( 0.0 != *(float *)(v10 + 68) && *(float *)(v10 + 68) > (double)*(float *)(v10 + 4) )
    {
      *(float *)v10 = 9999.0;
      *(float *)(v10 + 4) = -9999.0;
      *(float *)(v10 + 8) = 9999.0;
    }
    if ( *(float *)(v10 + 52) <= 0.0 && *((_BYTE *)this + 212) )
      *(_DWORD *)(v10 + 44) = 0;
    ++v5;
  }
  if ( v18 )
  {
    while ( 1 )
    {
      v15 = *((_DWORD *)this + 51);
      if ( (signed int)v15 >= *((_DWORD *)this + 54) )
        break;
      v16 = *((_DWORD *)this + 48);
      if ( !v16 || v15 >= (*((_DWORD *)this + 49) - v16) / 96 )
        _invalid_parameter_noinfo();
      (*(void (__thiscall **)(PhysicsParticles *, unsigned int))(*(_DWORD *)this + 24))(
        this,
        *((_DWORD *)this + 48) + 96 * v15);
      ++*((_DWORD *)this + 51);
      if ( ++i > *((_DWORD *)this + 82) )
      {
        *((float *)this + 52) = 0.0;
        return;
      }
    }
  }
}
