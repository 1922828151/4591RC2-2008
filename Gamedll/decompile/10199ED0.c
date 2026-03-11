/*
 * func-name: sub_10199ED0
 * func-address: 0x10199ed0
 * callers: 0x1000a29f
 * callees: 0x10007509
 */

float *__thiscall sub_10199ED0(float *this)
{
  int v2; // edi
  int v3; // ebx
  bool v4; // cc
  unsigned int v5; // eax
  unsigned int v6; // edi
  unsigned int v7; // eax
  unsigned int v9; // [esp+18h] [ebp-18h]
  int v10[2]; // [esp+1Ch] [ebp-14h] BYREF

  v2 = (int)(this + 5);
  this[6] = 0.0;
  this[7] = 0.0;
  this[8] = 0.0;
  this[10] = 0.0;
  this[11] = 0.0;
  this[12] = 0.0;
  *this = 0.0;
  v3 = (int)(this + 9);
  this[1] = 0.0;
  *((_DWORD *)this + 2) = 3;
  this[3] = 0.30000001;
  this[4] = 0.0;
  v4 = *((_DWORD *)this + 6) <= *((_DWORD *)this + 7);
  v10[0] = (int)this[7];
  if ( !v4 )
    _invalid_parameter_noinfo();
  v5 = *(_DWORD *)(v2 + 4);
  v9 = v5;
  if ( v5 > *(_DWORD *)(v2 + 8) )
  {
    _invalid_parameter_noinfo();
    v5 = v9;
  }
  sub_10007509((int)v10, v2, v5, v2, v10[0]);
  v6 = *(_DWORD *)(v3 + 8);
  if ( *(_DWORD *)(v3 + 4) > v6 )
    _invalid_parameter_noinfo();
  v7 = *(_DWORD *)(v3 + 4);
  v4 = v7 <= *(_DWORD *)(v3 + 8);
  v10[0] = v7;
  if ( !v4 )
  {
    _invalid_parameter_noinfo();
    v7 = v10[0];
  }
  sub_10007509((int)v10, v3, v7, v3, v6);
  this[13] = 0.0;
  this[14] = 0.0;
  this[15] = 0.0;
  this[16] = 1.0;
  *((_DWORD *)this + 17) = 10;
  return this;
}
