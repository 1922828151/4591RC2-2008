/*
 * func-name: sub_10004C20
 * func-address: 0x10004c20
 * callers: 0x10009760
 * callees: none
 */

int __thiscall sub_10004C20(_DWORD *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int result; // eax

  v2 = this[13];
  if ( v2 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1002F7BC + 20))(dword_1002F7BC, v2);
  this[13] = 0;
  this[14] = 0;
  this[15] = 0;
  v3 = this[9];
  if ( v3 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1002F7BC + 20))(dword_1002F7BC, v3);
  this[9] = 0;
  this[10] = 0;
  this[11] = 0;
  v4 = this[5];
  if ( v4 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1002F7BC + 20))(dword_1002F7BC, v4);
  this[5] = 0;
  this[6] = 0;
  this[7] = 0;
  result = this[1];
  if ( result )
    result = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1002F7BC + 20))(dword_1002F7BC, result);
  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  return result;
}
