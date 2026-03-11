/*
 * func-name: sub_10002A20
 * func-address: 0x10002a20
 * callers: 0x10009390
 * callees: none
 */

int __thiscall sub_10002A20(int *this)
{
  int v2; // eax
  int v3; // eax
  int result; // eax

  v2 = this[8];
  if ( v2 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1002F7BC + 20))(dword_1002F7BC, v2);
  this[8] = 0;
  this[9] = 0;
  this[10] = 0;
  v3 = this[4];
  if ( v3 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1002F7BC + 20))(dword_1002F7BC, v3);
  this[4] = 0;
  this[5] = 0;
  this[6] = 0;
  result = *this;
  if ( *this )
    result = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1002F7BC + 20))(dword_1002F7BC, result);
  *this = 0;
  this[1] = 0;
  this[2] = 0;
  return result;
}
