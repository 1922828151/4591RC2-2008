/*
 * func-name: sub_100E3200
 * func-address: 0x100e3200
 * callers: 0x100093db
 * callees: none
 */

_DWORD *__thiscall sub_100E3200(_DWORD *this, _DWORD *a2, _DWORD *a3)
{
  int *v3; // edx
  int *v4; // eax
  int *v5; // eax
  int *v6; // ecx
  int v7; // edx
  _DWORD *result; // eax
  int v9; // ecx
  _DWORD v10[2]; // [esp+8h] [ebp-10h] BYREF
  _DWORD v11[2]; // [esp+10h] [ebp-8h] BYREF

  v3 = (int *)this[1];
  v4 = (int *)v3[1];
  while ( !*((_BYTE *)v4 + 33) )
  {
    if ( v4[3] >= *a3 )
    {
      v3 = v4;
      v4 = (int *)*v4;
    }
    else
    {
      v4 = (int *)v4[2];
    }
  }
  v5 = (int *)this[1];
  v10[1] = v3;
  v10[0] = this;
  if ( v3 == v5 || *a3 < v3[3] )
  {
    v11[0] = this;
    v11[1] = v5;
    v6 = v11;
  }
  else
  {
    v6 = v10;
  }
  v7 = *v6;
  result = a2;
  v9 = v6[1];
  *a2 = v7;
  a2[1] = v9;
  return result;
}
