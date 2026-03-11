/*
 * func-name: ?set_error_handle@Channel@IONetwork@Outpop@@QAEXPAVChannel_Error_Handler@23@@Z
 * func-address: 0x10008c10
 * callers: none
 * callees: none
 */

struct Outpop::IONetwork::Channel_Error_Handler *__thiscall Outpop::IONetwork::Channel::set_error_handle(
        Outpop::IONetwork::Channel *this,
        struct Outpop::IONetwork::Channel_Error_Handler *a2)
{
  struct Outpop::IONetwork::Channel_Error_Handler *result; // eax

  result = a2;
  *((_DWORD *)this + 30) = a2;
  return result;
}
