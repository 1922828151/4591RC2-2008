/*
 * func-name: sub_10008490
 * func-address: 0x10008490
 * callers: 0x1000bf10
 * callees: none
 */

int __thiscall sub_10008490(int *this)
{
  _DWORD *v2; // esi
  int v3; // ebp
  int v4; // eax
  int result; // eax

  v2 = this + 177;
  v3 = 31;
  do
  {
    v4 = *(v2 - 5);
    v2 -= 5;
    if ( v4 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v4);
    --v3;
    *v2 = 0;
    v2[1] = 0;
    v2[2] = 0;
  }
  while ( v3 >= 0 );
  if ( this[10] )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, this[10]);
  this[10] = 0;
  this[11] = 0;
  this[12] = 0;
  if ( this[5] )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, this[5]);
  this[5] = 0;
  this[6] = 0;
  this[7] = 0;
  result = *this;
  if ( *this )
    result = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, *this);
  *this = 0;
  this[1] = 0;
  this[2] = 0;
  return result;
}
