/*
 * func-name: sub_100019E0
 * func-address: 0x100019e0
 * callers: 0x10002180, 0x100021a0, 0x10002970
 * callees: 0x10034bd3
 */

_DWORD *__thiscall sub_100019E0(char *this)
{
  _DWORD *result; // eax
  bool v3; // zf
  int v4; // eax

  if ( *((_DWORD *)this + 8208) )
    j__free(*((void **)this + 8208));
  if ( this )
    result = this + 36;
  else
    result = 0;
  *result = &meq::OutputStream::`vftable';
  v3 = *((_DWORD *)this + 4) == 0;
  *(_DWORD *)this = &meq::InputStream::`vftable';
  if ( !v3 && !this[4] )
  {
    if ( !dword_100580A4 )
      __debugbreak();
    v4 = (*(int (__thiscall **)(int))(*(_DWORD *)(dword_100580A4 + 24) + 20))(dword_100580A4 + 24);
    return (_DWORD *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 20))(v4, *((_DWORD *)this + 4));
  }
  return result;
}
