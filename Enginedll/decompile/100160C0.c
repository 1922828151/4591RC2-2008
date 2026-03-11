/*
 * func-name: sub_100160C0
 * func-address: 0x100160c0
 * callers: 0x100161f0
 * callees: none
 */

_BYTE *__thiscall sub_100160C0(_BYTE *this, int a2)
{
  int v3; // eax
  int v4; // eax

  *(_DWORD *)this = a2;
  if ( std::ios::rdbuf(a2 + *(_DWORD *)(*(_DWORD *)a2 + 4)) )
  {
    v3 = std::ios::rdbuf(*(_DWORD *)this + *(_DWORD *)(**(_DWORD **)this + 4));
    std::streambuf::_Lock(v3);
  }
  if ( std::ios_base::good((std::ios_base *)(a2 + *(_DWORD *)(*(_DWORD *)a2 + 4)))
    && std::ios::tie(a2 + *(_DWORD *)(*(_DWORD *)a2 + 4)) )
  {
    v4 = std::ios::tie(a2 + *(_DWORD *)(*(_DWORD *)a2 + 4));
    std::ostream::flush(v4);
  }
  this[4] = std::ios_base::good((std::ios_base *)(a2 + *(_DWORD *)(*(_DWORD *)a2 + 4)));
  return this;
}
