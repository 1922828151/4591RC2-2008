/*
 * func-name: sub_101465B0
 * func-address: 0x101465b0
 * callers: 0x10145800
 * callees: 0x101a2534
 */

_DWORD *__thiscall sub_101465B0(_DWORD *this)
{
  _DWORD *v2; // eax

  this[2] = 0;
  this[3] = 0;
  this[4] = 0;
  v2 = operator new(4u);
  if ( v2 )
    *v2 = &ControllerManagerAllocator::`vftable';
  else
    v2 = 0;
  this[1] = v2;
  *this = NxCreateControllerManager(v2);
  return this;
}
