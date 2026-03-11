/*
 * func-name: ?set_reliable_id@Binary_Stream@Utility@Outpop@@QAEXG@Z
 * func-address: 0x1000e9a0
 * callers: none
 * callees: none
 */

void __thiscall Outpop::Utility::Binary_Stream::set_reliable_id(
        Outpop::Utility::Binary_Stream *this,
        unsigned __int16 a2)
{
  *((_WORD *)this + 25) = a2;
}
