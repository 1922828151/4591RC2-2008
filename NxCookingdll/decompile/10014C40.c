/*
 * func-name: sub_10014C40
 * func-address: 0x10014c40
 * callers: 0x1000fe90, 0x10011260, 0x10016030, 0x10016600
 * callees: 0x10014b90, 0x10014ef0
 */

_DWORD *__thiscall sub_10014C40(_DWORD *this, char a2)
{
  int **v3; // eax
  int v4; // eax

  v3 = (int **)sub_10014EF0();
  if ( (*v3)[1] + 1 > (unsigned int)(*v3)[2] )
    sub_10014B90(v3, (int)*v3, 0);
  v4 = *this;
  this[4] = *(_DWORD *)(*this + 4) + *(_DWORD *)*this;
  ++*(_DWORD *)(v4 + 4);
  *(_BYTE *)this[4] = a2;
  return this;
}
