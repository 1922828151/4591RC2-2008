/*
 * func-name: sub_10009030
 * func-address: 0x10009030
 * callers: 0x10008810, 0x10009340
 * callees: none
 */

int __cdecl sub_10009030(int a1, int a2)
{
  int v2; // ecx
  int v3; // edi
  int result; // eax
  int v5; // esi
  int v6; // ebx
  int v7; // edx
  int v8; // ecx
  int v9; // ebx
  int v10; // eax
  bool v11; // cc
  int v12; // esi

  v3 = v2;
  result = v2 - 1 - ((v2 - 1) >> 31);
  v5 = (v2 - 1) / 2;
  if ( v2 <= 0 )
  {
LABEL_11:
    v6 = a2;
  }
  else
  {
    while ( 1 )
    {
      result = *(_DWORD *)(a1 + 4 * v5);
      v6 = a2;
      v7 = *(_DWORD *)(result + 12);
      v8 = *(_DWORD *)(a2 + 12);
      if ( v7 < v8 )
        break;
      if ( v7 <= v8 )
      {
        result = *(_DWORD *)(result + 16);
        if ( result <= *(_DWORD *)(a2 + 16) )
          break;
      }
      v9 = *(_DWORD *)(a1 + 4 * v3);
      if ( v9 && !InterlockedDecrement((volatile LONG *)(v9 + 4)) )
        (**(void (__thiscall ***)(int, int))v9)(v9, 1);
      v10 = *(_DWORD *)(a1 + 4 * v5);
      *(_DWORD *)(a1 + 4 * v3) = v10;
      if ( v10 )
        InterlockedIncrement((volatile LONG *)(v10 + 4));
      v3 = v5;
      result = (v5 - 1) / 2;
      v11 = v5 <= 0;
      v5 = result;
      if ( v11 )
        goto LABEL_11;
    }
  }
  v12 = *(_DWORD *)(a1 + 4 * v3);
  if ( v12 )
  {
    result = InterlockedDecrement((volatile LONG *)(v12 + 4));
    if ( !result )
      result = (**(int (__thiscall ***)(int, int))v12)(v12, 1);
  }
  *(_DWORD *)(a1 + 4 * v3) = v6;
  if ( v6 )
  {
    InterlockedIncrement((volatile LONG *)(v6 + 4));
    result = InterlockedDecrement((volatile LONG *)(v6 + 4));
    if ( !result )
      return (**(int (__thiscall ***)(int, int))v6)(v6, 1);
  }
  return result;
}
