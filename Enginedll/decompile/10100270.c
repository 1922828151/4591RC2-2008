/*
 * func-name: sub_10100270
 * func-address: 0x10100270
 * callers: 0x101004c0
 * callees: 0x100f9000, 0x100fdf50, 0x10100010
 */

int __thiscall sub_10100270(_DWORD *this, int a2, int a3)
{
  float *v4; // eax
  float *v5; // ecx
  float *v6; // ebp
  char v7; // al
  double v8; // st7
  double v9; // st6
  float *v10; // edi
  _DWORD *v11; // eax
  _DWORD *v12; // ecx
  int v13; // edx
  int result; // eax
  _DWORD *v15; // edx
  char v16; // [esp+10h] [ebp-Ch]
  _DWORD *v17; // [esp+14h] [ebp-8h] BYREF
  float *v18; // [esp+18h] [ebp-4h]

  v4 = (float *)this[1];
  v5 = (float *)*((_DWORD *)v4 + 1);
  v6 = v4;
  v7 = 1;
  v16 = 1;
  while ( !*((_BYTE *)v5 + 41) )
  {
    v6 = v5;
    if ( v5[3] == *(float *)a3 )
    {
      if ( v5[4] == *(float *)(a3 + 4) )
      {
        if ( v5[5] == *(float *)(a3 + 8) )
          goto LABEL_10;
        v8 = *(float *)(a3 + 8);
        v9 = v5[5];
      }
      else
      {
        v8 = *(float *)(a3 + 4);
        v9 = v5[4];
      }
    }
    else
    {
      v8 = *(float *)a3;
      v9 = v5[3];
    }
    if ( v9 <= v8 )
    {
LABEL_10:
      v7 = 0;
      goto LABEL_11;
    }
    v7 = 1;
LABEL_11:
    v16 = v7;
    if ( v7 )
      v5 = *(float **)v5;
    else
      v5 = (float *)*((_DWORD *)v5 + 2);
  }
  v10 = v6;
  v18 = v6;
  v17 = this;
  if ( v7 )
  {
    if ( v6 == *(float **)this[1] )
    {
      v11 = sub_10100010(this, &v17, 1, v6, (_DWORD *)a3);
LABEL_18:
      v12 = v11;
      v13 = *v11;
      result = a2;
      *(_DWORD *)(a2 + 4) = v12[1];
      *(_BYTE *)(a2 + 8) = 1;
      *(_DWORD *)a2 = v13;
      return result;
    }
    sub_100FDF50(&v17);
    v10 = v18;
  }
  if ( sub_100F9000(v10 + 3, (float *)a3) )
  {
    v11 = sub_10100010(this, &v17, v16, v6, (_DWORD *)a3);
    goto LABEL_18;
  }
  result = a2;
  v15 = v17;
  *(_DWORD *)(a2 + 4) = v10;
  *(_BYTE *)(a2 + 8) = 0;
  *(_DWORD *)a2 = v15;
  return result;
}
