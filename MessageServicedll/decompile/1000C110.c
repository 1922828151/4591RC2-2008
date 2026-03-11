/*
 * func-name: sub_1000C110
 * func-address: 0x1000c110
 * callers: 0x1000bf40
 * callees: 0x10007250, 0x10009cc0, 0x1000c220, 0x10029d92
 */

_DWORD *__thiscall sub_1000C110(_DWORD *this, _DWORD *a2)
{
  int v3; // eax
  unsigned int v4; // esi
  _DWORD *v5; // edi
  char *v6; // eax
  unsigned int v7; // esi
  const void *v8; // edi
  char *v9; // ecx
  bool v10; // zf
  int v11; // esi
  rsize_t v12; // eax
  char *v13; // esi
  _DWORD v15[9]; // [esp+0h] [ebp-44h] BYREF
  _DWORD *v16; // [esp+24h] [ebp-20h]
  _DWORD *v17; // [esp+2Ch] [ebp-18h]
  _DWORD *v18; // [esp+34h] [ebp-10h]
  int v19; // [esp+40h] [ebp-4h]

  v18 = v15;
  v3 = this[1];
  if ( v3 )
    v4 = (this[2] - v3) >> 2;
  else
    v4 = 0;
  v5 = a2;
  a2[1] = 0;
  a2[2] = 0;
  a2[3] = 0;
  if ( v4 )
  {
    if ( v4 > 0x3FFFFFFF )
      sub_1000C220();
    v6 = (char *)sub_10009CC0(v4);
    a2[1] = v6;
    a2[2] = v6;
    a2[3] = &v6[4 * v4];
    v19 = 0;
    v7 = this[2];
    v17 = 0;
    if ( this[1] > v7 )
      invalid_parameter_noinfo();
    v17 = this;
    v8 = (const void *)this[1];
    v16 = 0;
    if ( (unsigned int)v8 > this[2] )
      invalid_parameter_noinfo();
    v16 = this;
    v9 = (char *)a2[1];
    v15[7] = v17;
    v15[8] = v7;
    v15[5] = this;
    v15[6] = v8;
    v11 = (int)(v7 - (_DWORD)v8) >> 2;
    v10 = v11 == 0;
    v12 = 4 * v11;
    v13 = &v9[4 * v11];
    if ( !v10 )
      memmove_s(v9, v12, v8, v12);
    a2[2] = v13;
    v19 = -1;
    return a2;
  }
  return v5;
}
