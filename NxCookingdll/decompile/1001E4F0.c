/*
 * func-name: sub_1001E4F0
 * func-address: 0x1001e4f0
 * callers: 0x1001efc0
 * callees: 0x10014910, 0x10034f10
 */

void *__thiscall sub_1001E4F0(_DWORD *this, unsigned int a2, int a3)
{
  int (__stdcall ***v4)(size_t, int); // eax
  void *v5; // esi
  void *result; // eax
  unsigned int v7; // ecx
  int v8; // edx
  int v9; // eax
  int (__stdcall ***v10)(size_t, int); // eax
  int i; // [esp+Ch] [ebp-4h]

  v4 = sub_10014910();
  v5 = (void *)((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, int))**v4)(v4, 4 * this[11], 1);
  result = memset(v5, 255, 4 * this[11]);
  v7 = 0;
  for ( i = 0; v7 < a2; *(_DWORD *)(this[12] + 4 * v8) = result )
  {
    v8 = *(_DWORD *)(a3 + 4 * v7);
    v9 = *(_DWORD *)(this[12] + 4 * v8);
    if ( *((_DWORD *)v5 + v9) == -1 )
      *((_DWORD *)v5 + v9) = i++;
    result = (void *)*((_DWORD *)v5 + v9);
    ++v7;
  }
  if ( v5 )
  {
    v10 = sub_10014910();
    return (void *)((int (__thiscall *)(int (__stdcall ***)(size_t, int), void *))(*v10)[3])(v10, v5);
  }
  return result;
}
