/*
 * func-name: ?wait@Barrier@Utility@Outpop@@QAEHXZ
 * func-address: 0x1000c1f0
 * callers: none
 * callees: none
 */

int __thiscall Outpop::Utility::Barrier::wait(volatile LONG *this)
{
  volatile LONG *v2; // edi
  LONG v4; // eax
  DWORD v5; // ebx
  LONG v6; // eax
  LONG v7; // eax
  void *v8; // [esp-8h] [ebp-14h]

  v2 = this + 2;
  if ( *((_DWORD *)this + 6) )
  {
    *v2 = InterlockedIncrement(this + 2);
    v5 = WaitForSingleObject(*(HANDLE *)this, 0xFFFFFFFF);
    v7 = InterlockedDecrement(v2);
    *v2 = v7;
    if ( !v7 )
      ResetEvent(*(HANDLE *)this);
  }
  else
  {
    if ( *((_DWORD *)this + 1) - *v2 == 1 )
    {
      (*((void (__cdecl **)(_DWORD))this + 4))(*((_DWORD *)this + 5));
      SetEvent(*(HANDLE *)this);
      return 0;
    }
    v4 = InterlockedIncrement(this + 2);
    v8 = (void *)*this;
    *v2 = v4;
    v5 = WaitForSingleObject(v8, 0xFFFFFFFF);
    v6 = InterlockedDecrement(v2);
    *v2 = v6;
    if ( !v6 )
    {
      ResetEvent(*(HANDLE *)this);
      return -(v5 != 0);
    }
  }
  return -(v5 != 0);
}
