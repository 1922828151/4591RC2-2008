/*
 * func-name: ??0Stream_Base@Utility@Outpop@@QAE@AAV012@HH_N@Z
 * func-address: 0x1000ed80
 * callers: 0x1000e500, 0x1000e6b0, 0x1000f3d0, 0x1000f490
 * callees: 0x1000f590
 */

Outpop::Utility::Stream_Base *__thiscall Outpop::Utility::Stream_Base::Stream_Base(
        Outpop::Utility::Stream_Base *this,
        struct Outpop::Utility::Stream_Base *a2,
        int a3,
        int a4,
        bool a5)
{
  int *v6; // ebx
  int v7; // edi
  int v8; // eax
  bool v9; // zf
  void (__thiscall ***v10)(_DWORD, int); // edi
  _DWORD v12[2]; // [esp+14h] [ebp-14h] BYREF
  int v13; // [esp+24h] [ebp-4h]

  v12[1] = this;
  *(_DWORD *)this = &Outpop::Utility::Ref_Object::`vftable';
  *((_DWORD *)this + 1) = 0;
  v13 = 0;
  *(_DWORD *)this = &Outpop::Utility::Stream_Base::`vftable';
  *((_DWORD *)this + 8) = 0;
  LOBYTE(v13) = 1;
  *((_DWORD *)this + 4) = a3;
  *((_DWORD *)this + 3) = a4 + a3;
  *((_BYTE *)this + 20) = a5;
  *((_DWORD *)this + 7) = *((_DWORD *)a2 + 7);
  v6 = (int *)Outpop::Utility::Stream_Base::cont(v12);
  LOBYTE(v13) = 2;
  v7 = *((_DWORD *)this + 8);
  if ( v7 && !InterlockedDecrement((volatile LONG *)(v7 + 4)) )
    (**(void (__thiscall ***)(int, int))v7)(v7, 1);
  v8 = *v6;
  v9 = *v6 == 0;
  *((_DWORD *)this + 8) = *v6;
  if ( !v9 )
    InterlockedIncrement((volatile LONG *)(v8 + 4));
  LOBYTE(v13) = 1;
  v10 = (void (__thiscall ***)(_DWORD, int))v12[0];
  if ( v12[0] && !InterlockedDecrement((volatile LONG *)(v12[0] + 4)) && v10 )
    (**v10)(v10, 1);
  *((_DWORD *)this + 6) = a2;
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
  InterlockedIncrement((volatile LONG *)a2 + 1);
  return this;
}
