/*
 * func-name: sub_1019A9D0
 * func-address: 0x1019a9d0
 * callers: 0x100160b8
 * callees: 0x10015e3d
 */

_DWORD *__thiscall sub_1019A9D0(_DWORD *this, void *a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // eax
  int v6; // edi
  int v7; // ecx
  int v8; // edx
  bool v9; // cc
  float *v10; // eax
  float v11; // ecx
  float v12; // eax
  float v14; // [esp+4h] [ebp-Ch] BYREF
  float v15; // [esp+8h] [ebp-8h]
  float v16; // [esp+Ch] [ebp-4h]

  v3 = this[3];
  v4 = v3 + 4;
  if ( (unsigned int)(v3 + 4) <= this[2] )
  {
    v5 = *(_DWORD *)(v3 + this[1]);
    this[3] = v4;
    if ( v5 )
    {
      v6 = v5;
      do
      {
        v7 = this[3];
        v14 = 0.0;
        v8 = v7 + 12;
        v9 = (unsigned int)(v7 + 12) <= this[2];
        v15 = 0.0;
        v16 = 0.0;
        if ( v9 )
        {
          v10 = (float *)(v7 + this[1]);
          v14 = *v10;
          v11 = v10[1];
          v12 = v10[2];
          v15 = v11;
          v16 = v12;
          this[3] = v8;
        }
        sub_10015E3D(a2, &v14);
        --v6;
      }
      while ( v6 );
    }
  }
  return this;
}
