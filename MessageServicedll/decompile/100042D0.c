/*
 * func-name: ?reset_to_data@Message@1Outpop@@QAEXXZ
 * func-address: 0x100042d0
 * callers: none
 * callees: none
 */

void __thiscall Outpop::Message::Message::reset_to_data(Outpop::Message::Message *this)
{
  char *ptr; // eax

  ptr = Outpop::Utility::Stream_Base::get_read_ptr(this);
  Outpop::Utility::Stream_Base::move_read_pos(
    this,
    *((_DWORD *)this + 25) + *((unsigned __int8 *)this + 104) - (_DWORD)ptr);
}
