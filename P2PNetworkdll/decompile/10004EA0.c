/*
 * func-name: ?send_message@Peer@P2P@Outpop@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AAV?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@3@@Z
 * func-address: 0x10004ea0
 * callers: none
 * callees: 0x10002b10, 0x100234ce
 */

struct Outpop::IONetwork::Asynch_Result *__thiscall Outpop::P2P::Peer::send_message(
        void *this,
        int a2,
        Outpop::Utility::Ref_Object **a3)
{
  struct Outpop::IONetwork::Asynch_Result *result; // eax
  struct Outpop::IONetwork::Asynch_Result *v5; // esi

  result = (struct Outpop::IONetwork::Asynch_Result *)operator new(0x40u);
  if ( result )
  {
    result = (struct Outpop::IONetwork::Asynch_Result *)sub_10002B10((int)this, result, a2, a3);
    v5 = result;
  }
  else
  {
    v5 = 0;
  }
  if ( v5 )
  {
    result = (struct Outpop::IONetwork::Asynch_Result *)Outpop::IONetwork::WIN32_IoCompletionPort::post(
                                                          (Outpop::IONetwork::WIN32_IoCompletionPort *)(dword_10030AA4 + 20),
                                                          v5,
                                                          0);
    if ( result == (struct Outpop::IONetwork::Asynch_Result *)-1 )
      return (struct Outpop::IONetwork::Asynch_Result *)(**(int (__thiscall ***)(struct Outpop::IONetwork::Asynch_Result *, int))v5)(
                                                          v5,
                                                          1);
  }
  return result;
}
