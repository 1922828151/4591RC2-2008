/*
 * func-name: sub_10009210
 * func-address: 0x10009210
 * callers: none
 * callees: none
 */

int __thiscall sub_10009210(_DWORD *this, int a2)
{
  int v2; // ecx

  v2 = *(_DWORD *)(*(_DWORD *)(this[2] + 4) + 4 * a2);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 8))(v2);
}
