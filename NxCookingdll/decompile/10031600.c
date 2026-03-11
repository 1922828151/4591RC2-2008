/*
 * func-name: sub_10031600
 * func-address: 0x10031600
 * callers: 0x10030940
 * callees: 0x10015020
 */

_DWORD *__thiscall sub_10031600(_DWORD *this)
{
  unsigned int v2; // ebx
  int v3; // edi

  v2 = 0;
  if ( this[1] )
  {
    v3 = 0;
    do
    {
      if ( *(_DWORD *)(this[9] + v3 + 36) )
      {
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(
          dword_100580A0,
          *(_DWORD *)(this[9] + v3 + 36));
        *(_DWORD *)(this[9] + v3 + 36) = 0;
      }
      ++v2;
      v3 += 40;
    }
    while ( v2 < this[1] );
  }
  if ( this[9] )
  {
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, this[9]);
    this[9] = 0;
  }
  return sub_10015020(this + 2);
}
