/*
 * func-name: sub_1000FAC0
 * func-address: 0x1000fac0
 * callers: 0x10014240
 * callees: 0x100046d0
 */

char __thiscall sub_1000FAC0(int this)
{
  unsigned __int16 *v2; // eax
  int v3; // ecx
  int v4; // edx

  v2 = (unsigned __int16 *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_100580A0 + 8))(
                             dword_100580A0,
                             12 * *(_DWORD *)this,
                             273);
  v3 = *(_DWORD *)(this + 8);
  v4 = *(_DWORD *)this;
  *(_DWORD *)(this + 16) = v2;
  return sub_100046D0(this, *(_DWORD *)(this + 4), v4, v3, *(int **)(this + 12), 0, v2, 1);
}
