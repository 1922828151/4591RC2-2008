/*
 * func-name: sub_1014ECB0
 * func-address: 0x1014ecb0
 * callers: 0x1014f050
 * callees: 0x100ce270, 0x100ce350, 0x100d8980, 0x1014e620, 0x1014eae0
 */

_DWORD *__thiscall sub_1014ECB0(int this, _DWORD *a2, int a3, _DWORD *a4, int *a5)
{
  _DWORD *v7; // edi
  int v8; // ebp
  _DWORD *v9; // ebx
  int *v10; // edi
  _DWORD *v11; // edi
  bool v12; // zf
  _DWORD *v13; // eax
  bool v14; // cc
  _DWORD *v15; // eax
  _DWORD v16[3]; // [esp+8h] [ebp-Ch] BYREF

  if ( !*(_DWORD *)(this + 8) )
  {
    sub_1014E620((_DWORD *)this, a2, 1, *(_DWORD **)(this + 4), a5);
    return a2;
  }
  v7 = **(_DWORD ***)(this + 4);
  v8 = a3;
  if ( !a3 || a3 != this )
    invalid_parameter_noinfo();
  v9 = a4;
  if ( a4 == v7 )
  {
    v10 = a5;
    if ( *a5 < a4[3] )
    {
      sub_1014E620((_DWORD *)this, a2, 1, a4, a5);
      return a2;
    }
    goto LABEL_29;
  }
  v11 = *(_DWORD **)(this + 4);
  if ( !v8 || v8 != this )
    invalid_parameter_noinfo();
  v12 = v9 == v11;
  v10 = a5;
  if ( v12 )
  {
    v13 = *(_DWORD **)(*(_DWORD *)(this + 4) + 8);
    if ( v13[3] < *a5 )
    {
      sub_1014E620((_DWORD *)this, a2, 0, v13, a5);
      return a2;
    }
    goto LABEL_29;
  }
  v14 = v9[3] < *a5;
  if ( v9[3] > *a5 )
  {
    a3 = v8;
    a4 = v9;
    sub_100D8980(&a3);
    if ( a4[3] < *v10 )
    {
      if ( *(_BYTE *)(a4[2] + 21) )
        sub_1014E620((_DWORD *)this, a2, 0, a4, v10);
      else
        sub_1014E620((_DWORD *)this, a2, 1, v9, v10);
      return a2;
    }
    v14 = v9[3] < *v10;
  }
  if ( !v14
    || (v16[1] = *(_DWORD *)(this + 4), a3 = v8, a4 = v9, v16[0] = this, sub_100CE350(&a3), !sub_100CE270(&a3, v16))
    && *v10 >= a4[3] )
  {
LABEL_29:
    v15 = (_DWORD *)sub_1014EAE0((_DWORD *)this, (int)v16, v10);
    *a2 = *v15;
    a2[1] = v15[1];
    return a2;
  }
  if ( *(_BYTE *)(v9[2] + 21) )
    sub_1014E620((_DWORD *)this, a2, 0, v9, v10);
  else
    sub_1014E620((_DWORD *)this, a2, 1, a4, v10);
  return a2;
}
