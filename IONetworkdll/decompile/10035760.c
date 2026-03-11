/*
 * func-name: sub_10035760
 * func-address: 0x10035760
 * callers: 0x100356a0
 * callees: 0x10035730, 0x100359d0, 0x10035a30, 0x10035d50, 0x1004e870, 0x1004f112
 */

char *__thiscall sub_10035760(int *this, unsigned __int16 *a2, int a3, char *Source)
{
  int v5; // eax
  unsigned int v6; // ecx
  int v7; // edx
  int v8; // edx
  unsigned int v9; // ecx
  int v10; // edx
  int v11; // ecx
  _WORD *v12; // eax
  _WORD *v13; // eax
  int v14; // eax
  int v15; // esi
  char *result; // eax
  char *v17; // esi
  char *v18; // eax
  int v19; // esi
  int v20; // ecx
  int v21; // edi
  char *v22; // ecx
  int v23; // [esp+0h] [ebp-2Ch] BYREF
  char *v24; // [esp+14h] [ebp-18h]
  _DWORD v25[2]; // [esp+18h] [ebp-14h] BYREF
  int v26; // [esp+28h] [ebp-4h]
  unsigned int v27; // [esp+34h] [ebp+8h]

  v25[1] = &v23;
  v25[0] = *a2;
  v5 = this[1];
  if ( v5 )
    v6 = (this[3] - v5) >> 1;
  else
    v6 = 0;
  if ( v5 )
    v7 = (this[2] - v5) >> 1;
  else
    v7 = 0;
  if ( v7 == 0x7FFFFFFF )
    v5 = sub_100359D0(v6);
  if ( v5 )
    v8 = (this[2] - v5) >> 1;
  else
    v8 = 0;
  if ( v6 >= v8 + 1 )
  {
    v17 = (char *)this[2];
    v18 = Source;
    if ( (v17 - Source) >> 1 )
    {
      memmove_s(v17, 2u, v17 - 2, 2u);
      result = Source;
      this[2] = (int)(v17 + 2);
      v21 = (v17 - 2 - Source) >> 1;
      if ( v21 > 0 )
      {
        memmove_s(&v17[-2 * v21], 2 * v21, Source, 2 * v21);
        result = Source;
      }
      v22 = result + 2;
      do
      {
        *(_WORD *)result = v25[0];
        result += 2;
      }
      while ( result != v22 );
    }
    else
    {
      v19 = (v17 - Source) >> 1;
      if ( v19 )
      {
        memmove_s(Source + 2, 2 * v19, Source, 2 * v19);
        v18 = Source;
      }
      v26 = 2;
      sub_10035730(v25, (_WORD *)this[2], 1 - ((this[2] - (int)v18) >> 1));
      v26 = -1;
      this[2] += 2;
      v20 = this[2] - 2;
      for ( result = Source; result != (char *)v20; result += 2 )
        *(_WORD *)result = v25[0];
    }
  }
  else
  {
    if ( 0x7FFFFFFF - (v6 >> 1) >= v6 )
    {
      v9 = (v6 >> 1) + v6;
      v27 = v9;
    }
    else
    {
      v27 = 0;
      v9 = 0;
    }
    if ( v5 )
      v10 = (this[2] - v5) >> 1;
    else
      v10 = 0;
    if ( v9 < v10 + 1 )
    {
      if ( v5 )
        v11 = (this[2] - v5) >> 1;
      else
        v11 = 0;
      v27 = v11 + 1;
    }
    v24 = (char *)sub_10035A30();
    v26 = 0;
    v12 = (_WORD *)sub_10035D50(v24, (void *)this[1]);
    v13 = sub_10035730(v25, v12, 1);
    sub_10035D50(v13, Source);
    v26 = -1;
    v14 = this[1];
    if ( v14 )
      v15 = (this[2] - v14) >> 1;
    else
      v15 = 0;
    if ( v14 )
      operator delete(this[1]);
    result = v24;
    this[3] = (int)&v24[2 * v27];
    this[2] = (int)&result[2 * v15 + 2];
    this[1] = (int)result;
  }
  return result;
}
