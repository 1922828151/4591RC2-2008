/*
 * func-name: sub_10014D60
 * func-address: 0x10014d60
 * callers: 0x10010c70, 0x100122c0, 0x100126b0
 * callees: none
 */

char __thiscall sub_10014D60(_BYTE *this)
{
  _DWORD *v1; // eax

  v1 = *(_DWORD **)this;
  this[24] = 0;
  *((_DWORD *)this + 4) = v1[1] + *v1;
  ++v1[1];
  return **((_BYTE **)this + 4);
}
