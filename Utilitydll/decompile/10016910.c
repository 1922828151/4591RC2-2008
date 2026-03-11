/*
 * func-name: sub_10016910
 * func-address: 0x10016910
 * callers: 0x10016a30
 * callees: none
 */

int __stdcall sub_10016910(int a1)
{
  std::iostream::basic_iostream<char>(a1, a1 + 12, 0);
  *(_DWORD *)(a1 + *(_DWORD *)(*(_DWORD *)a1 + 4)) = &std::strstream::`vftable';
  std::strstreambuf::strstreambuf((std::strstreambuf *)(a1 + 12), 0);
  return a1;
}
