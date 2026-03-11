/*
 * func-name: ?Init_RW_Cont@TF_RW_Thread_Mutex@Utility@Outpop@@QAE_NXZ
 * func-address: 0x1000c620
 * callers: 0x1000c530
 * callees: none
 */

char __thiscall Outpop::Utility::TF_RW_Thread_Mutex::Init_RW_Cont(Outpop::Utility::TF_RW_Thread_Mutex *this)
{
  HANDLE SemaphoreA; // eax
  HANDLE v4; // eax

  SemaphoreA = CreateSemaphoreA(0, 0, 0xFFFF, 0);
  *((_DWORD *)this + 6) = SemaphoreA;
  if ( !SemaphoreA )
    return 0;
  v4 = CreateSemaphoreA(0, 0, 1, 0);
  *((_DWORD *)this + 7) = v4;
  if ( v4 )
  {
    *((_DWORD *)this + 11) = 1;
    return 1;
  }
  else
  {
    CloseHandle(*((HANDLE *)this + 6));
    return 0;
  }
}
