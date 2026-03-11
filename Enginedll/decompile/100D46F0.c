/*
 * func-name: sub_100D46F0
 * func-address: 0x100d46f0
 * callers: 0x100c6ff0, 0x100cada0
 * callees: 0x1006cf30
 */

_DWORD *__thiscall sub_100D46F0(_DWORD *this)
{
  _DWORD *v2; // edi
  _DWORD *v3; // eax

  v2 = this + 1;
  *this = &PropertyHolder::`vftable';
  v3 = sub_1006CF30();
  v2[1] = v3;
  *((_BYTE *)v3 + 81) = 1;
  *(_DWORD *)(v2[1] + 4) = v2[1];
  *(_DWORD *)v2[1] = v2[1];
  *(_DWORD *)(v2[1] + 8) = v2[1];
  v2[2] = 0;
  std::string::string(this + 4);
  this[12] = 0;
  this[13] = 0;
  this[14] = 0;
  return this;
}
