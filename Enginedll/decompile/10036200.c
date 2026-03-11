/*
 * func-name: sub_10036200
 * func-address: 0x10036200
 * callers: 0x10036280, 0x10036480, 0x100d8b50
 * callees: none
 */

int __thiscall sub_10036200(_DWORD *this)
{
  int result; // eax
  int v3; // eax

  if ( !std::uncaught_exception() )
    std::wostream::_Osfx(*this);
  result = std::wios::rdbuf(*this + *(_DWORD *)(*(_DWORD *)*this + 4));
  if ( result )
  {
    v3 = std::wios::rdbuf(*this + *(_DWORD *)(*(_DWORD *)*this + 4));
    return std::wstreambuf::_Unlock(v3);
  }
  return result;
}
