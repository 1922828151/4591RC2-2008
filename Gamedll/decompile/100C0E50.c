/*
 * func-name: ?setNumNodes@WaterDecal@@QAEXH@Z_0
 * func-address: 0x100c0e50
 * callers: 0x100188f9
 * callees: 0x100028d3
 */

void __thiscall WaterDecal::setNumNodes(WaterDecal *this, int a2)
{
  int v2; // eax
  _DWORD *v3; // ebx
  unsigned int v4; // esi
  int i; // edi
  int v6; // eax
  int v7; // eax
  int v8[7]; // [esp-1Ch] [ebp-4Ch] BYREF
  WaterDecal *v9; // [esp+10h] [ebp-20h]
  float v10[7]; // [esp+14h] [ebp-1Ch] BYREF

  v2 = *((_DWORD *)this + 45);
  v3 = (_DWORD *)((char *)this + 176);
  v9 = this;
  if ( v2 )
    v2 = (*((_DWORD *)this + 46) - v2) / 28;
  if ( v2 != a2 )
  {
    v10[1] = 0.0;
    v10[2] = 0.0;
    v10[3] = 0.0;
    qmemcpy(v8, v10, sizeof(v8));
    sub_100028D3(v3, a2, v8[0], v8[1], v8[2], v8[3], v8[4], v8[5], v8[6]);
    v4 = 0;
    for ( i = 0; ; i += 28 )
    {
      v6 = v3[1];
      if ( !v6 || v4 >= (v3[2] - v6) / 28 )
        break;
      v7 = v3[1];
      if ( !v7 || v4 >= (v3[2] - v7) / 28 )
        _invalid_parameter_noinfo();
      *(float *)(i + v3[1]) = 0.0;
      ++v4;
    }
    *((_DWORD *)v9 + 86) = 0;
  }
}
