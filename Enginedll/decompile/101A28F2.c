/*
 * func-name: _CIpow
 * func-address: 0x101a28f2
 * callers: 0x1009d440, 0x100a5e50, 0x100a6b20, 0x10134e60
 * callees: none
 */

// attributes: thunk
double __usercall CIpow@<st0>(double x@<st0>, double y@<st1>)
{
  return _CIpow(x, y);
}
