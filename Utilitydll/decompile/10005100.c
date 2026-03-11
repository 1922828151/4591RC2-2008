/*
 * func-name: ?cancel@Timer_Queue@Utility@Outpop@@QAEXJ@Z
 * func-address: 0x10005100
 * callers: none
 * callees: 0x100063a0, 0x10006cd0
 */

void __thiscall Outpop::Utility::Timer_Queue::cancel(Outpop::Utility::Timer_Queue *this, int a2)
{
  int v3; // ebx
  void *v4; // edi
  _DWORD *v5; // esi
  int v6; // edi
  int v7; // edi
  int v8; // [esp+10h] [ebp-24h]
  int v9; // [esp+10h] [ebp-24h]
  struct _RTL_CRITICAL_SECTION *lpCriticalSection; // [esp+18h] [ebp-1Ch]
  int v11; // [esp+1Ch] [ebp-18h] BYREF
  void *v12; // [esp+20h] [ebp-14h]
  int v13; // [esp+30h] [ebp-4h]

  lpCriticalSection = (struct _RTL_CRITICAL_SECTION *)((char *)this + 76);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 76));
  v13 = 0;
  sub_10006CD0(&v11, &a2);
  v3 = v11;
  v4 = (void *)*((_DWORD *)this + 36);
  if ( !v11 || (Outpop::Utility::Timer_Queue *)v11 != (Outpop::Utility::Timer_Queue *)((char *)this + 140) )
    invalid_parameter_noinfo();
  v5 = v12;
  if ( v12 != v4 )
  {
    v11 = 0;
    LOBYTE(v13) = 1;
    if ( !v3 )
      invalid_parameter_noinfo();
    if ( v5 == *(_DWORD **)(v3 + 4) )
      invalid_parameter_noinfo();
    v6 = *(_DWORD *)(v5[3] + 8);
    v8 = v5[3];
    if ( v6 && !InterlockedDecrement((volatile LONG *)(v6 + 4)) )
      (**(void (__thiscall ***)(int, int))v6)(v6, 1);
    *(_DWORD *)(v8 + 8) = 0;
    v11 = 0;
    LOBYTE(v13) = 2;
    if ( v5 == *(_DWORD **)(v3 + 4) )
      invalid_parameter_noinfo();
    v7 = *(_DWORD *)(v5[3] + 40);
    v9 = v5[3];
    if ( v7 && !InterlockedDecrement((volatile LONG *)(v7 + 4)) )
      (**(void (__thiscall ***)(int, int))v7)(v7, 1);
    *(_DWORD *)(v9 + 40) = 0;
    LOBYTE(v13) = 0;
    if ( v5 == *(_DWORD **)(v3 + 4) )
      invalid_parameter_noinfo();
    *(_BYTE *)(v5[3] + 44) = 0;
    sub_100063A0((int)&v11, v3, v5);
  }
  v13 = -1;
  LeaveCriticalSection(lpCriticalSection);
}
