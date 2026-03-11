/*
 * func-name: ??0Stream_Channel@IONetwork@Outpop@@QAE@AAUChannel_Config@12@AAUIO_Channel_Config@12@@Z
 * func-address: 0x1000e490
 * callers: 0x10018710, 0x1001e8b0
 * callees: 0x10004f50, 0x10007400
 */

Outpop::IONetwork::Stream_Channel *__thiscall Outpop::IONetwork::Stream_Channel::Stream_Channel(
        Outpop::IONetwork::Stream_Channel *this,
        struct Outpop::IONetwork::Channel_Config *a2,
        struct Outpop::IONetwork::IO_Channel_Config *a3)
{
  Outpop::Utility::Logger *v4; // eax
  wchar_t *log_buffer; // edi
  int v6; // esi
  Outpop::Utility::Logger *v7; // eax
  Outpop::Utility::Logger *v8; // eax
  wchar_t *dt; // eax
  int v10; // eax
  Outpop::Utility::Logger *v11; // eax
  _DWORD *v12; // edi
  _DWORD *v13; // eax
  _DWORD *v14; // edi
  _DWORD *v15; // eax
  wchar_t *tm; // [esp-18h] [ebp-40h]
  DWORD CurrentProcessId; // [esp-14h] [ebp-3Ch]
  DWORD CurrentThreadId; // [esp-10h] [ebp-38h]
  DWORD LastError; // [esp-Ch] [ebp-34h]
  Outpop::Utility::Lock *v21; // [esp+14h] [ebp-14h]

  Outpop::IONetwork::Channel::Channel(this);
  *(_DWORD *)this = &Outpop::IONetwork::Stream_Channel::`vftable';
  *((_DWORD *)this + 45) = 0;
  *((_DWORD *)this + 46) = 0;
  *((_DWORD *)this + 47) = 0;
  *((_BYTE *)this + 193) = 0;
  *((_DWORD *)this + 49) = -1;
  *((_BYTE *)this + 200) = 0;
  *((_BYTE *)this + 201) = 1;
  *((_DWORD *)this + 51) = 0;
  *((_BYTE *)this + 208) = 1;
  *((_BYTE *)this + 209) = 1;
  *((_DWORD *)this + 54) = 0;
  *((_DWORD *)this + 55) = 0;
  *((_DWORD *)this + 56) = 0;
  *((_DWORD *)this + 57) = -1;
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
  {
    v21 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v21);
    v4 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    log_buffer = Outpop::Utility::Logger::get_log_buffer(v4);
    v6 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_DEBUG");
    LastError = GetLastError();
    CurrentThreadId = GetCurrentThreadId();
    CurrentProcessId = GetCurrentProcessId();
    v7 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    tm = Outpop::Utility::Logger::make_tm(v7);
    v8 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    dt = Outpop::Utility::Logger::make_dt(v8);
    v10 = sub_10007400(
            0xFFFF - v6,
            &log_buffer[v6],
            L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
            dt,
            tm,
            CurrentProcessId,
            CurrentThreadId,
            LastError,
            L"D:\\R3\\OutpopGameProject\\IONetwork\\Channel_Base.cpp",
            16);
    sub_10007400(0xFFFF - (v10 + v6), &log_buffer[v10 + v6], L"Stream_Channel  Stream_Channel()!");
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", log_buffer);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v11 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v11);
    }
    Outpop::Utility::Lock::unlock(v21);
  }
  *((_BYTE *)this + 192) = *((_BYTE *)a3 + 72);
  *((_DWORD *)this + 31) = *((_DWORD *)a3 + 1);
  v12 = (_DWORD *)(*(int (__thiscall **)(char *))(*((_DWORD *)a3 + 9) + 16))((char *)a3 + 36);
  v13 = (_DWORD *)(*(int (__thiscall **)(char *))(*((_DWORD *)this + 20) + 16))((char *)this + 80);
  *v13 = *v12;
  v13[1] = v12[1];
  v13[2] = v12[2];
  v13[3] = v12[3];
  v14 = (_DWORD *)(*(int (__thiscall **)(char *))(*((_DWORD *)a3 + 2) + 16))((char *)a3 + 8);
  v15 = (_DWORD *)(*(int (__thiscall **)(char *))(*((_DWORD *)this + 13) + 16))((char *)this + 52);
  *v15 = *v14;
  v15[1] = v14[1];
  v15[2] = v14[2];
  v15[3] = v14[3];
  *((_DWORD *)this + 40) = *((_DWORD *)a3 + 17);
  *((_DWORD *)this + 49) = *(_DWORD *)a3;
  *((_DWORD *)this + 51) = *((_DWORD *)a3 + 16);
  qmemcpy((char *)this + 8, a2, 0x2Cu);
  return this;
}
