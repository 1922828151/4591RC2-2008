/*
 * func-name: sub_10062030
 * func-address: 0x10062030
 * callers: 0x100625b0
 * callees: 0x10060f60, 0x10061520, 0x10061730, 0x100619a0, 0x10061bb0, 0x10061dd0, 0x1016a2f0, 0x101a2500, 0x101a2522
 */

_WORD *__thiscall sub_10062030(_DWORD *this, int a2, _WORD *a3, unsigned int a4, _WORD *a5)
{
  _WORD *result; // eax
  int v7; // ecx
  unsigned int v8; // edi
  int v9; // eax
  int v10; // eax
  unsigned int v11; // edi
  int v12; // eax
  int v13; // eax
  _WORD *v14; // eax
  _WORD *v15; // ebx
  _WORD *v16; // eax
  _WORD *v17; // eax
  _WORD *v18; // ecx
  void *v19; // ecx
  int v20; // eax
  _WORD *v21; // ebx
  _WORD *v22; // [esp-20h] [ebp-44h]
  _WORD *v23; // [esp-Ch] [ebp-30h]
  int v24; // [esp-8h] [ebp-2Ch]
  int v25; // [esp+0h] [ebp-24h] BYREF
  void *v26; // [esp+Ch] [ebp-18h]
  int v27; // [esp+10h] [ebp-14h]
  int *v28; // [esp+14h] [ebp-10h]
  int v29; // [esp+20h] [ebp-4h]
  unsigned int v30; // [esp+34h] [ebp+10h]

  result = a5;
  LOWORD(a5) = *a5;
  v7 = this[1];
  v28 = &v25;
  if ( v7 )
    v8 = (this[3] - v7) >> 1;
  else
    v8 = 0;
  if ( a4 )
  {
    if ( v7 )
      v9 = (this[2] - v7) >> 1;
    else
      v9 = 0;
    if ( 0x7FFFFFFF - v9 < a4 )
      sub_10060F60();
    if ( v7 )
      v10 = (this[2] - v7) >> 1;
    else
      v10 = 0;
    if ( v8 >= a4 + v10 )
    {
      v21 = (_WORD *)this[2];
      if ( v21 - a3 >= a4 )
      {
        this[2] = sub_10061DD0(&v21[-a4], v21, (_WORD *)this[2]);
        sub_100619A0((int)a3, (int)&v21[-a4], (int)v21);
        return sub_10061730(a3, &a3[a4], &a5);
      }
      else
      {
        sub_10061DD0(a3, v21, &a3[a4]);
        v24 = a4 - ((this[2] - (int)a3) >> 1);
        v23 = (_WORD *)this[2];
        v29 = 2;
        sub_10061BB0(v23, v24, &a5);
        this[2] += 2 * a4;
        return sub_10061730(a3, (_WORD *)(this[2] - 2 * a4), &a5);
      }
    }
    else
    {
      if ( 0x7FFFFFFF - (v8 >> 1) >= v8 )
        v11 = (v8 >> 1) + v8;
      else
        v11 = 0;
      if ( v7 )
        v12 = (this[2] - v7) >> 1;
      else
        v12 = 0;
      if ( v11 < a4 + v12 )
      {
        if ( v7 )
          v13 = (this[2] - v7) >> 1;
        else
          v13 = 0;
        v11 = v13 + a4;
      }
      v14 = (_WORD *)sub_1016A2F0(v11);
      LOBYTE(v27) = 0;
      v15 = v14;
      v22 = (_WORD *)this[1];
      v26 = v14;
      v29 = 0;
      v16 = sub_10061520(v22, a3, v14);
      v17 = sub_10061BB0(v16, a4, &a5);
      v18 = (_WORD *)this[2];
      LOBYTE(a5) = 0;
      sub_10061520(a3, v18, v17);
      v19 = (void *)this[1];
      if ( v19 )
        v20 = (this[2] - (int)v19) >> 1;
      else
        v20 = 0;
      v30 = v20 + a4;
      if ( v19 )
        operator delete(v19);
      result = &v15[v30];
      this[3] = &v15[v11];
      this[2] = result;
      this[1] = v15;
    }
  }
  return result;
}
