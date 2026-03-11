/*
 * func-name: sub_100145D0
 * func-address: 0x100145d0
 * callers: 0x1000c820, 0x1000c8e0, 0x10030130
 * callees: 0x10014910
 */

void __thiscall sub_100145D0(_DWORD *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax

  if ( *this )
  {
    v2 = sub_10014910();
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v2 + 12))(v2, *this);
    *this = 0;
  }
  else
  {
    if ( this[4] )
    {
      v3 = sub_10014910();
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v3 + 12))(v3, this[4]);
      this[4] = 0;
    }
    if ( this[3] )
    {
      v4 = sub_10014910();
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 12))(v4, this[3]);
      this[3] = 0;
    }
  }
}
