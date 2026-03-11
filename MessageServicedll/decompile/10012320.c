/*
 * func-name: ?get_channel_number@Channel_Manager@Message@Outpop@@QAEIXZ
 * func-address: 0x10012320
 * callers: none
 * callees: none
 */

int __thiscall Outpop::Message::Channel_Manager::get_channel_number(Outpop::Message::Channel_Manager *this)
{
  Outpop::Utility::Lock *v2; // edi
  int v3; // esi

  v2 = (Outpop::Message::Channel_Manager *)((char *)this + 64);
  Outpop::Utility::Lock::lock((Outpop::Message::Channel_Manager *)((char *)this + 64));
  v3 = *((_DWORD *)this + 25);
  Outpop::Utility::Lock::unlock(v2);
  return v3;
}
