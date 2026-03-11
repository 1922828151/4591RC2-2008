/*
 * func-name: sub_1000FC40
 * func-address: 0x1000fc40
 * callers: 0x1000fd70, 0x10013730, 0x10013840, 0x1002f4a0
 * callees: 0x1000e560, 0x1000f330, 0x10014910
 */

int __thiscall sub_1000FC40(_DWORD *this)
{
  unsigned int v2; // ebx
  int v3; // eax
  void (__thiscall ***v4)(_DWORD, int); // ecx
  int v5; // ebx
  int v6; // eax
  int result; // eax

  v2 = this[21];
  if ( v2 >= 2 )
  {
    sub_1000F330((_DWORD *)this[21]);
    v3 = sub_10014910();
    (*(void (__thiscall **)(int, unsigned int))(*(_DWORD *)v3 + 12))(v3, v2);
    this[21] = 0;
  }
  if ( this[10] )
  {
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, this[10]);
    this[10] = 0;
  }
  if ( this[9] )
  {
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, this[9]);
    this[9] = 0;
  }
  if ( this[8] )
  {
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, this[8]);
    this[8] = 0;
  }
  v4 = (void (__thiscall ***)(_DWORD, int))this[11];
  if ( v4 )
  {
    (**v4)(v4, 1);
    this[11] = 0;
  }
  v5 = this[22];
  if ( v5 )
  {
    sub_1000E560((_DWORD *)this[22]);
    v6 = sub_10014910();
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 12))(v6, v5);
    this[22] = 0;
  }
  if ( this[4] )
  {
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, this[4]);
    this[4] = 0;
  }
  if ( this[20] )
  {
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, this[20]);
    this[20] = 0;
  }
  if ( this[19] )
  {
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, this[19]);
    this[19] = 0;
  }
  if ( this[3] )
  {
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, this[3]);
    this[3] = 0;
  }
  result = this[2];
  if ( result )
  {
    result = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, this[2]);
    this[2] = 0;
  }
  return result;
}
