/*
 * func-name: ?get_io@IO_Thread@Message@Outpop@@QAEPAVWIN32_IoCompletionPort@IONetwork@3@XZ
 * func-address: 0x10004bc0
 * callers: none
 * callees: none
 */

struct Outpop::IONetwork::WIN32_IoCompletionPort *__thiscall Outpop::Message::IO_Thread::get_io(
        Outpop::Message::IO_Thread *this)
{
  return (Outpop::Message::IO_Thread *)((char *)this + 76);
}
