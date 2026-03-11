/*
 * func-name: ?process_all_message@Dispatch_Thread@Utility@Outpop@@UAEXXZ
 * func-address: 0x1000aca0
 * callers: none
 * callees: 0x10007360, 0x10007910, 0x1000b550, 0x10018cf2
 */

void __thiscall Outpop::Utility::Dispatch_Thread::process_all_message(Outpop::Utility::Dispatch_Thread *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // ebp
  char *v3; // esi
  _DWORD *i; // esi
  _DWORD *v5; // [esp-4h] [ebp-40h]
  char *v6; // [esp+18h] [ebp-24h]
  _BYTE v7[4]; // [esp+20h] [ebp-1Ch] BYREF
  void *v8; // [esp+24h] [ebp-18h]
  int v9; // [esp+28h] [ebp-14h]
  int v10; // [esp+38h] [ebp-4h]

  v8 = sub_10007360();
  v9 = 0;
  v10 = 1;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 88);
  v6 = (char *)this + 88;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 88));
  if ( *((_DWORD *)this + 21) )
  {
    v5 = (_DWORD *)*((_DWORD *)this + 20);
    v3 = (char *)this + 76;
    sub_1000B550(v7, v6, v7, v8, v3, *v5, v3, v5);
    sub_10007910((int)v3);
  }
  LOBYTE(v10) = 0;
  LeaveCriticalSection(v2);
  for ( i = *(_DWORD **)v8; i != v8; i = (_DWORD *)*i )
  {
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)i[2] + 4))(i[2]);
    if ( i == v8 )
      invalid_parameter_noinfo();
  }
  v10 = -1;
  sub_10007910((int)v7);
  operator delete(v8);
}
