/*
 * func-name: sub_100B8330
 * func-address: 0x100b8330
 * callers: 0x10003cdd
 * callees: 0x102c9d50
 */

_BYTE *__thiscall sub_100B8330(_BYTE *this, char a2)
{
  bool v3; // zf
  _DWORD *v4; // eax
  _DWORD *v5; // esi

  v3 = this[16] == 0;
  *(_DWORD *)this = &ObjectNodeList::`vftable';
  if ( !v3 )
  {
    v4 = (_DWORD *)*((_DWORD *)this + 1);
    if ( v4 )
    {
      do
      {
        v5 = (_DWORD *)v4[1];
        operator delete(v4);
        v4 = v5;
      }
      while ( v5 );
    }
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
