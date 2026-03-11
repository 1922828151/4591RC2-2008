/*
 * func-name: ?continue_cont@Stream_Base@Utility@Outpop@@QAEXV?$Smart_Ptr@VStream_Base@Utility@Outpop@@@23@@Z
 * func-address: 0x1000f6a0
 * callers: none
 * callees: 0x1000f590, 0x1000f600
 */

void __thiscall Outpop::Utility::Stream_Base::continue_cont(volatile LONG *this, int a2)
{
  volatile LONG *v2; // esi
  _DWORD *v3; // eax
  bool v4; // bl
  void (__thiscall ***v5)(_DWORD, int); // edi
  volatile LONG **v6; // edi
  int *v7; // edi
  int v8; // [esp-4h] [ebp-30h] BYREF
  int v9; // [esp+14h] [ebp-18h] BYREF
  volatile LONG *v10; // [esp+18h] [ebp-14h]
  int *v11; // [esp+1Ch] [ebp-10h] BYREF
  int v12; // [esp+28h] [ebp-4h]

  v12 = 0;
  v2 = this;
  v10 = this;
  if ( this )
    InterlockedIncrement(this + 1);
  LOBYTE(v12) = 1;
  while ( 1 )
  {
    v3 = Outpop::Utility::Stream_Base::cont(v2, &v9);
    LOBYTE(v12) = 2;
    v4 = *v3 != 0;
    LOBYTE(v12) = 1;
    if ( v9 )
    {
      v5 = (void (__thiscall ***)(_DWORD, int))v9;
      if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) )
        (**v5)(v5, 1);
    }
    if ( !v4 )
      break;
    v6 = (volatile LONG **)Outpop::Utility::Stream_Base::cont(v2, &v11);
    LOBYTE(v12) = 3;
    if ( v2 && !InterlockedDecrement(v2 + 1) )
      (**(void (__thiscall ***)(volatile LONG *, int))v2)(v2, 1);
    v2 = *v6;
    v10 = *v6;
    if ( v10 )
      InterlockedIncrement(v2 + 1);
    LOBYTE(v12) = 1;
    v7 = v11;
    if ( v11 && !InterlockedDecrement(v11 + 1) )
    {
      if ( v7 )
        (*(void (__thiscall **)(int *, int))*v7)(v7, 1);
    }
  }
  v11 = &v8;
  v8 = a2;
  if ( a2 )
    InterlockedIncrement((volatile LONG *)(a2 + 4));
  LOBYTE(v12) = 1;
  Outpop::Utility::Stream_Base::cont(v2, v8);
  LOBYTE(v12) = 0;
  if ( v2 && !InterlockedDecrement(v2 + 1) )
    (**(void (__thiscall ***)(volatile LONG *, int))v2)(v2, 1);
  v12 = -1;
  if ( a2 && !InterlockedDecrement((volatile LONG *)(a2 + 4)) )
    (**(void (__thiscall ***)(int, int))a2)(a2, 1);
}
