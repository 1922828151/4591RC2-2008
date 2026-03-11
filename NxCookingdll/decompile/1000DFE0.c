/*
 * func-name: sub_1000DFE0
 * func-address: 0x1000dfe0
 * callers: 0x1000e560
 * callees: 0x10014910
 */

void __thiscall sub_1000DFE0(_DWORD *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax

  if ( this[5] )
  {
    v2 = sub_10014910();
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v2 + 12))(v2, this[5]);
    this[5] = 0;
  }
  if ( this[4] )
  {
    v3 = sub_10014910();
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v3 + 12))(v3, this[4]);
    this[4] = 0;
  }
  if ( this[1] )
  {
    v4 = sub_10014910();
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 12))(v4, this[1]);
    this[1] = 0;
  }
  if ( this[3] )
  {
    v5 = sub_10014910();
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v5 + 12))(v5, this[3]);
    this[3] = 0;
  }
}
