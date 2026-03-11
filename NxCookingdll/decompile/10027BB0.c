/*
 * func-name: sub_10027BB0
 * func-address: 0x10027bb0
 * callers: 0x10028490
 * callees: 0x10027b40, 0x10035300
 */

void **__cdecl sub_10027BB0(int a1)
{
  int *v1; // eax
  void **v2; // edi

  v1 = (int *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_100580A0 + 8))(dword_100580A0, 36, 261);
  if ( v1 )
    v2 = (void **)sub_10027B40(v1, *(_DWORD *)(a1 + 4), *(_DWORD *)(a1 + 16), *(_DWORD *)(a1 + 28));
  else
    v2 = 0;
  memcpy_0(*v2, *(const void **)a1, 12 * *(_DWORD *)(a1 + 4));
  memcpy_0(v2[3], *(const void **)(a1 + 12), 4 * *(_DWORD *)(a1 + 16));
  memcpy_0(v2[6], *(const void **)(a1 + 24), 16 * *(_DWORD *)(a1 + 28));
  return v2;
}
