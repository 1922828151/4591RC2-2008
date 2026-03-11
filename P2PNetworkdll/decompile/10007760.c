/*
 * func-name: sub_10007760
 * func-address: 0x10007760
 * callers: 0x10006a40
 * callees: 0x100082a0, 0x10009290, 0x1000e470
 */

int *__stdcall sub_10007760(int a1, int *a2, int a3, _DWORD *a4, int a5, _DWORD *a6)
{
  int v6; // ebp
  _DWORD *v7; // ebx
  int v8; // esi
  _DWORD *v9; // edi
  _DWORD *v10; // ebx
  int *result; // eax
  void (__cdecl *v12)(); // ebx
  void *v13; // esi

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
    sub_1000E470(v8);
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
      v13 = v9;
      if ( !v6 )
        v12();
      if ( v9 == *(_DWORD **)(v6 + 4) )
        v12();
      v9 = (_DWORD *)*v9;
      sub_100082A0((int)&a3, v6, v13);
    }
    result = a2;
    a2[1] = (int)v9;
    *a2 = v6;
  }
  return result;
}
