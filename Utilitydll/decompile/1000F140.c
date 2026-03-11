/*
 * func-name: ?get_totallength@Stream_Base@Utility@Outpop@@QAEHXZ
 * func-address: 0x1000f140
 * callers: none
 * callees: 0x1000f590
 */

int __thiscall Outpop::Utility::Stream_Base::get_totallength(volatile LONG *this)
{
  volatile LONG *v1; // esi
  int v2; // ebx
  volatile LONG **v3; // edi
  void (__thiscall ***v4)(_DWORD, int); // edi
  int v6; // [esp+18h] [ebp-10h] BYREF
  int v7; // [esp+24h] [ebp-4h]

  v1 = this;
  v2 = 0;
  if ( this )
    InterlockedIncrement(this + 1);
  v7 = 0;
  while ( v1 )
  {
    v2 += *((_DWORD *)v1 + 3) - *((_DWORD *)v1 + 4);
    v3 = (volatile LONG **)Outpop::Utility::Stream_Base::cont(&v6);
    LOBYTE(v7) = 1;
    if ( !InterlockedDecrement(v1 + 1) )
      (**(void (__thiscall ***)(volatile LONG *, int))v1)(v1, 1);
    v1 = *v3;
    if ( *v3 )
      InterlockedIncrement(v1 + 1);
    LOBYTE(v7) = 0;
    v4 = (void (__thiscall ***)(_DWORD, int))v6;
    if ( v6 && !InterlockedDecrement((volatile LONG *)(v6 + 4)) && v4 )
      (**v4)(v4, 1);
  }
  return v2;
}
