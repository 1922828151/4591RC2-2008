/*
 * func-name: sub_100179F0
 * func-address: 0x100179f0
 * callers: none
 * callees: 0x10013570, 0x10016030, 0x100160a0, 0x10016600, 0x10017530
 */

char __thiscall sub_100179F0(int this, int a2, int *a3)
{
  char result; // al
  unsigned int v5; // ebp
  unsigned int v6; // ebp

  result = sub_10017530(this, a2, a3);
  if ( result )
  {
    sub_10016030(72, 66, 77, (_BYTE)a2 == 0, a3);
    sub_100160A0(0, a2, a3);
    sub_100160A0(*(_DWORD *)(this + 20), a2, a3);
    if ( *(_DWORD *)(this + 20) > 1u )
    {
      v5 = sub_10013570(*(unsigned int **)(this + 24), *(_DWORD *)(this + 20));
      sub_100160A0(v5, a2, a3);
      sub_10016600(v5, *(_DWORD *)(this + 20), *(_DWORD *)(this + 24), a3, a2);
    }
    sub_100160A0(*(_DWORD *)(this + 28), a2, a3);
    if ( *(_DWORD *)(this + 28) )
    {
      v6 = sub_10013570(*(unsigned int **)(this + 32), *(_DWORD *)(this + 28));
      sub_100160A0(v6, a2, a3);
      sub_10016600(v6, *(_DWORD *)(this + 28), *(_DWORD *)(this + 32), a3, a2);
    }
    return 1;
  }
  return result;
}
