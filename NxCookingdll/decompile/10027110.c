/*
 * func-name: sub_10027110
 * func-address: 0x10027110
 * callers: 0x10027b40, 0x10027c30, 0x10028490, 0x1002ad60
 * callees: none
 */

_DWORD *__thiscall sub_10027110(int *this, int a2)
{
  int v3; // edi
  _DWORD *result; // eax
  int v5; // edx
  bool v6; // cc
  int v7; // ecx

  this[2] = a2;
  v3 = *this;
  result = (_DWORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_100580A0 + 8))(
                       dword_100580A0,
                       12 * a2,
                       261);
  v5 = 0;
  v6 = this[1] <= 0;
  *this = (int)result;
  if ( !v6 )
  {
    v7 = 0;
    do
    {
      result = (_DWORD *)(v7 + *this);
      *result = *(_DWORD *)(v7 + v3);
      result[1] = *(_DWORD *)(v7 + v3 + 4);
      ++v5;
      result[2] = *(_DWORD *)(v7 + v3 + 8);
      v7 += 12;
    }
    while ( v5 < this[1] );
  }
  if ( v3 )
    return (_DWORD *)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v3);
  return result;
}
