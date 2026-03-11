/*
 * func-name: ?set_handler@Channel@IONetwork@Outpop@@QAEXAAVChannel_Handler@23@AAVChannel_Error_Handler@23@@Z
 * func-address: 0x100052a0
 * callers: none
 * callees: none
 */

struct Outpop::IONetwork::Channel_Handler *__thiscall Outpop::IONetwork::Channel::set_handler(
        Outpop::IONetwork::Channel *this,
        struct Outpop::IONetwork::Channel_Handler *a2,
        struct Outpop::IONetwork::Channel_Error_Handler *a3)
{
  struct Outpop::IONetwork::Channel_Handler *result; // eax

  result = a2;
  *((_DWORD *)this + 29) = a2;
  *((_DWORD *)this + 30) = a3;
  return result;
}
