/*
 * func-name: sub_100148C0
 * func-address: 0x100148c0
 * callers: 0x1000e370
 * callees: 0x1000acb0, 0x1000bcf0, 0x10014e40, 0x1003bd90, 0x1003c250, 0x1004e870
 */

_DWORD *__userpurge sub_100148C0@<eax>(_DWORD *a1@<eax>, _DWORD *a2)
{
  int v4; // edi
  int v5; // eax
  unsigned int v6; // edx
  int v8; // esi
  unsigned int v9; // ecx
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  unsigned int v13; // ecx
  int v14; // ecx
  int v15; // esi
  int v16; // [esp+Ch] [ebp+4h]

  if ( a2 == a1 )
    return a2;
  v4 = a1[1];
  if ( !v4 || (v5 = a1[2], (v6 = (a1[2] - v4) >> 2) == 0) )
  {
    sub_1000ACB0((int)a2);
    return a2;
  }
  v8 = a2[1];
  if ( v8 )
    v9 = (a2[2] - v8) >> 2;
  else
    v9 = 0;
  if ( v6 <= v9 )
  {
    sub_1000BCF0(v5, v4, v8);
    sub_1003BD90();
    v10 = a1[1];
    if ( v10 )
      v11 = a2[1] + 4 * ((a1[2] - v10) >> 2);
    else
      v11 = a2[1];
    a2[2] = v11;
    return a2;
  }
  v12 = 0;
  if ( v8 )
    v13 = (a2[3] - v8) >> 2;
  else
    v13 = 0;
  if ( v6 > v13 )
  {
    if ( v8 )
    {
      sub_1003BD90();
      operator delete(a2[1]);
    }
    v14 = a1[1];
    if ( v14 )
      v15 = (a1[2] - v14) >> 2;
    else
      v15 = 0;
    a2[1] = 0;
    a2[2] = 0;
    a2[3] = 0;
    if ( v15 && (unsigned __int8)sub_10014E40() )
      a2[2] = sub_1003C250(a1[1], a1[2]);
    return a2;
  }
  if ( v8 )
    v12 = (a2[2] - v8) >> 2;
  v16 = v4 + 4 * v12;
  sub_1000BCF0(v16, v4, v8);
  a2[2] = sub_1003C250(v16, a1[2]);
  return a2;
}
