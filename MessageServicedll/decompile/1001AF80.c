/*
 * func-name: sub_1001AF80
 * func-address: 0x1001af80
 * callers: 0x1000cd00
 * callees: 0x1000bfa0, 0x10019a80, 0x1001ae60, 0x1001c6d0, 0x1001ce10, 0x10023490, 0x100295c0
 */

int __stdcall sub_1001AF80(int *a1, int a2, Outpop::Utility::Ref_Object **a3, Outpop::Utility::Ref_Object **a4)
{
  LONG v4; // eax
  int v5; // ebx
  Outpop::Utility::Ref_Object *v6; // eax
  unsigned __int16 v7; // cx
  _DWORD *v8; // eax
  Outpop::Utility::Ref_Object *v9; // esi
  int v10; // edi
  int v11; // eax
  int v12; // edi
  Outpop::Utility::Lock *v13; // edi
  Outpop::Utility::Logger *v14; // eax
  wchar_t *log_buffer; // ebx
  int v16; // edi
  Outpop::Utility::Logger *v17; // eax
  Outpop::Utility::Logger *v18; // eax
  wchar_t *dt; // eax
  int v20; // eax
  Outpop::Utility::Logger *v21; // eax
  wchar_t *tm; // [esp-10h] [ebp-6Ch]
  DWORD CurrentProcessId; // [esp-Ch] [ebp-68h]
  DWORD CurrentThreadId; // [esp-8h] [ebp-64h]
  DWORD LastError; // [esp-4h] [ebp-60h]
  Outpop::Utility::Ref_Object *v27[2]; // [esp+1Ch] [ebp-40h] BYREF
  Outpop::Utility::Ref_Object *v28; // [esp+24h] [ebp-38h] BYREF
  Outpop::Utility::Lock *v29; // [esp+28h] [ebp-34h]
  int v30; // [esp+2Ch] [ebp-30h]
  void *v31; // [esp+30h] [ebp-2Ch]
  Outpop::Utility::Ref_Object *v32; // [esp+34h] [ebp-28h]
  int v33; // [esp+38h] [ebp-24h] BYREF
  Outpop::Utility::Ref_Object *v34; // [esp+3Ch] [ebp-20h]
  _BYTE v35[16]; // [esp+40h] [ebp-1Ch] BYREF
  int v36; // [esp+58h] [ebp-4h]

  v4 = InterlockedIncrement((volatile LONG *)(*(_DWORD *)(*a1 + 44) + 136));
  v5 = 1;
  if ( v4 != -1 )
    v5 = v4;
  v6 = *a3;
  v7 = *((_BYTE *)*a3 + 97) & 0xF;
  v30 = v5;
  if ( v7 )
    *(_DWORD *)(v7 + *((_DWORD *)v6 + 25)) = v5;
  v8 = operator new(0x60u);
  v31 = v8;
  v36 = 0;
  if ( v8 )
    v9 = (Outpop::Utility::Ref_Object *)sub_10019A80(a2, a3, v8, *a1, a4);
  else
    v9 = 0;
  v36 = -1;
  v32 = v9;
  if ( v9 )
    Outpop::Utility::Ref_Object::addref(v9);
  v36 = 2;
  v29 = (Outpop::Utility::Lock *)(a1 + 7);
  v28 = (Outpop::Utility::Ref_Object *)(a1 + 7);
  Outpop::Utility::Lock::lock((Outpop::Utility::Lock *)(a1 + 7));
  v27[0] = (Outpop::Utility::Ref_Object *)v5;
  v27[1] = v9;
  if ( v9 )
    Outpop::Utility::Ref_Object::addref(v9);
  LOBYTE(v36) = 4;
  sub_1000BFA0(&v33, v27);
  LOBYTE(v36) = 5;
  v31 = a1 + 13;
  sub_1001C6D0(a1 + 13, v35, &v33);
  LOBYTE(v36) = 4;
  if ( v34 )
    Outpop::Utility::Ref_Object::release(v34);
  LOBYTE(v36) = 2;
  if ( v9 )
    Outpop::Utility::Ref_Object::release(v9);
  LOBYTE(v36) = 1;
  Outpop::Utility::Lock::unlock((Outpop::Utility::Lock *)(a1 + 7));
  if ( *(_BYTE *)(*(_DWORD *)(*a1 + 44) + 164) && *((_DWORD *)*a3 + 18) )
  {
    v28 = 0;
    LOBYTE(v36) = 8;
    v10 = Outpop::Utility::Time_Value::Time_Value((Outpop::Utility::Time_Value *)&v33, 0, *((_DWORD *)*a3 + 18));
    LOBYTE(v36) = 9;
    v27[0] = v9;
    if ( v9 )
      Outpop::Utility::Ref_Object::addref(v9);
    LOBYTE(v36) = 10;
    v11 = Outpop::Utility::Timer_Queue::instance(v27, v10, &v28, 0, 0);
    v12 = Outpop::Utility::Timer_Queue::schedule_timer(v11);
    LOBYTE(v36) = 9;
    if ( v27[0] )
      Outpop::Utility::Ref_Object::release(v27[0]);
    LOBYTE(v36) = 8;
    Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)&v33);
    LOBYTE(v36) = 1;
    if ( v28 )
      Outpop::Utility::Ref_Object::release(v28);
    if ( v12 == -1 )
    {
      v13 = v29;
      Outpop::Utility::Lock::lock(v29);
      LOBYTE(v36) = 11;
      sub_1001CE10((int)v31);
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
      {
        v31 = (void *)(Outpop::Utility::Logger::instance() + 144);
        Outpop::Utility::Lock::lock((Outpop::Utility::Lock *)v31);
        LOBYTE(v36) = 12;
        v14 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        log_buffer = Outpop::Utility::Logger::get_log_buffer(v14);
        v16 = sub_10023490(log_buffer, L"\n%s", L"LOG_ERROR");
        LastError = GetLastError();
        CurrentThreadId = GetCurrentThreadId();
        CurrentProcessId = GetCurrentProcessId();
        v17 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        tm = Outpop::Utility::Logger::make_tm(v17);
        v18 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        dt = Outpop::Utility::Logger::make_dt(v18);
        v20 = sub_10023490(
                &log_buffer[v16],
                L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                dt,
                tm,
                CurrentProcessId,
                CurrentThreadId,
                LastError,
                L"D:\\R3\\OutpopGameProject\\MessageService\\Group_Request_Ack.cpp",
                384);
        sub_10023490(&log_buffer[v20 + v16], L"Group_Request_Ack::asynch_group_request start timer error!");
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", log_buffer);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          v21 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v21);
        }
        LOBYTE(v36) = 11;
        Outpop::Utility::Lock::unlock((Outpop::Utility::Lock *)v31);
        v13 = v29;
      }
      LOBYTE(v36) = 1;
      Outpop::Utility::Lock::unlock(v13);
      v36 = -1;
      if ( v9 )
        Outpop::Utility::Ref_Object::release(v9);
      return -1;
    }
    *((_DWORD *)v9 + 23) = v12;
  }
  sub_1001AE60(a2, (int)a1, (int)a3);
  v36 = -1;
  if ( v9 )
    Outpop::Utility::Ref_Object::release(v9);
  return 0;
}
