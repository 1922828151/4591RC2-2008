/*
 * func-name: ?get_io_thread@Message_Facade@Message@Outpop@@SAAAVIO_Thread@23@XZ
 * func-address: 0x1000d200
 * callers: none
 * callees: none
 */

struct Outpop::Message::IO_Thread *__cdecl Outpop::Message::Message_Facade::get_io_thread()
{
  return (struct Outpop::Message::IO_Thread *)*((_DWORD *)Outpop::Message::Message_Facade::g_c_ + 16);
}
