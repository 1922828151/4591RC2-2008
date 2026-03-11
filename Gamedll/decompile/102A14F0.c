/*
 * func-name: sub_102A14F0
 * func-address: 0x102a14f0
 * callers: 0x1000ee0d
 * callees: none
 */

int __thiscall sub_102A14F0(_DWORD *this)
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
