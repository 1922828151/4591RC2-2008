/*
 * func-name: sub_10005660
 * func-address: 0x10005660
 * callers: 0x10002780
 * callees: 0x100073f0, 0x10010510, 0x10019586
 */

_DWORD *__thiscall sub_10005660(_DWORD *this, _DWORD *a2)
{
  int v3; // eax
  int v4; // esi
  _DWORD *result; // eax
  unsigned int v6; // esi
  const void *v7; // edi
  char *v8; // ecx
  bool v9; // zf
  int v10; // esi
  rsize_t v11; // eax
  char *v12; // esi
  _DWORD v13[8]; // [esp+0h] [ebp-40h] BYREF
  _DWORD *v14; // [esp+20h] [ebp-20h]
  _DWORD *v15; // [esp+28h] [ebp-18h]
  _DWORD *v16; // [esp+30h] [ebp-10h]
  int v17; // [esp+3Ch] [ebp-4h]

  v16 = v13;
  v3 = this[1];
  if ( v3 )
    v4 = (this[2] - v3) >> 2;
  else
    v4 = 0;
  result = a2;
  a2[1] = 0;
  a2[2] = 0;
  a2[3] = 0;
  if ( v4 )
  {
    if ( (unsigned __int8)sub_100073F0() )
    {
      v17 = 0;
      v6 = this[2];
      v15 = 0;
      if ( this[1] > v6 )
        invalid_parameter_noinfo();
      v15 = this;
      v7 = (const void *)this[1];
      v14 = 0;
      if ( (unsigned int)v7 > this[2] )
        invalid_parameter_noinfo();
      v14 = this;
      v8 = (char *)a2[1];
      v13[6] = v15;
      v13[7] = v6;
      v13[4] = this;
      v13[5] = v7;
      v10 = (int)(v6 - (_DWORD)v7) >> 2;
      v9 = v10 == 0;
      v11 = 4 * v10;
      v12 = &v8[4 * v10];
      if ( !v9 )
        memmove_s(v8, v11, v7, v11);
      a2[2] = v12;
      v17 = -1;
      return a2;
    }
    else
    {
      return a2;
    }
  }
  return result;
}
