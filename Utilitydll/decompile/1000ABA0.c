/*
 * func-name: ?stop@Dispatch_Thread@Utility@Outpop@@UAEXXZ
 * func-address: 0x1000aba0
 * callers: 0x10016f90
 * callees: 0x10018e10
 */

void __thiscall Outpop::Utility::Dispatch_Thread::stop(Outpop::Utility::Dispatch_Thread *this)
{
  volatile LONG *v2; // eax
  volatile LONG *v3; // esi
  volatile LONG *v4; // [esp+14h] [ebp-18h] BYREF
  int v5; // [esp+18h] [ebp-14h]
  volatile LONG *v6; // [esp+1Ch] [ebp-10h]
  int v7; // [esp+28h] [ebp-4h]

  if ( *((int *)this + 1) > 0 )
  {
    v5 = *((_DWORD *)this + 1);
    do
    {
      v2 = (volatile LONG *)operator new(8u);
      v6 = v2;
      v7 = 0;
      if ( v2 )
      {
        *v2 = (volatile LONG)&Outpop::Utility::Ref_Object::`vftable';
        *((_DWORD *)v2 + 1) = 0;
        *v2 = (volatile LONG)&Outpop::Utility::Thread_Message::`vftable';
        *v2 = (volatile LONG)&Outpop::Utility::Quit_Process::`vftable';
        LOBYTE(v7) = 0;
      }
      else
      {
        v2 = 0;
      }
      v7 = -1;
      v4 = v2;
      if ( v2 )
        InterlockedIncrement(v2 + 1);
      v7 = 3;
      (*(void (__thiscall **)(Outpop::Utility::Dispatch_Thread *, volatile LONG **))(*(_DWORD *)this + 8))(this, &v4);
      v7 = -1;
      if ( v4 )
      {
        v3 = v4;
        if ( !InterlockedDecrement(v4 + 1) )
          (**(void (__thiscall ***)(volatile LONG *, int))v3)(v3, 1);
      }
      --v5;
    }
    while ( v5 );
  }
}
