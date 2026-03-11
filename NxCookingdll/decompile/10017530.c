/*
 * func-name: sub_10017530
 * func-address: 0x10017530
 * callers: 0x100179f0
 * callees: 0x10016030, 0x100160a0
 */

int __thiscall sub_10017530(int this, int a2, int *a3)
{
  sub_10016030(79, 80, 67, (_BYTE)a2 == 0, a3);
  sub_100160A0(1, a2, a3);
  sub_100160A0(*(_DWORD *)(this + 8), a2, a3);
  if ( *(_DWORD *)(this + 16) )
    return (*(int (__thiscall **)(_DWORD, int, int *))(**(_DWORD **)(this + 16) + 20))(*(_DWORD *)(this + 16), a2, a3);
  else
    return (*(_DWORD *)(this + 8) >> 2) & 1;
}
