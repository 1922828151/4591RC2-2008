/*
 * func-name: ?set_packet_type@Binary_Stream@Utility@Outpop@@QAEXW4EPacketType@23@@Z
 * func-address: 0x1000e9e0
 * callers: none
 * callees: none
 */

int __thiscall Outpop::Utility::Binary_Stream::set_packet_type(_DWORD *this, int a2)
{
  int result; // eax

  result = a2;
  this[16] = a2;
  return result;
}
