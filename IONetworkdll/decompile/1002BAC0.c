/*
 * func-name: sub_1002BAC0
 * func-address: 0x1002bac0
 * callers: 0x1002a4c0, 0x1003a2e0
 * callees: 0x100355d0, 0x1003a130, 0x1003bdc0
 */

_DWORD *__stdcall sub_1002BAC0(int a1, _DWORD *a2, int a3, _DWORD *a4, int a5, _DWORD *a6)
{
  int v6; // ebp
  int v7; // ebx
  _DWORD *v8; // edi
  _DWORD *v9; // esi
  _DWORD *v10; // edi
  _DWORD *result; // eax
  void (__cdecl *v12)(); // edi
  _DWORD *v13; // ebx

  v6 = a3;
  v7 = a1 + 4;
  v8 = **(_DWORD ***)(a1 + 8);
  if ( !a3 || a3 != v7 )
    invalid_parameter_noinfo();
  v9 = a4;
  if ( a4 != v8 )
    goto LABEL_14;
  v10 = *(_DWORD **)(a1 + 8);
  if ( !a5 || a5 != v7 )
    invalid_parameter_noinfo();
  if ( a6 == v10 )
  {
    sub_100355D0();
    a6 = *(_DWORD **)(a1 + 8);
    a5 = a1 + 4;
    sub_1003BDC0(a1 + 16);
    *(_DWORD *)(a1 + 32) = 1;
    *(_DWORD *)(a1 + 36) = 1;
    result = a2;
    a2[1] = **(_DWORD **)(a1 + 8);
    *a2 = v7;
  }
  else
  {
LABEL_14:
    while ( 1 )
    {
      if ( v6 && v6 == a5 )
      {
        v12 = invalid_parameter_noinfo;
      }
      else
      {
        v12 = invalid_parameter_noinfo;
        invalid_parameter_noinfo();
      }
      if ( v9 == a6 )
        break;
      v13 = v9;
      if ( !v6 )
        v12();
      if ( v9 == *(_DWORD **)(v6 + 4) )
        v12();
      v9 = (_DWORD *)*v9;
      sub_1003A130(&a3, v6, v13);
    }
    result = a2;
    a2[1] = v9;
    *a2 = v6;
  }
  return result;
}
