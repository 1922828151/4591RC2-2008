/*
 * func-name: sub_10027970
 * func-address: 0x10027970
 * callers: 0x10027830
 * callees: 0x10009a40, 0x10012b60, 0x1001d450
 */

int *__stdcall sub_10027970(int a1, int *a2, int a3, _DWORD *a4, int a5, _DWORD *a6)
{
  int v6; // ebp
  int v7; // ebx
  _DWORD *v8; // edi
  _DWORD *v9; // esi
  _DWORD *v10; // edi
  int *result; // eax
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
    sub_10009A40(v7);
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
      sub_1001D450((_DWORD *)a1, &a3, v6, v13);
    }
    result = a2;
    a2[1] = (int)v9;
    *a2 = v6;
  }
  return result;
}
