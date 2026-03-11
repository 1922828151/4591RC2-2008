/*
 * func-name: ?wait_one_thread@Task@Utility@Outpop@@QAEHH@Z
 * func-address: 0x1000d030
 * callers: none
 * callees: 0x1000db80
 */

int __thiscall Outpop::Utility::Task::wait_one_thread(Outpop::Utility::Task *this, DWORD dwMilliseconds)
{
  _DWORD *v3; // eax
  _DWORD *v4; // esi
  void *v5; // esi
  DWORD v6; // edi

  if ( !*((_DWORD *)this + 6) )
    return -1;
  v3 = (_DWORD *)*((_DWORD *)this + 5);
  v4 = (_DWORD *)*v3;
  if ( (_DWORD *)*v3 == v3 )
    invalid_parameter_noinfo();
  v5 = (void *)v4[3];
  v6 = WaitForSingleObject(v5, dwMilliseconds);
  sub_1000DB80();
  if ( v6 )
  {
    TerminateThread(v5, 0xFFFFFFFF);
    CloseHandle(v5);
    return 1;
  }
  else
  {
    CloseHandle(v5);
    return 0;
  }
}
