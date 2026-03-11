/*
 * func-name: ?schedule_repeating_timer@Timer_Queue@Utility@Outpop@@QAEJAAV?$Smart_Ptr@VTimer_Handler@Utility@Outpop@@@23@ABVTime_Value@23@AAV?$Smart_Ptr@VRef_Object@Utility@Outpop@@@23@W4EDispatchType@23@PAVDispatch_Thread@23@@Z
 * func-address: 0x10004430
 * callers: none
 * callees: 0x10001730, 0x10001940, 0x10003590, 0x100043c0, 0x10005a90, 0x10005e10, 0x10008120, 0x100081f0, 0x1000b100, 0x1000e110
 */

int __thiscall Outpop::Utility::Timer_Queue::schedule_repeating_timer(
        int this,
        int *a2,
        _DWORD *a3,
        int *a4,
        int a5,
        int a6)
{
  Outpop::Utility::Time_Value *v7; // eax
  _BYTE *v8; // eax
  void *v9; // eax
  volatile LONG *v10; // edi
  int v11; // esi
  unsigned int v12; // ebx
  void *v13; // eax
  bool v14; // cc
  int *v15; // ebx
  bool v16; // cf
  int v17; // ebx
  bool v18; // zf
  char v19; // bl
  int v21; // [esp+18h] [ebp-44h]
  void *v23[2]; // [esp+24h] [ebp-38h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [esp+2Ch] [ebp-30h]
  _DWORD v25[2]; // [esp+30h] [ebp-2Ch] BYREF
  _BYTE v26[8]; // [esp+38h] [ebp-24h] BYREF
  _BYTE v27[16]; // [esp+40h] [ebp-1Ch] BYREF
  int v28; // [esp+58h] [ebp-4h]

  v7 = Outpop::Utility::Time_Value::gettimeofday((Outpop::Utility::Time_Value *)v26);
  Outpop::Utility::operator+((Outpop::Utility::Time_Value *)v25, v7, a3);
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 76);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 76));
  v28 = 0;
  ++*(_DWORD *)(this + 176);
  v21 = 1;
  if ( *(_DWORD *)(this + 176) != -1 )
    v21 = *(_DWORD *)(this + 176);
  Outpop::Utility::Sect_Block_Allocator::instance();
  v8 = (_BYTE *)sub_10005A90();
  *v8 = 2;
  v9 = v8 + 1;
  v23[0] = v9;
  LOBYTE(v28) = 2;
  if ( v9 )
    v10 = (volatile LONG *)sub_10003590(a3, (int)v9, v21, a2, v25, 1, a4, a5, a6);
  else
    v10 = 0;
  LOBYTE(v28) = 0;
  if ( v10 )
    InterlockedIncrement(v10 + 1);
  LOBYTE(v28) = 3;
  v11 = this + 100;
  sub_1000B100();
  v12 = *(_DWORD *)(v11 + 8);
  if ( *(_DWORD *)(v11 + 4) > v12 )
    invalid_parameter_noinfo();
  v13 = *(void **)(v11 + 4);
  v14 = (unsigned int)v13 <= *(_DWORD *)(v11 + 8);
  v23[0] = v13;
  if ( !v14 )
  {
    invalid_parameter_noinfo();
    v13 = v23[0];
  }
  sub_100081F0(*(_BYTE *)(v11 + 16), v11, v13, v11, v12);
  v23[0] = (void *)v21;
  v23[1] = (void *)v10;
  if ( v10 )
    InterlockedIncrement(v10 + 1);
  LOBYTE(v28) = 5;
  sub_10008120(v26, v23);
  LOBYTE(v28) = 6;
  sub_10005E10(this + 136, v27, v26);
  LOBYTE(v28) = 5;
  sub_100043C0((LONG)v26);
  LOBYTE(v28) = 3;
  sub_100043C0((LONG)v23);
  v15 = *(int **)(v11 + 4);
  v16 = (unsigned int)v15 < *(_DWORD *)(v11 + 8);
  if ( (unsigned int)v15 > *(_DWORD *)(v11 + 8) )
  {
    invalid_parameter_noinfo();
    v16 = (unsigned int)v15 < *(_DWORD *)(v11 + 8);
  }
  if ( !v16 )
    invalid_parameter_noinfo();
  v17 = *v15;
  if ( *(_DWORD *)(v17 + 12) != v25[0] || (v18 = *(_DWORD *)(v17 + 16) == v25[1], v19 = 1, !v18) )
    v19 = 0;
  LOBYTE(v28) = 0;
  if ( v10 && !InterlockedDecrement(v10 + 1) )
    (**(void (__thiscall ***)(volatile LONG *, int))v10)(v10, 1);
  v28 = -1;
  LeaveCriticalSection(lpCriticalSection);
  if ( v19 )
    SetEvent(*(HANDLE *)(this + 120));
  return v21;
}
