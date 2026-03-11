/*
 * func-name: sub_10016990
 * func-address: 0x10016990
 * callers: 0x10016a00, 0x10016a30, 0x10016af0
 * callees: none
 */

int __thiscall sub_10016990(_DWORD *this)
{
  char *v1; // esi

  *(_DWORD *)((char *)this + *(_DWORD *)(*(this - 24) + 4) - 96) = &std::strstream::`vftable';
  v1 = (char *)(this - 21);
  std::strstreambuf::~strstreambuf((std::strstreambuf *)(this - 21));
  return std::iostream::~basic_iostream<char,std::char_traits<char>>(v1);
}
