/*
 * func-name: ?get_io_thread@Context@Message@Outpop@@QAEAAVIO_Thread@23@XZ
 * func-address: 0x100012c0
 * callers: none
 * callees: none
 */

struct Outpop::Message::IO_Thread *__thiscall Outpop::Message::Context::get_io_thread(Outpop::Message::Context *this)
{
  return (struct Outpop::Message::IO_Thread *)*((_DWORD *)this + 16);
}
