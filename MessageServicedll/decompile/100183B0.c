/*
 * func-name: sub_100183B0
 * func-address: 0x100183b0
 * callers: 0x100180e0
 * callees: 0x10018f90, 0x100190e0
 */

int *__stdcall sub_100183B0(int a1, int *a2, int a3, _DWORD *a4, int a5, _DWORD *a6)
{
  int v6; // ebx
  _DWORD *v7; // ebp
  int v8; // edi
  _DWORD *v9; // esi
  _DWORD *v10; // ebp
  int *result; // eax
  void *v12; // ebp

  v6 = a3;
  v7 = **(_DWORD ***)(a1 + 8);
  v8 = a1 + 4;
  if ( !a3 || a3 != v8 )
    invalid_parameter_noinfo();
  v9 = a4;
  if ( a4 != v7 )
    goto LABEL_13;
  v10 = *(_DWORD **)(a1 + 8);
  if ( !a5 || a5 != v8 )
    invalid_parameter_noinfo();
  if ( a6 == v10 )
  {
    sub_100190E0();
    result = a2;
    a2[1] = **(_DWORD **)(a1 + 8);
    *a2 = v8;
  }
  else
  {
LABEL_13:
    while ( 1 )
    {
      if ( !v6 || v6 != a5 )
        invalid_parameter_noinfo();
      if ( v9 == a6 )
        break;
      v12 = v9;
      if ( !v6 )
        invalid_parameter_noinfo();
      if ( v9 == *(_DWORD **)(v6 + 4) )
        invalid_parameter_noinfo();
      v9 = (_DWORD *)*v9;
      sub_10018F90((int)&a3, v6, v12);
    }
    result = a2;
    a2[1] = (int)v9;
    *a2 = v6;
  }
  return result;
}
