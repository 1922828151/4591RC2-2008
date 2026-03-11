/*
 * func-name: sub_1001B4D0
 * func-address: 0x1001b4d0
 * callers: 0x1001aa80
 * callees: 0x1000bfa0, 0x10019a80, 0x1001ae60, 0x1001c6d0, 0x1001ce10, 0x10023490, 0x100295c0
 */

void __thiscall sub_1001B4D0(int *this, int a2)
{
  _DWORD *v3; // eax
  Outpop::Utility::Ref_Object *v4; // ebp
  int v5; // eax
  int v6; // esi
  unsigned __int8 v7; // dl
  int v8; // eax
  int v9; // edi
  int v10; // eax
  int v11; // edi
  Outpop::Utility::Lock *v12; // edi
  Outpop::Utility::Lock *v13; // ebx
  Outpop::Utility::Logger *v14; // eax
  wchar_t *log_buffer; // edi
  int v16; // esi
  Outpop::Utility::Logger *v17; // eax
  Outpop::Utility::Logger *v18; // eax
  wchar_t *dt; // eax
  int v20; // eax
  Outpop::Utility::Logger *v21; // eax
  wchar_t *tm; // [esp-10h] [ebp-68h]
  DWORD CurrentProcessId; // [esp-Ch] [ebp-64h]
  DWORD CurrentThreadId; // [esp-8h] [ebp-60h]
  DWORD LastError; // [esp-4h] [ebp-5Ch]
  Outpop::Utility::Ref_Object *v26[2]; // [esp+1Ch] [ebp-3Ch] BYREF
  Outpop::Utility::Ref_Object *v27; // [esp+24h] [ebp-34h] BYREF
  Outpop::Utility::Lock *v28; // [esp+28h] [ebp-30h]
  int v29; // [esp+2Ch] [ebp-2Ch]
  Outpop::Utility::Ref_Object *v30; // [esp+30h] [ebp-28h]
  int v31; // [esp+34h] [ebp-24h] BYREF
  Outpop::Utility::Ref_Object *v32; // [esp+38h] [ebp-20h]
  _BYTE v33[16]; // [esp+3Ch] [ebp-1Ch] BYREF
  int v34; // [esp+54h] [ebp-4h]

  v3 = operator new(0x60u);
  v29 = (int)v3;
  v34 = 0;
  if ( v3 )
    v4 = (Outpop::Utility::Ref_Object *)sub_10019A80(
                                          *(_DWORD *)a2,
                                          (Outpop::Utility::Ref_Object **)(a2 + 4),
                                          v3,
                                          *this,
                                          (Outpop::Utility::Ref_Object **)(a2 + 8));
  else
    v4 = 0;
  v34 = -1;
  v30 = v4;
  if ( v4 )
    Outpop::Utility::Ref_Object::addref(v4);
  v34 = 2;
  v28 = (Outpop::Utility::Lock *)(this + 7);
  v27 = (Outpop::Utility::Ref_Object *)(this + 7);
  Outpop::Utility::Lock::lock((Outpop::Utility::Lock *)(this + 7));
  v5 = *(_DWORD *)(a2 + 4);
  v6 = a2 + 4;
  v7 = *(_BYTE *)(v5 + 97) & 0xF;
  if ( v7 )
    v8 = *(_DWORD *)(v7 + *(_DWORD *)(v5 + 100));
  else
    v8 = -1;
  v26[0] = (Outpop::Utility::Ref_Object *)v8;
  v26[1] = v4;
  if ( v4 )
    Outpop::Utility::Ref_Object::addref(v4);
  LOBYTE(v34) = 4;
  sub_1000BFA0(&v31, v26);
  LOBYTE(v34) = 5;
  v29 = (int)(this + 13);
  sub_1001C6D0(this + 13, v33, &v31);
  LOBYTE(v34) = 4;
  if ( v32 )
    Outpop::Utility::Ref_Object::release(v32);
  LOBYTE(v34) = 2;
  if ( v4 )
    Outpop::Utility::Ref_Object::release(v4);
  LOBYTE(v34) = 1;
  Outpop::Utility::Lock::unlock((Outpop::Utility::Lock *)(this + 7));
  if ( !*(_BYTE *)(*(_DWORD *)(*this + 44) + 164) || !*(_DWORD *)(*(_DWORD *)v6 + 72) )
    goto LABEL_34;
  v27 = 0;
  LOBYTE(v34) = 8;
  v9 = Outpop::Utility::Time_Value::Time_Value((Outpop::Utility::Time_Value *)&v31, 0, *(_DWORD *)(*(_DWORD *)v6 + 72));
  LOBYTE(v34) = 9;
  v26[0] = v4;
  if ( v4 )
    Outpop::Utility::Ref_Object::addref(v4);
  LOBYTE(v34) = 10;
  v10 = Outpop::Utility::Timer_Queue::instance(v26, v9, &v27, 0, 0);
  v11 = Outpop::Utility::Timer_Queue::schedule_timer(v10);
  LOBYTE(v34) = 9;
  if ( v26[0] )
    Outpop::Utility::Ref_Object::release(v26[0]);
  LOBYTE(v34) = 8;
  Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)&v31);
  LOBYTE(v34) = 1;
  if ( v27 )
    Outpop::Utility::Ref_Object::release(v27);
  if ( v11 != -1 )
  {
    *((_DWORD *)v4 + 23) = v11;
LABEL_34:
    sub_1001AE60(*(_DWORD *)a2, (int)this, v6);
    goto LABEL_35;
  }
  v12 = v28;
  Outpop::Utility::Lock::lock(v28);
  LOBYTE(v34) = 11;
  sub_1001CE10(v29);
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
  {
    v13 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v13);
    LOBYTE(v34) = 12;
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
            418);
    sub_10023490(&log_buffer[v20 + v16], L"Group_Request_Ack::process_post_group_request start timer error!");
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", log_buffer);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v21 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v21);
    }
    LOBYTE(v34) = 11;
    Outpop::Utility::Lock::unlock(v13);
    v12 = v28;
  }
  LOBYTE(v34) = 1;
  Outpop::Utility::Lock::unlock(v12);
LABEL_35:
  v34 = -1;
  if ( v4 )
    Outpop::Utility::Ref_Object::release(v4);
}
