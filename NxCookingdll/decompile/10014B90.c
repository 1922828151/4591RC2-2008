/*
 * func-name: sub_10014B90
 * func-address: 0x10014b90
 * callers: 0x10014c40, 0x10014ef0, 0x10015160, 0x100151a0, 0x100151e0, 0x10015220
 * callees: 0x10014910
 */

char __thiscall sub_10014B90(int **this, int a2, int a3)
{
  int (__stdcall ***v4)(size_t, int); // eax
  int *v5; // eax
  int *v6; // esi
  int v7; // eax
  int (__stdcall ***v9)(size_t, int); // eax
  int v10; // eax

  v4 = sub_10014910();
  v5 = (int *)((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, int))**v4)(v4, 16, 36);
  v6 = v5;
  if ( !v5 )
    return 0;
  *v5 = 0;
  v5[3] = 0;
  if ( a2 )
    v7 = 2 * *(_DWORD *)(a2 + 8);
  else
    v7 = a3;
  v6[2] = v7;
  v9 = sub_10014910();
  v10 = ((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, int))**v9)(v9, v6[2], 65);
  *v6 = v10;
  if ( !v10 )
    return 0;
  v6[1] = 0;
  *this = v6;
  if ( a2 )
    *(_DWORD *)(a2 + 12) = v6;
  return 1;
}
