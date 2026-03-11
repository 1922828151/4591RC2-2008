/*
 * func-name: sub_1000DA60
 * func-address: 0x1000da60
 * callers: 0x1000d890
 * callees: none
 */

int __stdcall sub_1000DA60(_DWORD *a1)
{
  int v1; // edx
  int result; // eax

  if ( !std::uncaught_exception() )
    std::ostream::_Osfx(*a1);
  v1 = *(_DWORD *)(*(_DWORD *)*a1 + 4);
  result = *(_DWORD *)(v1 + *a1 + 40);
  if ( result )
    return std::streambuf::_Unlock(*(_DWORD *)(v1 + *a1 + 40));
  return result;
}
