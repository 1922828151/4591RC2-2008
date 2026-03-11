/*
 * func-name: sub_102B40C0
 * func-address: 0x102b40c0
 * callers: 0x10012977
 * callees: 0x1000831e, 0x1001972c
 */

int *__thiscall sub_102B40C0(_DWORD **this, int *a2, _DWORD **a3, _DWORD *a4, _DWORD **a5, _DWORD *a6)
{
  _DWORD *v6; // ebp
  int v7; // edi
  _DWORD **v8; // ebx
  _DWORD *v9; // esi
  _DWORD *v10; // ebp
  int *result; // eax
  int v12; // edx
  void (__cdecl *v13)(); // ebp
  void *v14; // ebx

  v6 = (_DWORD *)*this[2];
  v7 = (int)a3;
  v8 = this + 1;
  if ( !a3 || a3 != v8 )
    _invalid_parameter_noinfo();
  v9 = a4;
  if ( a4 != v6 )
    goto LABEL_14;
  v10 = v8[1];
  if ( !a5 || a5 != v8 )
    _invalid_parameter_noinfo();
  if ( a6 == v10 )
  {
    sub_1001972C();
    result = a2;
    v12 = *v8[1];
    *a2 = (int)v8;
    a2[1] = v12;
  }
  else
  {
LABEL_14:
    while ( 1 )
    {
      if ( v7 && (_DWORD **)v7 == a5 )
      {
        v13 = _invalid_parameter_noinfo;
      }
      else
      {
        v13 = _invalid_parameter_noinfo;
        _invalid_parameter_noinfo();
      }
      if ( v9 == a6 )
        break;
      v14 = v9;
      if ( !v7 )
        v13();
      if ( v9 == *(_DWORD **)(v7 + 4) )
        v13();
      v9 = (_DWORD *)*v9;
      sub_1000831E((int)&a3, v7, v14);
    }
    result = a2;
    *a2 = v7;
    a2[1] = (int)v9;
  }
  return result;
}
