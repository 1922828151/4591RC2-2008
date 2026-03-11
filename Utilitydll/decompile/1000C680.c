/*
 * func-name: ?Remove_RW_Cont@TF_RW_Thread_Mutex@Utility@Outpop@@QAE_NXZ
 * func-address: 0x1000c680
 * callers: none
 * callees: none
 */

char __thiscall Outpop::Utility::TF_RW_Thread_Mutex::Remove_RW_Cont(HANDLE *this)
{
  if ( this[11] )
  {
    CloseHandle(this[6]);
    CloseHandle(this[7]);
    this[11] = 0;
  }
  return 1;
}
