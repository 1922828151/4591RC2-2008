/*
 * func-name: sub_100D9450
 * func-address: 0x100d9450
 * callers: 0x100d77a0
 * callees: 0x100d8980, 0x100d9080
 */

int __thiscall sub_100D9450(_DWORD *this, int a2, int *a3)
{
  _DWORD *v4; // esi
  int *v5; // eax
  bool v6; // cl
  int v7; // edx
  _DWORD *v8; // edx
  _DWORD *v9; // eax
  _DWORD *v10; // ecx
  int v11; // edx
  int result; // eax
  int v13; // ecx
  char v14; // [esp+Ch] [ebp-Ch]
  _DWORD *v15; // [esp+10h] [ebp-8h] BYREF
  _DWORD *v16; // [esp+14h] [ebp-4h]

  v4 = (_DWORD *)this[1];
  v5 = (int *)v4[1];
  v6 = 1;
  v14 = 1;
  if ( !*((_BYTE *)v5 + 21) )
  {
    v7 = *a3;
    do
    {
      v4 = v5;
      v6 = v7 < v5[3];
      v14 = v6;
      if ( v7 >= v5[3] )
        v5 = (int *)v5[2];
      else
        v5 = (int *)*v5;
    }
    while ( !*((_BYTE *)v5 + 21) );
  }
  v8 = v4;
  v16 = v4;
  v15 = this;
  if ( v6 )
  {
    if ( v4 == *(_DWORD **)this[1] )
    {
      v9 = sub_100D9080(this, &v15, 1, v4, a3);
LABEL_10:
      v10 = v9;
      v11 = *v9;
      result = a2;
      v13 = v10[1];
      *(_DWORD *)a2 = v11;
      *(_DWORD *)(a2 + 4) = v13;
      *(_BYTE *)(a2 + 8) = 1;
      return result;
    }
    sub_100D8980(&v15);
    v8 = v16;
  }
  if ( v8[3] < *a3 )
  {
    v9 = sub_100D9080(this, &v15, v14, v4, a3);
    goto LABEL_10;
  }
  result = a2;
  *(_DWORD *)a2 = v15;
  *(_DWORD *)(a2 + 4) = v8;
  *(_BYTE *)(a2 + 8) = 0;
  return result;
}
