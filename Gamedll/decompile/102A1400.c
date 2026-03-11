/*
 * func-name: sub_102A1400
 * func-address: 0x102a1400
 * callers: 0x1000a867
 * callees: none
 */

_BYTE *__thiscall sub_102A1400(_BYTE *this, int a2)
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
