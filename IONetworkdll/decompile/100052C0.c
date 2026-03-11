/*
 * func-name: ?set_com_port@Channel@IONetwork@Outpop@@QAEXPAVWIN32_IoCompletionPort@23@@Z
 * func-address: 0x100052c0
 * callers: none
 * callees: none
 */

struct Outpop::IONetwork::WIN32_IoCompletionPort *__thiscall Outpop::IONetwork::Channel::set_com_port(
        Outpop::IONetwork::Channel *this,
        struct Outpop::IONetwork::WIN32_IoCompletionPort *a2)
{
  struct Outpop::IONetwork::WIN32_IoCompletionPort *result; // eax

  result = a2;
  *((_DWORD *)this + 32) = a2;
  return result;
}
