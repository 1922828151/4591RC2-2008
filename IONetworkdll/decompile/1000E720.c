/*
 * func-name: ??1Stream_Channel@IONetwork@Outpop@@UAE@XZ
 * func-address: 0x1000e720
 * callers: 0x1000e430
 * callees: 0x10005080, 0x10007400, 0x1003ba70
 */

void __thiscall Outpop::IONetwork::Stream_Channel::~Stream_Channel(Outpop::IONetwork::Stream_Channel *this)
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
  wchar_t *tm; // [esp-18h] [ebp-40h]
  DWORD CurrentProcessId; // [esp-14h] [ebp-3Ch]
  DWORD CurrentThreadId; // [esp-10h] [ebp-38h]
  DWORD LastError; // [esp-Ch] [ebp-34h]

  *(_DWORD *)this = &Outpop::IONetwork::Stream_Channel::`vftable';
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
           L"D:\\R3\\OutpopGameProject\\IONetwork\\Channel_Base.cpp",
           30);
    sub_10007400(
      0xFFFF - (v9 + v5),
      &log_buffer[v9 + v5],
      L"Stream_Channel  ~Stream_Channel()! id  is %d",
      *((_DWORD *)this + 28));
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", log_buffer);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v10 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v10);
    }
    Outpop::Utility::Lock::unlock(v2);
  }
  v11 = (Outpop::Utility::Ref_Object *)*((_DWORD *)this + 45);
  if ( v11 )
    Outpop::Utility::Ref_Object::release(v11);
  v12 = (Outpop::Utility::Ref_Object *)*((_DWORD *)this + 46);
  if ( v12 )
    Outpop::Utility::Ref_Object::release(v12);
  v13 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 51);
  if ( v13 )
    (**v13)(v13, 1);
  sub_1003BA70();
  if ( *((_DWORD *)this + 49) != -1 )
    closesocket(*((_DWORD *)this + 49));
  Outpop::IONetwork::Channel::~Channel(this);
}
