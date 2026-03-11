/*
 * func-name: sub_10014D80
 * func-address: 0x10014d80
 * callers: 0x100126b0
 * callees: none
 */

int __thiscall sub_10014D80(_BYTE *this)
{
  _DWORD *v1; // eax

  v1 = *(_DWORD **)this;
  this[24] = 0;
  *((_DWORD *)this + 4) = v1[1] + *v1;
  v1[1] += 4;
  return **((_DWORD **)this + 4);
}
