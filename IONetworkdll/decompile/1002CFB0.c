/*
 * func-name: ??1Dgram_Channel@IONetwork@Outpop@@UAE@XZ
 * func-address: 0x1002cfb0
 * callers: 0x10022f40
 * callees: 0x10005080, 0x10007400, 0x1000b770, 0x10023210, 0x1003c700, 0x10046710
 */

void __thiscall Outpop::IONetwork::Dgram_Channel::~Dgram_Channel(Outpop::IONetwork::Dgram_Channel *this)
{
  Outpop::Utility::Lock *v2; // ebx
  Outpop::Utility::Logger *v3; // eax
  wchar_t *log_buffer; // ebp
  int v5; // esi
  Outpop::Utility::Logger *v6; // eax
  Outpop::Utility::Logger *v7; // eax
  wchar_t *dt; // eax
  int v9; // eax
  Outpop::Utility::Logger *v10; // eax
  Outpop::Utility::Ref_Object *v11; // ecx
  Outpop::Utility::Ref_Object *v12; // ecx
  void (__thiscall ***v13)(_DWORD, int); // ecx
  Outpop::Utility::Ref_Object *v14; // ecx
  wchar_t *tm; // [esp-18h] [ebp-40h]
  DWORD CurrentProcessId; // [esp-14h] [ebp-3Ch]
  DWORD CurrentThreadId; // [esp-10h] [ebp-38h]
  DWORD LastError; // [esp-Ch] [ebp-34h]

  *(_DWORD *)this = &Outpop::IONetwork::Dgram_Channel::`vftable';
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
  {
    v2 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v2);
    v3 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    log_buffer = Outpop::Utility::Logger::get_log_buffer(v3);
    v5 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_DEBUG");
    LastError = GetLastError();
    CurrentThreadId = GetCurrentThreadId();
    CurrentProcessId = GetCurrentProcessId();
    v6 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    tm = Outpop::Utility::Logger::make_tm(v6);
    v7 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    dt = Outpop::Utility::Logger::make_dt(v7);
    v9 = sub_10007400(
           0xFFFF - v5,
           &log_buffer[v5],
           L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
           dt,
           tm,
           CurrentProcessId,
           CurrentThreadId,
           LastError,
           L"D:\\R3\\OutpopGameProject\\IONetwork\\Dgram_Channel.cpp",
           58);
    sub_10007400(0xFFFF - (v9 + v5), &log_buffer[v9 + v5], L"\tDgram_Channel::~Dgram_Channel(void)");
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", log_buffer);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v10 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v10);
    }
    Outpop::Utility::Lock::unlock(v2);
  }
  v11 = (Outpop::Utility::Ref_Object *)*((_DWORD *)this + 46);
  if ( v11 )
    Outpop::Utility::Ref_Object::release(v11);
  v12 = (Outpop::Utility::Ref_Object *)*((_DWORD *)this + 47);
  if ( v12 )
    Outpop::Utility::Ref_Object::release(v12);
  v13 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 45);
  if ( v13 )
    (**v13)(v13, 1);
  Outpop::Utility::Thread_Mutex::~Thread_Mutex((Outpop::IONetwork::Dgram_Channel *)((char *)this + 664));
  sub_1000B770((_DWORD *)this + 161);
  v14 = (Outpop::Utility::Ref_Object *)*((_DWORD *)this + 157);
  if ( v14 )
    Outpop::Utility::Ref_Object::release(v14);
  Outpop::IONetwork::Sequence_Container::~Sequence_Container((Outpop::IONetwork::Dgram_Channel *)((char *)this + 444));
  sub_10046710((char *)this + 288);
  Outpop::IONetwork::Comminute_Container::~Comminute_Container((Outpop::IONetwork::Dgram_Channel *)((char *)this + 220));
  Outpop::IONetwork::Channel::~Channel(this);
}
