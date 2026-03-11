/*
 * func-name: sub_101C3150
 * func-address: 0x101c3150
 * callers: 0x1000cdb0
 * callees: 0x10004895, 0x1001802a
 */

int __thiscall sub_101C3150(_DWORD *this, _DWORD *a2)
{
  _DWORD *v3; // edi
  float v4; // ebx
  _DWORD *v5; // edx
  float *v6; // eax
  _DWORD *v8; // [esp+10h] [ebp-14h] BYREF
  float v9; // [esp+14h] [ebp-10h]
  char v10[4]; // [esp+18h] [ebp-Ch] BYREF
  int v11; // [esp+1Ch] [ebp-8h]

  sub_1001802A((int)&v8, (int)a2);
  v3 = v8;
  v11 = this[2];
  if ( !v8 || v8 != this + 1 )
    _invalid_parameter_noinfo();
  v4 = v9;
  if ( LODWORD(v9) == v11 )
  {
    v5 = (_DWORD *)*a2;
    v9 = 0.0;
    v8 = v5;
    v6 = (float *)sub_10004895((int)v10, (int)&v8);
    v3 = *(_DWORD **)v6;
    v4 = v6[1];
  }
  if ( !v3 )
    _invalid_parameter_noinfo();
  if ( LODWORD(v4) == v3[1] )
    _invalid_parameter_noinfo();
  return LODWORD(v4) + 12;
}
