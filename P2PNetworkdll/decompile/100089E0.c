/*
 * func-name: sub_100089E0
 * func-address: 0x100089e0
 * callers: 0x10008190
 * callees: 0x10009040, 0x10009290, 0x100092f0
 */

int *__stdcall sub_100089E0(int a1, int *a2, int a3, _DWORD *a4, int a5, _DWORD *a6)
{
  int v6; // ebx
  int v7; // edi
  _DWORD *v8; // esi
  int *result; // eax
  void *v10; // ebp
  _DWORD *v11; // [esp+14h] [ebp-8h]

  v6 = a3;
  v7 = a1 + 4;
  v11 = **(_DWORD ***)(a1 + 8);
  if ( !a3 || a3 != v7 )
    invalid_parameter_noinfo();
  v8 = a4;
  if ( a4 != v11 )
    goto LABEL_13;
  a4 = *(_DWORD **)(a1 + 8);
  if ( !a5 || a5 != v7 )
    invalid_parameter_noinfo();
  if ( a6 == a4 )
  {
    sub_100092F0();
    a6 = *(_DWORD **)(a1 + 8);
    a5 = a1 + 4;
    sub_10009290(a1 + 16);
    *(_DWORD *)(a1 + 32) = 1;
    *(_DWORD *)(a1 + 36) = 1;
    result = a2;
    a2[1] = **(_DWORD **)(a1 + 8);
    *a2 = v7;
  }
  else
  {
LABEL_13:
    while ( 1 )
    {
      if ( !v6 || v6 != a5 )
        invalid_parameter_noinfo();
      if ( v8 == a6 )
        break;
      v10 = v8;
      if ( !v6 )
        invalid_parameter_noinfo();
      if ( v8 == *(_DWORD **)(v6 + 4) )
        invalid_parameter_noinfo();
      v8 = (_DWORD *)*v8;
      sub_10009040((int)&a3, v6, v10);
    }
    result = a2;
    a2[1] = (int)v8;
    *a2 = v6;
  }
  return result;
}
