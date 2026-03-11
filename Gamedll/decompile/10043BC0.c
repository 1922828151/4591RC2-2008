/*
 * func-name: sub_10043BC0
 * func-address: 0x10043bc0
 * callers: 0x1000c3dd
 * callees: none
 */

int __thiscall sub_10043BC0(int this, float a2)
{
  return (*(int (__thiscall **)(int, _DWORD))(this + 16))(*(_DWORD *)(this + 4) + *(_DWORD *)(this + 20), LODWORD(a2));
}
