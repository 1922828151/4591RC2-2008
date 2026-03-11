/*
 * func-name: sub_1015BBF0
 * func-address: 0x1015bbf0
 * callers: none
 * callees: 0x1015abd0, 0x101a2500
 */

std::strstreambuf *__thiscall sub_1015BBF0(std::strstreambuf *this, char a2)
{
  std::strstreambuf::~strstreambuf(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
