/*
 * func-name: ??1WIN32_IoCompletionPort@IONetwork@Outpop@@QAE@XZ
 * func-address: 0x10003a90
 * callers: none
 * callees: 0x10003b50
 */

void __thiscall Outpop::IONetwork::WIN32_IoCompletionPort::~WIN32_IoCompletionPort(
        Outpop::IONetwork::WIN32_IoCompletionPort *this)
{
  if ( *(_DWORD *)this != -1 )
    Outpop::IONetwork::WIN32_IoCompletionPort::close(this);
  Outpop::Utility::Thread_Mutex::~Thread_Mutex((Outpop::IONetwork::WIN32_IoCompletionPort *)((char *)this + 12));
}
