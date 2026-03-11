/*
 * func-name: ?set_sequence_id@Binary_Stream@Utility@Outpop@@QAEXI@Z
 * func-address: 0x1000e940
 * callers: none
 * callees: none
 */

void __thiscall Outpop::Utility::Binary_Stream::set_sequence_id(Outpop::Utility::Binary_Stream *this, unsigned int a2)
{
  *((_DWORD *)this + 14) = a2;
}
