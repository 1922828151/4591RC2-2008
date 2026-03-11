/*
 * func-name: sub_102A7C40
 * func-address: 0x102a7c40
 * callers: 0x1001a447
 * callees: none
 */

int __thiscall sub_102A7C40(_DWORD *this)
{
  int result; // eax
  int v3; // eax

  if ( !std::uncaught_exception() )
    std::ostream::_Osfx(*this);
  result = std::ios::rdbuf(*this + *(_DWORD *)(*(_DWORD *)*this + 4));
  if ( result )
  {
    v3 = std::ios::rdbuf(*this + *(_DWORD *)(*(_DWORD *)*this + 4));
    return std::streambuf::_Unlock(v3);
  }
  return result;
}
