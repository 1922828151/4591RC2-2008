/*
 * func-name: ?svc@Dispatch_Thread@Utility@Outpop@@UAEHXZ
 * func-address: 0x1000aa00
 * callers: none
 * callees: 0x10009820, 0x10018cf2
 */

int __thiscall Outpop::Utility::Dispatch_Thread::svc(Outpop::Utility::Dispatch_Thread *this)
{
  volatile LONG *v2; // ebx
  struct _RTL_CRITICAL_SECTION *v3; // edi
  _DWORD *v4; // eax
  _DWORD *v5; // esi
  void **v6; // eax
  _DWORD **v7; // esi
  _DWORD *v8; // edi

  _set_se_translator(Outpop::Utility::structure_exception::my_se_translator);
  v2 = 0;
  do
  {
    while ( 1 )
    {
      v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 88);
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 88));
      if ( !*((_DWORD *)this + 21) )
        sub_10009820((int)this + 112);
      if ( *((_DWORD *)this + 21) )
        break;
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 88));
    }
    v4 = (_DWORD *)*((_DWORD *)this + 20);
    v5 = (_DWORD *)*v4;
    if ( (_DWORD *)*v4 == v4 )
      invalid_parameter_noinfo();
    if ( v2 && !InterlockedDecrement(v2 + 1) )
      (**(void (__thiscall ***)(volatile LONG *, int))v2)(v2, 1);
    v2 = (volatile LONG *)v5[2];
    if ( v2 )
      InterlockedIncrement(v2 + 1);
    v6 = (void **)*((_DWORD *)this + 20);
    v7 = (_DWORD **)*v6;
    if ( *v6 == v6 )
      invalid_parameter_noinfo();
    if ( v7 != *((_DWORD ***)this + 20) )
    {
      *v7[1] = *v7;
      (*v7)[1] = v7[1];
      v8 = v7[2];
      if ( v8 && !InterlockedDecrement(v8 + 1) )
        (*(void (__thiscall **)(_DWORD *, int))*v8)(v8, 1);
      operator delete(v7);
      v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 88);
      --*((_DWORD *)this + 21);
    }
    LeaveCriticalSection(v3);
  }
  while ( (*(unsigned __int8 (__thiscall **)(volatile LONG *))(*v2 + 4))(v2) );
  if ( v2 && !InterlockedDecrement(v2 + 1) )
    (**(void (__thiscall ***)(volatile LONG *, int))v2)(v2, 1);
  return 1;
}
