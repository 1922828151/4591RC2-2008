/*
 * func-name: sub_100E4B50
 * func-address: 0x100e4b50
 * callers: 0x1000d305
 * callees: 0x10018016, 0x10018494
 */

int __thiscall sub_100E4B50(_DWORD *this, int a2, int *a3)
{
  int v4; // esi
  int v5; // eax
  bool v6; // cl
  int v7; // edx
  int v8; // edx
  _DWORD *v9; // eax
  _DWORD *v10; // ecx
  int v11; // edx
  int result; // eax
  int v13; // ecx
  int v14; // [esp+Ch] [ebp-Ch]
  _DWORD *v15; // [esp+10h] [ebp-8h] BYREF
  int v16; // [esp+14h] [ebp-4h]

  v4 = this[1];
  v5 = *(_DWORD *)(v4 + 4);
  v6 = 1;
  LOBYTE(v14) = 1;
  if ( !*(_BYTE *)(v5 + 33) )
  {
    v7 = *a3;
    do
    {
      v4 = v5;
      v6 = v7 < *(_DWORD *)(v5 + 12);
      LOBYTE(v14) = v6;
      if ( v7 >= *(_DWORD *)(v5 + 12) )
        v5 = *(_DWORD *)(v5 + 8);
      else
        v5 = *(_DWORD *)v5;
    }
    while ( !*(_BYTE *)(v5 + 33) );
  }
  v8 = v4;
  v16 = v4;
  v15 = this;
  if ( v6 )
  {
    if ( v4 == *(_DWORD *)this[1] )
    {
      v9 = (_DWORD *)sub_10018494((int)&v15, 1, v4, (int)a3);
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
    sub_10018016();
    v8 = v16;
  }
  if ( *(_DWORD *)(v8 + 12) < *a3 )
  {
    v9 = (_DWORD *)sub_10018494((int)&v15, v14, v4, (int)a3);
    goto LABEL_10;
  }
  result = a2;
  *(_DWORD *)a2 = v15;
  *(_DWORD *)(a2 + 4) = v8;
  *(_BYTE *)(a2 + 8) = 0;
  return result;
}
