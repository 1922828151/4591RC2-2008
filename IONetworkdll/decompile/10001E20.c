/*
 * func-name: ?init@Network_Init@IONetwork@Outpop@@QAEXXZ
 * func-address: 0x10001e20
 * callers: none
 * callees: 0x10002050, 0x10007400, 0x10008920, 0x1000d010, 0x1004e861
 */

void __thiscall Outpop::IONetwork::Network_Init::init(Outpop::IONetwork::Network_Init *this)
{
  int v2; // esi
  Outpop::Utility::Lock *v3; // ebx
  Outpop::Utility::Logger *v4; // eax
  wchar_t *log_buffer; // edi
  int v6; // eax
  int v7; // esi
  DWORD CurrentProcessId; // eax
  Outpop::Utility::Logger *v9; // eax
  wchar_t *tm; // eax
  Outpop::Utility::Logger *v11; // eax
  wchar_t *dt; // eax
  int v13; // esi
  char *v14; // ebp
  Outpop::Utility::Logger *v15; // eax
  char v16; // [esp-1Ch] [ebp-58h] BYREF
  LPCSTR v17; // [esp-18h] [ebp-54h]
  int v18; // [esp-14h] [ebp-50h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-4Ch]
  DWORD LastError; // [esp-Ch] [ebp-48h]
  const wchar_t *v21; // [esp-8h] [ebp-44h]
  int v22; // [esp-4h] [ebp-40h]
  wchar_t *v23; // [esp+0h] [ebp-3Ch]
  char *v24; // [esp+14h] [ebp-28h]
  CHAR ReturnedString; // [esp+18h] [ebp-24h] BYREF
  int v26; // [esp+19h] [ebp-23h]
  int v27; // [esp+1Dh] [ebp-1Fh]
  int v28; // [esp+21h] [ebp-1Bh]
  int v29; // [esp+25h] [ebp-17h]
  __int16 v30; // [esp+29h] [ebp-13h]
  char v31; // [esp+2Bh] [ebp-11h]
  int v32; // [esp+38h] [ebp-4h]

  Outpop::IONetwork::CryptProv::instance();
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  ReturnedString = 0;
  if ( GetProfileStringA("outpop", "cryptokey", &Default, &ReturnedString, 0x14u) )
  {
    std::string::operator=(this, &ReturnedString);
  }
  else
  {
    v2 = sub_1000D010();
    std::string::operator=(this, v2);
    v24 = &v16;
    std::string::string(&v16, v2);
    v32 = -1;
    Outpop::IONetwork::Network_Init::write_to_ini_file(v16, v17, v18, CurrentThreadId, LastError, v21, v22);
  }
  if ( (*(_BYTE *)(((int (*)(void))Outpop::Utility::Logger::instance)() + 136) == 1
     || *(_BYTE *)(((int (*)(void))Outpop::Utility::Logger::instance)() + 137) == 1)
    && *(_BYTE *)(((int (*)(void))Outpop::Utility::Logger::instance)() + 138) == 1 )
  {
    v3 = (Outpop::Utility::Lock *)(((int (*)(void))Outpop::Utility::Logger::instance)() + 144);
    v24 = (char *)v3;
    Outpop::Utility::Lock::lock(v3);
    v32 = 1;
    v4 = (Outpop::Utility::Logger *)((int (*)(void))Outpop::Utility::Logger::instance)();
    log_buffer = Outpop::Utility::Logger::get_log_buffer(v4);
    v6 = sub_10007400(log_buffer, L"\n%s", L"LOG_DEBUG");
    v22 = 80;
    v21 = L"D:\\R3\\OutpopGameProject\\IONetwork\\Network_Config.cpp";
    v7 = v6;
    LastError = GetLastError();
    CurrentThreadId = GetCurrentThreadId();
    CurrentProcessId = GetCurrentProcessId();
    v9 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance(CurrentProcessId);
    tm = Outpop::Utility::Logger::make_tm(v9);
    v11 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance(tm);
    dt = Outpop::Utility::Logger::make_dt(v11);
    v13 = sub_10007400(&log_buffer[v7], L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:", dt) + v7;
    if ( *((_DWORD *)this + 6) < 0x10u )
      v14 = (char *)this + 4;
    else
      v14 = (char *)*((_DWORD *)this + 1);
    sub_10007400(&log_buffer[v13], L"Network_Init::init  is %S", v14);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance(v23) + 136) )
      wprintf(L"%s", log_buffer);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance(v23) + 137) )
    {
      v15 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance(log_buffer);
      Outpop::Utility::Logger::write_file(v15, v23);
    }
    v32 = -1;
    Outpop::Utility::Lock::unlock(v3);
  }
}
