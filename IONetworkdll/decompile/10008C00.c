/*
 * func-name: ?set_channel_handle@Channel@IONetwork@Outpop@@QAEXPAVChannel_Handler@23@@Z
 * func-address: 0x10008c00
 * callers: none
 * callees: none
 */

struct Outpop::IONetwork::Channel_Handler *__thiscall Outpop::IONetwork::Channel::set_channel_handle(
        Outpop::IONetwork::Channel *this,
        struct Outpop::IONetwork::Channel_Handler *a2)
{
  struct Outpop::IONetwork::Channel_Handler *result; // eax

  result = a2;
  *((_DWORD *)this + 29) = a2;
  return result;
}
