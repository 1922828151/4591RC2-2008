/*
 * func-name: ?Tick@TraceLineSystemEx@@UAEXXZ_0
 * func-address: 0x100cb020
 * callers: 0x10012c3d
 * callees: none
 */

void __thiscall TraceLineSystemEx::Tick(TraceLineSystemEx *this)
{
  double v1; // st7
  bool v3; // zf
  unsigned int v4; // ebp
  int v5; // ebx
  int v6; // eax
  int v7; // edi
  unsigned int v8; // edi
  int v9; // eax
  bool v10; // [esp+7h] [ebp-45h]
  float v11; // [esp+8h] [ebp-44h]
  float v12; // [esp+Ch] [ebp-40h]
  float v13; // [esp+10h] [ebp-3Ch]
  int v14; // [esp+10h] [ebp-3Ch]
  double v15; // [esp+1Ch] [ebp-30h]
  float v16; // [esp+28h] [ebp-24h]
  float v17; // [esp+2Ch] [ebp-20h]
  float v18; // [esp+30h] [ebp-1Ch]
  float v19; // [esp+34h] [ebp-18h]
  float v20; // [esp+38h] [ebp-14h]
  float v21; // [esp+3Ch] [ebp-10h]

  v12 = GDeltaTime;
  v1 = GDeltaTime;
  if ( GDeltaTime > 0.1000000014901161 )
  {
    v12 = 0.1;
    v1 = (float)0.1;
  }
  v3 = *((_BYTE *)this + 200) == 0;
  v15 = 1000.0 * v1;
  v13 = v15 + *((float *)this + 49);
  *((float *)this + 49) = v13;
  v10 = v3 && *((float *)this + 53) <= (double)v13;
  v4 = 0;
  v5 = 0;
  if ( *((int *)this + 48) > 0 )
  {
    v14 = 0;
    do
    {
      v6 = *((_DWORD *)this + 45);
      if ( !v6 || v4 >= (*((_DWORD *)this + 46) - v6) / 184 )
      {
        _invalid_parameter_noinfo();
        v1 = v12;
      }
      v7 = v14 + *((_DWORD *)this + 45);
      v11 = *(float *)(v7 + 64) - v15;
      *(float *)(v7 + 64) = v11;
      if ( v11 <= 0.0 && v10 )
      {
        (*(void (__thiscall **)(TraceLineSystemEx *, int))(*(_DWORD *)this + 20))(this, v7);
        if ( ++v5 > *((_DWORD *)this + 75) )
        {
          v10 = 0;
          *((float *)this + 49) = 0.0;
        }
        v1 = v12;
      }
      if ( *((float *)this + 64) > (double)*(float *)(v7 + 64) )
        *(_DWORD *)(v7 + 56) = (unsigned __int8)*(_DWORD *)(v7 + 60)
                             | ((*(unsigned __int8 *)(v7 + 61)
                               | ((*(unsigned __int8 *)(v7 + 62)
                                 | ((unsigned int)(__int64)(*(float *)(v7 + 64)
                                                          / *((float *)this + 64)
                                                          * (double)HIBYTE(*(_DWORD *)(v7 + 60))) << 8)) << 8)) << 8);
      v16 = *(float *)(v7 + 36) * v1;
      v17 = *(float *)(v7 + 40) * v1;
      v18 = *(float *)(v7 + 44) * v1;
      *(float *)v7 = *(float *)v7 + v16;
      *(float *)(v7 + 4) = *(float *)(v7 + 4) + v17;
      *(float *)(v7 + 8) = *(float *)(v7 + 8) + v18;
      v19 = *((float *)this + 60) * v1;
      v20 = *((float *)this + 61) * v1;
      v21 = v1 * *((float *)this + 62);
      *(float *)(v7 + 36) = *(float *)(v7 + 36) + v19;
      *(float *)(v7 + 40) = v20 + *(float *)(v7 + 40);
      *(float *)(v7 + 44) = *(float *)(v7 + 44) + v21;
      *(float *)(v7 + 48) = *(float *)(v7 + 52) * v1 + *(float *)(v7 + 48);
      *(float *)(v7 + 68) = *((float *)this + 89) * v1 + *(float *)(v7 + 68);
      if ( 0.0 != *(float *)(v7 + 72) && *(float *)(v7 + 72) > (double)*(float *)(v7 + 4) )
      {
        *(float *)v7 = 9999.0;
        *(float *)(v7 + 4) = -9999.0;
        *(float *)(v7 + 8) = 9999.0;
      }
      v14 += 184;
      ++v4;
    }
    while ( (signed int)v4 < *((_DWORD *)this + 48) );
  }
  if ( v10 )
  {
    while ( 1 )
    {
      v8 = *((_DWORD *)this + 48);
      if ( (signed int)v8 >= *((_DWORD *)this + 51) )
        break;
      v9 = *((_DWORD *)this + 45);
      if ( !v9 || v8 >= (*((_DWORD *)this + 46) - v9) / 184 )
        _invalid_parameter_noinfo();
      (*(void (__thiscall **)(TraceLineSystemEx *, unsigned int))(*(_DWORD *)this + 20))(
        this,
        *((_DWORD *)this + 45) + 184 * v8);
      ++*((_DWORD *)this + 48);
      if ( ++v5 > *((_DWORD *)this + 75) )
      {
        *((float *)this + 49) = 0.0;
        return;
      }
    }
  }
}
