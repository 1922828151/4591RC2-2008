/*
 * func-name: ??0WIN32_IoCompletionPort@IONetwork@Outpop@@QAE@XZ
 * func-address: 0x10003a20
 * callers: none
 * callees: none
 */

Outpop::IONetwork::WIN32_IoCompletionPort *__thiscall Outpop::IONetwork::WIN32_IoCompletionPort::WIN32_IoCompletionPort(
        Outpop::IONetwork::WIN32_IoCompletionPort *this)
{
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  Outpop::Utility::Thread_Mutex::Thread_Mutex((Outpop::IONetwork::WIN32_IoCompletionPort *)((char *)this + 12));
  *(_DWORD *)this = -1;
  return this;
}
