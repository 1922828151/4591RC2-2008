/*
 * func-name: ?activate@Task@Utility@Outpop@@QAEHHPAU_SECURITY_ATTRIBUTES@@QAK11@Z
 * func-address: 0x1000d3c0
 * callers: 0x10005280, 0x10016ef0
 * callees: 0x10009580, 0x100096d0, 0x10009740, 0x1000d580, 0x10018cf2, 0x10018e10, 0x10019586
 */

int __thiscall Outpop::Utility::Task::activate(
        Outpop::Utility::Task *this,
        int a2,
        struct _SECURITY_ATTRIBUTES *a3,
        char *a4,
        char *a5,
        char *a6)
{
  void *v8; // edi
  int v9; // ebx
  struct _RTL_CRITICAL_SECTION *v10; // eax
  struct _RTL_CRITICAL_SECTION *v11; // eax
  char *v12; // edx
  int v13; // eax
  unsigned int *v14; // edi
  unsigned int v15; // ecx
  unsigned int v16; // eax
  uintptr_t v17; // eax
  unsigned int v18; // ecx
  unsigned int ThrdAddr; // [esp+14h] [ebp-38h] BYREF
  void *v20; // [esp+18h] [ebp-34h] BYREF
  _DWORD v21[2]; // [esp+1Ch] [ebp-30h] BYREF
  _BYTE pExceptionObject[12]; // [esp+24h] [ebp-28h] BYREF
  _BYTE v23[16]; // [esp+30h] [ebp-1Ch] BYREF
  int v24; // [esp+48h] [ebp-4h]

  if ( *((_DWORD *)this + 1) )
    return -1;
  v8 = (void *)*((_DWORD *)this + 2);
  v9 = 0;
  if ( v8 )
  {
    Outpop::Utility::Barrier_T::~Barrier_T(*((LPCRITICAL_SECTION *)this + 2));
    operator delete(v8);
    *((_DWORD *)this + 2) = 0;
  }
  v10 = (struct _RTL_CRITICAL_SECTION *)operator new(0x9Cu);
  v20 = v10;
  v24 = 0;
  if ( v10 )
    v11 = Outpop::Utility::Barrier_T::Barrier_T(v10, a2 + 1, 0, 0);
  else
    v11 = 0;
  v24 = -1;
  *((_DWORD *)this + 2) = v11;
  if ( a2 > 0 )
  {
    v12 = a4;
    v13 = a5 - a4;
    v14 = (unsigned int *)a4;
    v20 = (void *)(a6 - a4);
    while ( 1 )
    {
      if ( a5 )
        v15 = *(unsigned int *)((char *)v14 + v13);
      else
        v15 = 0;
      if ( v12 )
        v16 = *v14;
      else
        v16 = 0;
      v17 = beginthreadex(0, v16, (_beginthreadex_proc_type)Outpop::Utility::Task::thread_fun, this, v15, &ThrdAddr);
      v18 = ThrdAddr;
      if ( a6 )
        *(unsigned int *)((char *)v14 + (_DWORD)v20) = ThrdAddr;
      if ( !v17 )
      {
        v20 = "taks open a activate failed";
        std::exception::exception((std::exception *)pExceptionObject, (const char *const *)&v20);
        CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI1_AVexception_std__);
      }
      v21[1] = v17;
      v21[0] = v18;
      sub_1000D580((char *)this + 12, v23, v21);
      ++v9;
      ++v14;
      if ( v9 >= a2 )
        break;
      v12 = a4;
      v13 = a5 - a4;
    }
  }
  if ( v9 == a2 )
    Outpop::Utility::Barrier_T::wait(*((LPCRITICAL_SECTION *)this + 2));
  return v9;
}
