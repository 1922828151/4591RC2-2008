/*
 * func-name: sub_101004C0
 * func-address: 0x101004c0
 * callers: 0x10100940
 * callees: 0x100ce270, 0x100f9000, 0x100fdf50, 0x100fe390, 0x10100010, 0x10100270
 */

_DWORD *__thiscall sub_101004C0(int this, _DWORD *a2, int a3, int a4, float *a5)
{
  int v7; // edi
  int v8; // ebp
  int v9; // ebx
  float *v10; // edi
  int v11; // edi
  bool v12; // zf
  int v13; // ebx
  int v14; // edx
  bool v15; // al
  _DWORD *v16; // ebp
  _DWORD *v17; // eax
  _DWORD v18[3]; // [esp+8h] [ebp-Ch] BYREF

  if ( !*(_DWORD *)(this + 8) )
  {
    sub_10100010((_DWORD *)this, a2, 1, *(_DWORD **)(this + 4), a5);
    return a2;
  }
  v7 = **(_DWORD **)(this + 4);
  v8 = a3;
  if ( !a3 || a3 != this )
    invalid_parameter_noinfo();
  v9 = a4;
  if ( a4 == v7 )
  {
    v10 = a5;
    if ( sub_100F9000(a5, (float *)(a4 + 12)) )
    {
      sub_10100010((_DWORD *)this, a2, 1, (_DWORD *)v9, v10);
      return a2;
    }
    goto LABEL_28;
  }
  v11 = *(_DWORD *)(this + 4);
  if ( !v8 || v8 != this )
    invalid_parameter_noinfo();
  v12 = v9 == v11;
  v10 = a5;
  if ( v12 )
  {
    v13 = *(_DWORD *)(*(_DWORD *)(this + 4) + 8);
    if ( sub_100F9000((float *)(v13 + 12), a5) )
    {
      sub_10100010((_DWORD *)this, a2, 0, (_DWORD *)v13, v10);
      return a2;
    }
    goto LABEL_28;
  }
  if ( sub_100F9000(a5, (float *)(v9 + 12))
    && (a3 = v8, a4 = v9, sub_100FDF50(&a3), sub_100F9000((float *)(a4 + 12), v10)) )
  {
    if ( *(_BYTE *)(*(_DWORD *)(a4 + 8) + 41) )
      sub_10100010((_DWORD *)this, a2, 0, (_DWORD *)a4, v10);
    else
      sub_10100010((_DWORD *)this, a2, 1, (_DWORD *)v9, v10);
    return a2;
  }
  else
  {
    if ( !sub_100F9000((float *)(v9 + 12), v10) )
      goto LABEL_28;
    v14 = *(_DWORD *)(this + 4);
    a3 = v8;
    a4 = v9;
    v18[1] = v14;
    v18[0] = this;
    sub_100FE390(&a3);
    v15 = sub_100CE270(&a3, v18);
    v16 = (_DWORD *)a4;
    if ( !v15 && !sub_100F9000(v10, (float *)(a4 + 12)) )
    {
LABEL_28:
      v17 = (_DWORD *)sub_10100270((_DWORD *)this, (int)v18, (int)v10);
      *a2 = *v17;
      a2[1] = v17[1];
      return a2;
    }
    if ( *(_BYTE *)(*(_DWORD *)(v9 + 8) + 41) )
      sub_10100010((_DWORD *)this, a2, 0, (_DWORD *)v9, v10);
    else
      sub_10100010((_DWORD *)this, a2, 1, v16, v10);
    return a2;
  }
}
