/*
 * func-name: ?resize@Message@1Outpop@@UAE_NH@Z
 * func-address: 0x10020b30
 * callers: none
 * callees: none
 */

bool __thiscall Outpop::Message::Message::resize(Outpop::Utility::OS_Buffer **this, int a2)
{
  int v3; // edi
  bool v4; // bl

  if ( !this[25] )
    return Outpop::Utility::Stream_Base::resize((Outpop::Utility::Stream_Base *)this, a2);
  v3 = this[25] - (Outpop::Utility::OS_Buffer *)Outpop::Utility::OS_Buffer::get_buffer(this[2]);
  v4 = Outpop::Utility::Stream_Base::resize((Outpop::Utility::Stream_Base *)this, a2);
  if ( v4 )
    this[25] = (Outpop::Utility::OS_Buffer *)&Outpop::Utility::OS_Buffer::get_buffer(this[2])[v3];
  return v4;
}
