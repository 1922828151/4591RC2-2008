/*
 * func-name: sub_10001F90
 * func-address: 0x10001f90
 * callers: 0x100020d0, 0x10002c60
 * callees: 0x10001830
 */

bool __thiscall sub_10001F90(_DWORD *this, int a2)
{
  int v2; // edi

  v2 = a2;
  a2 = *(int *)a2;
  if ( sub_10001830(this, (int)&a2, 4u) != 4 )
    return 0;
  a2 = *(int *)(v2 + 4);
  if ( sub_10001830(this, (int)&a2, 4u) != 4 )
    return 0;
  a2 = *(int *)(v2 + 8);
  return sub_10001830(this, (int)&a2, 4u) == 4;
}
