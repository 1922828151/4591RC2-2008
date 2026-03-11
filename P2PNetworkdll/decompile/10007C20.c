/*
 * func-name: sub_10007C20
 * func-address: 0x10007c20
 * callers: 0x100072a0
 * callees: 0x10007120, 0x100087a0, 0x10009290
 */

int *__stdcall sub_10007C20(int a1, int *a2, int a3, _DWORD *a4, int a5, _DWORD *a6)
{
  int v6; // ebp
  _DWORD *v7; // esi
  int v8; // edi
  _DWORD *v9; // ebx
  _DWORD *v10; // esi
  int *result; // eax
  void (__cdecl *v12)(); // esi
  _DWORD **v13; // edi

  v6 = a3;
  v7 = **(_DWORD ***)(a1 + 8);
  v8 = a1 + 4;
  if ( !a3 || a3 != v8 )
    invalid_parameter_noinfo();
  v9 = a4;
  if ( a4 != v7 )
    goto LABEL_14;
  v10 = *(_DWORD **)(a1 + 8);
  if ( !a5 || a5 != v8 )
    invalid_parameter_noinfo();
  if ( a6 == v10 )
  {
    sub_100087A0(v8);
    a6 = *(_DWORD **)(a1 + 8);
    a5 = a1 + 4;
    sub_10009290(a1 + 16);
    *(_DWORD *)(a1 + 32) = 1;
    *(_DWORD *)(a1 + 36) = 1;
    result = a2;
    a2[1] = **(_DWORD **)(a1 + 8);
    *a2 = v8;
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
      v13 = (_DWORD **)v9;
      if ( !v6 )
        v12();
      if ( v9 == *(_DWORD **)(v6 + 4) )
        v12();
      v9 = (_DWORD *)*v9;
      sub_10007120((_DWORD *)a1, &a3, v6, v13);
    }
    result = a2;
    *a2 = v6;
    a2[1] = (int)v9;
  }
  return result;
}
