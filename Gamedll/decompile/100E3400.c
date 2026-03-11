/*
 * func-name: sub_100E3400
 * func-address: 0x100e3400
 * callers: 0x10006401
 * callees: 0x10003274, 0x100038e6, 0x10006ac8, 0x1000ff79, 0x1001619e
 */

_DWORD *__thiscall sub_100E3400(int *this, _DWORD *a2, int *a3, int a4, _DWORD *a5)
{
  int v7; // edi
  int v8; // edi
  int v9; // edi
  bool v10; // zf
  int v11; // eax
  bool v12; // cc
  _DWORD *v13; // eax
  _DWORD v14[3]; // [esp+8h] [ebp-Ch] BYREF

  if ( !this[2] )
  {
    sub_1001619E((int)a2, 1, this[1], (int)a5);
    return a2;
  }
  v7 = *(_DWORD *)this[1];
  if ( !a3 || a3 != this )
    _invalid_parameter_noinfo();
  if ( a4 == v7 )
  {
    v8 = (int)a5;
    if ( *a5 < *(_DWORD *)(a4 + 12) )
    {
      sub_1001619E((int)a2, 1, a4, (int)a5);
      return a2;
    }
    goto LABEL_29;
  }
  v9 = this[1];
  if ( !a3 || a3 != this )
    _invalid_parameter_noinfo();
  v10 = a4 == v9;
  v8 = (int)a5;
  if ( v10 )
  {
    v11 = *(_DWORD *)(this[1] + 8);
    if ( *(_DWORD *)(v11 + 12) < *a5 )
    {
      sub_1001619E((int)a2, 0, v11, (int)a5);
      return a2;
    }
    goto LABEL_29;
  }
  v12 = *(_DWORD *)(a4 + 12) < *a5;
  if ( *(_DWORD *)(a4 + 12) > *a5 )
  {
    sub_10006AC8();
    if ( *(_DWORD *)(a4 + 12) < *a5 )
    {
      if ( *(_BYTE *)(*(_DWORD *)(a4 + 8) + 21) )
        sub_1001619E((int)a2, 0, a4, (int)a5);
      else
        sub_1001619E((int)a2, 1, a4, (int)a5);
      return a2;
    }
    v12 = 0;
  }
  if ( !v12
    || (v14[1] = this[1], v14[0] = this, sub_10003274(), !(unsigned __int8)sub_100038E6((int)v14))
    && *a5 >= *(_DWORD *)(a4 + 12) )
  {
LABEL_29:
    v13 = (_DWORD *)sub_1000FF79((int)v14, v8);
    *a2 = *v13;
    a2[1] = v13[1];
    return a2;
  }
  if ( *(_BYTE *)(*(_DWORD *)(a4 + 8) + 21) )
    sub_1001619E((int)a2, 0, a4, (int)a5);
  else
    sub_1001619E((int)a2, 1, a4, (int)a5);
  return a2;
}
