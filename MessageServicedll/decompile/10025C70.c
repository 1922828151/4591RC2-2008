/*
 * func-name: ?cache_asynch_request@Request_Ack@Message@Outpop@@QAEIHAAV?$Smart_Ptr@VMessage@1Outpop@@@Utility@3@AAV?$Smart_Ptr@VRef_Object@Utility@Outpop@@@53@@Z
 * func-address: 0x10025c70
 * callers: 0x1000ce50
 * callees: 0x100194f0, 0x1001b460, 0x1001d830, 0x10023490
 */

int __thiscall Outpop::Message::Request_Ack::cache_asynch_request(
        int this,
        unsigned int a2,
        Outpop::Utility::Binary_Stream **a3,
        Outpop::Utility::Ref_Object **a4)
{
  LONG v5; // eax
  int v6; // ebx
  _DWORD *v7; // eax
  Outpop::Utility::Lock *v8; // ebp
  Outpop::Utility::Logger *v9; // eax
  wchar_t *log_buffer; // edi
  int v11; // esi
  Outpop::Utility::Logger *v12; // eax
  Outpop::Utility::Logger *v13; // eax
  wchar_t *dt; // eax
  int v15; // eax
  Outpop::Utility::Logger *v16; // eax
  wchar_t *tm; // [esp-18h] [ebp-44h]
  DWORD CurrentProcessId; // [esp-14h] [ebp-40h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-3Ch]
  DWORD LastError; // [esp-Ch] [ebp-38h]
  _DWORD v22[3]; // [esp+14h] [ebp-18h] BYREF
  int v23; // [esp+28h] [ebp-4h]

  Outpop::Utility::Binary_Stream::channelid(*a3, a2);
  v5 = InterlockedIncrement((volatile LONG *)(this + 136));
  v6 = 1;
  if ( v5 != -1 )
    v6 = v5;
  if ( (*((_BYTE *)*a3 + 97) & 0xF) != 0 )
    *(_DWORD *)((*((_BYTE *)*a3 + 97) & 0xF) + *((_DWORD *)*a3 + 25)) = v6;
  v7 = sub_100194F0(v22, a2, a3, a4);
  v23 = 0;
  sub_1001D830((_DWORD *)(this + 168), (int)v7);
  v23 = -1;
  sub_1001B460((int)v22);
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
  {
    v8 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v8);
    v23 = 1;
    v9 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    log_buffer = Outpop::Utility::Logger::get_log_buffer(v9);
    v11 = sub_10023490(0xFFFFu, log_buffer, L"\n%s", L"LOG_DEBUG");
    LastError = GetLastError();
    CurrentThreadId = GetCurrentThreadId();
    CurrentProcessId = GetCurrentProcessId();
    v12 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    tm = Outpop::Utility::Logger::make_tm(v12);
    v13 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    dt = Outpop::Utility::Logger::make_dt(v13);
    v15 = sub_10023490(
            0xFFFF - v11,
            &log_buffer[v11],
            L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
            dt,
            tm,
            CurrentProcessId,
            CurrentThreadId,
            LastError,
            L"D:\\R3\\OutpopGameProject\\MessageService\\Request_Ack.cpp",
            317);
    sub_10023490(0xFFFF - (v15 + v11), &log_buffer[v15 + v11], L"Reqeust_Ack cache asynch request token is %d", v6);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", log_buffer);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v16 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v16);
    }
    v23 = -1;
    Outpop::Utility::Lock::unlock(v8);
  }
  return v6;
}
