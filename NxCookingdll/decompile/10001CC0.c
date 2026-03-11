/*
 * func-name: sub_10001CC0
 * func-address: 0x10001cc0
 * callers: 0x10002fe0
 * callees: none
 */

void __thiscall sub_10001CC0(_DWORD *this)
{
  bool v2; // zf
  int v3; // eax

  v2 = this[4] == 0;
  *this = &meq::InputStream::`vftable';
  if ( !v2 && !*((_BYTE *)this + 4) )
  {
    if ( !dword_100580A4 )
      __debugbreak();
    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)(dword_100580A4 + 24) + 20))(dword_100580A4 + 24);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v3 + 20))(v3, this[4]);
  }
}
