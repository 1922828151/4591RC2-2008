/*
 * func-name: sub_101FBF30
 * func-address: 0x101fbf30
 * callers: 0x10008fa8
 * callees: 0x102c9d50
 */

_DWORD *__thiscall sub_101FBF30(_DWORD *this, char a2)
{
  *this = &CMsgDlgHandler::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
