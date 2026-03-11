/*
 * func-name: sub_100096E0
 * func-address: 0x100096e0
 * callers: 0x100149d0, 0x10048c00, 0x10070f20, 0x100ae850, 0x100d3260
 * callees: none
 */

int __thiscall sub_100096E0(_DWORD *this)
{
  int result; // eax

  result = this[1];
  if ( result )
    return (this[2] - result) / 44;
  return result;
}
