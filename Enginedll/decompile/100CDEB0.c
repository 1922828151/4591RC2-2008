/*
 * func-name: sub_100CDEB0
 * func-address: 0x100cdeb0
 * callers: 0x10070d30, 0x100d3e00, 0x100d3f80, 0x100d97d0, 0x101586f0, 0x101589f0
 * callees: none
 */

int __thiscall sub_100CDEB0(_DWORD *this)
{
  int result; // eax

  result = this[1];
  if ( result )
    return (this[2] - result) / 36;
  return result;
}
