/*
 * func-name: sub_10013730
 * func-address: 0x10013730
 * callers: 0x100143f0, 0x10014580
 * callees: 0x1000fc40
 */

int __thiscall sub_10013730(_DWORD *this)
{
  int v2; // eax
  int result; // eax
  int (__thiscall ***v4)(_DWORD, int); // ecx

  v2 = this[48];
  if ( v2 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v2);
    this[48] = 0;
  }
  if ( this[49] )
  {
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, this[49]);
    this[49] = 0;
  }
  if ( this[51] )
  {
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, this[51]);
    this[51] = 0;
  }
  result = sub_1000FC40(this + 1);
  v4 = (int (__thiscall ***)(_DWORD, int))this[46];
  if ( v4 )
  {
    result = (**v4)(v4, 1);
    this[46] = 0;
  }
  return result;
}
