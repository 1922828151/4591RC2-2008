/*
 * func-name: sub_10026DE0
 * func-address: 0x10026de0
 * callers: 0x10027b40, 0x10027c30, 0x10028ec0, 0x100295d0, 0x10029dd0
 * callees: none
 */

int __thiscall sub_10026DE0(int *this, int a2)
{
  int v3; // edi
  int result; // eax

  this[2] = a2;
  v3 = *this;
  *this = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_100580A0 + 8))(dword_100580A0, 4 * a2, 261);
  for ( result = 0; result < this[1]; ++result )
    *(_DWORD *)(*this + 4 * result) = *(_DWORD *)(v3 + 4 * result);
  if ( v3 )
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v3);
  return result;
}
