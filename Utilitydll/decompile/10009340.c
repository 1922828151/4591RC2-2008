/*
 * func-name: sub_10009340
 * func-address: 0x10009340
 * callers: 0x10009150
 * callees: 0x10009030
 */

int __usercall sub_10009340@<eax>(int a1@<edi>, int a2, int a3)
{
  int v3; // ebx
  int v4; // ebp
  int v5; // esi
  bool v6; // zf
  int v7; // eax
  int v8; // edx
  int v9; // ecx
  int v10; // ebp
  int v11; // eax
  int v12; // esi
  int v13; // eax
  int result; // eax

  v3 = 0;
  v4 = a2;
  v5 = 2;
  v6 = a2 == 2;
  if ( a2 > 2 )
  {
    do
    {
      v7 = *(_DWORD *)(a1 + 4 * v5);
      v8 = *(_DWORD *)(v7 + 12);
      v9 = *(_DWORD *)(a1 + 4 * v5 - 4);
      if ( v8 >= *(_DWORD *)(v9 + 12) && (v8 > *(_DWORD *)(v9 + 12) || *(_DWORD *)(v7 + 16) > *(_DWORD *)(v9 + 16)) )
        --v5;
      v10 = *(_DWORD *)(a1 + 4 * v3);
      if ( v10 && !InterlockedDecrement((volatile LONG *)(v10 + 4)) )
        (**(void (__thiscall ***)(int, int))v10)(v10, 1);
      v11 = *(_DWORD *)(a1 + 4 * v5);
      *(_DWORD *)(a1 + 4 * v3) = v11;
      if ( v11 )
        InterlockedIncrement((volatile LONG *)(v11 + 4));
      v3 = v5;
      v5 = 2 * v5 + 2;
    }
    while ( v5 < a2 );
    v4 = a2;
    v6 = v5 == a2;
  }
  if ( v6 )
  {
    v12 = *(_DWORD *)(a1 + 4 * v3);
    if ( v12 && !InterlockedDecrement((volatile LONG *)(v12 + 4)) )
      (**(void (__thiscall ***)(int, int))v12)(v12, 1);
    v13 = *(_DWORD *)(a1 + 4 * v4 - 4);
    *(_DWORD *)(a1 + 4 * v3) = v13;
    if ( v13 )
      InterlockedIncrement((volatile LONG *)(v13 + 4));
  }
  if ( a3 )
    InterlockedIncrement((volatile LONG *)(a3 + 4));
  result = sub_10009030(a1, a3);
  if ( a3 )
  {
    result = InterlockedDecrement((volatile LONG *)(a3 + 4));
    if ( !result )
      return (**(int (__thiscall ***)(int, int))a3)(a3, 1);
  }
  return result;
}
