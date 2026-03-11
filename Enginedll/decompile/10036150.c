/*
 * func-name: sub_10036150
 * func-address: 0x10036150
 * callers: 0x10036280, 0x10036480, 0x100d8b50
 * callees: none
 */

_BYTE *__thiscall sub_10036150(_BYTE *this, int a2)
{
  int v3; // eax
  int v4; // eax

  *(_DWORD *)this = a2;
  if ( std::wios::rdbuf(a2 + *(_DWORD *)(*(_DWORD *)a2 + 4)) )
  {
    v3 = std::wios::rdbuf(*(_DWORD *)this + *(_DWORD *)(**(_DWORD **)this + 4));
    std::wstreambuf::_Lock(v3);
  }
  if ( std::ios_base::good((std::ios_base *)(a2 + *(_DWORD *)(*(_DWORD *)a2 + 4)))
    && std::wios::tie(a2 + *(_DWORD *)(*(_DWORD *)a2 + 4)) )
  {
    v4 = std::wios::tie(a2 + *(_DWORD *)(*(_DWORD *)a2 + 4));
    std::wostream::flush(v4);
  }
  this[4] = std::ios_base::good((std::ios_base *)(a2 + *(_DWORD *)(*(_DWORD *)a2 + 4)));
  return this;
}
