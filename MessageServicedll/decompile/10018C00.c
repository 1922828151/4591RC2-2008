/*
 * func-name: sub_10018C00
 * func-address: 0x10018c00
 * callers: 0x10018240
 * callees: 0x10009e60, 0x10012b60, 0x10019140
 */

int *__stdcall sub_10018C00(int a1, int *a2, int a3, _DWORD *a4, int a5, _DWORD *a6)
{
  int v6; // ebp
  int v7; // esi
  _DWORD *v8; // edi
  _DWORD *v9; // ebx
  _DWORD *v10; // edi
  int *result; // eax
  void (__cdecl *v12)(); // edi
  void *v13; // esi

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
    sub_10009E60(v7);
    a6 = *(_DWORD **)(a1 + 8);
    a5 = a1 + 4;
    sub_10012B60(&a5, a1 + 16);
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
      sub_10019140((int)&a3, v6, v13);
    }
    result = a2;
    *a2 = v6;
    a2[1] = (int)v9;
  }
  return result;
}
