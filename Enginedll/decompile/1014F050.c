/*
 * func-name: sub_1014F050
 * func-address: 0x1014f050
 * callers: 0x1014a440
 * callees: 0x1014ecb0
 */

_DWORD *__thiscall sub_1014F050(_DWORD *this, int *a2)
{
  _DWORD *v2; // edx
  int *v3; // eax
  _DWORD *v4; // edi
  _DWORD *v5; // esi
  _DWORD *v6; // eax
  int v8[2]; // [esp+Ch] [ebp-10h] BYREF
  int v9; // [esp+14h] [ebp-8h] BYREF

  v2 = (_DWORD *)this[1];
  v3 = (int *)v2[1];
  while ( !*((_BYTE *)v3 + 21) )
  {
    if ( v3[3] >= *a2 )
    {
      v2 = v3;
      v3 = (int *)*v3;
    }
    else
    {
      v3 = (int *)v3[2];
    }
  }
  v4 = v2;
  v5 = this;
  if ( v2 == (_DWORD *)this[1] || *a2 < v2[3] )
  {
    v8[0] = *a2;
    v8[1] = 0;
    v6 = sub_1014ECB0((int)this, &v9, (int)this, v2, v8);
    v5 = (_DWORD *)*v6;
    v4 = (_DWORD *)v6[1];
  }
  if ( !v5 )
    invalid_parameter_noinfo();
  if ( v4 == (_DWORD *)v5[1] )
    invalid_parameter_noinfo();
  return v4 + 4;
}
