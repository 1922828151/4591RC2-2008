/*
 * func-name: sub_10016170
 * func-address: 0x10016170
 * callers: 0x100161f0
 * callees: none
 */

int __thiscall sub_10016170(_DWORD *this)
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
