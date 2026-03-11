/*
 * func-name: ?handle_build_failed@Peer@P2P@Outpop@@UAEXHABVINET_Addr@IONetwork@3@AAV?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@3@AAV?$Smart_Ptr@VP2PUdpBuilder@IONetwork@Outpop@@@73@@Z
 * func-address: 0x10004b30
 * callers: none
 * callees: 0x10007120, 0x10007d00, 0x100097a0, 0x1000a570, 0x100232f7
 */

int __thiscall Outpop::P2P::Peer::handle_build_failed(
        _DWORD *this,
        int a2,
        int a3,
        Outpop::Utility::Stream_Base **a4,
        int a5)
{
  int v6; // ebx
  char *v7; // esi
  void *v8; // esi
  Outpop::Utility::Logger *v9; // eax
  wchar_t *log_buffer; // edi
  int v11; // esi
  Outpop::Utility::Logger *v12; // eax
  Outpop::Utility::Logger *v13; // eax
  wchar_t *dt; // eax
  int v15; // eax
  _DWORD *v16; // ebx
  int v17; // esi
  const char *host_addr; // eax
  Outpop::Utility::Logger *v19; // eax
  wchar_t *tm; // [esp-18h] [ebp-A4h]
  DWORD CurrentProcessId; // [esp-14h] [ebp-A0h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-9Ch]
  DWORD LastError; // [esp-Ch] [ebp-98h]
  int port_number; // [esp-4h] [ebp-90h]
  Outpop::Utility::Lock *v26; // [esp+10h] [ebp-7Ch]
  int v27; // [esp+14h] [ebp-78h] BYREF
  void *v28; // [esp+18h] [ebp-74h]
  int v29; // [esp+1Ch] [ebp-70h] BYREF
  void *v30; // [esp+20h] [ebp-6Ch]
  char v31[4]; // [esp+24h] [ebp-68h] BYREF
  _DWORD v32[6]; // [esp+28h] [ebp-64h] BYREF
  _BYTE v33[28]; // [esp+40h] [ebp-4Ch] BYREF
  _BYTE v34[28]; // [esp+5Ch] [ebp-30h] BYREF
  int v35; // [esp+88h] [ebp-4h]

  std::string::string(v33);
  v35 = 0;
  std::string::string(v31);
  LOBYTE(v35) = 1;
  Outpop::Utility::Stream_Base::reset_read_pos(*a4);
  sub_100097A0(v33);
  sub_100097A0(v31);
  if ( !(unsigned __int8)std::operator==<char>(v33, &unk_10026701) )
  {
    sub_10007D00(&v27, v31);
    v6 = v27;
    v30 = (void *)this[28];
    if ( !v27 || (_DWORD *)v27 != this + 27 )
      invalid_parameter_noinfo();
    v7 = (char *)v28;
    if ( v28 == v30 )
    {
      (*(void (__thiscall **)(_DWORD *, char *, int))(*(this - 2) + 20))(this - 2, v31, a2);
    }
    else
    {
      if ( !v6 )
        invalid_parameter_noinfo();
      if ( v7 == *(char **)(v6 + 4) )
        invalid_parameter_noinfo();
      Outpop::IONetwork::INET_Addr::INET_Addr(
        (Outpop::IONetwork::INET_Addr *)v34,
        (const struct Outpop::IONetwork::INET_Addr *)(v7 + 36));
      LOBYTE(v35) = 2;
      sub_10007120((int)&v29, v6, v7);
      sub_10007D00(&v27, v31);
      v8 = (void *)this[15];
      if ( !v27 || (_DWORD *)v27 != this + 14 )
        invalid_parameter_noinfo();
      if ( v28 == v8 )
      {
        if ( this[23] )
        {
          Outpop::Utility::Stream_Base::reset_read_pos(*a4);
          Outpop::IONetwork::P2PUdpBuilder::connect(this[23], a4);
          if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
             || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
            && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
          {
            v26 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
            Outpop::Utility::Lock::lock(v26);
            LOBYTE(v35) = 3;
            v9 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
            log_buffer = Outpop::Utility::Logger::get_log_buffer(v9);
            v11 = sub_1000A570(log_buffer, L"\n%s", L"LOG_DEBUG");
            LastError = GetLastError();
            CurrentThreadId = GetCurrentThreadId();
            CurrentProcessId = GetCurrentProcessId();
            v12 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
            tm = Outpop::Utility::Logger::make_tm(v12);
            v13 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
            dt = Outpop::Utility::Logger::make_dt(v13);
            v15 = sub_1000A570(
                    &log_buffer[v11],
                    L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                    dt,
                    tm,
                    CurrentProcessId,
                    CurrentThreadId,
                    LastError,
                    L"D:\\R3\\OutpopGameProject\\P2PNetwork\\Peer.cpp",
                    501);
            v16 = (_DWORD *)v32[0];
            v17 = v15 + v11;
            if ( v32[5] < 0x10u )
              v16 = v32;
            port_number = (unsigned __int16)Outpop::IONetwork::INET_Addr::get_port_number((Outpop::IONetwork::INET_Addr *)v34);
            host_addr = Outpop::IONetwork::INET_Addr::get_host_addr((Outpop::IONetwork::INET_Addr *)v34);
            sub_1000A570(
              &log_buffer[v17],
              L"Peer try to connect remote peer %S interal address failed , try to connect external address %S:%d",
              v16,
              host_addr,
              port_number);
            if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
              wprintf(L"%s", log_buffer);
            if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
            {
              v19 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
              Outpop::Utility::Logger::write_file(v19);
            }
            LOBYTE(v35) = 2;
            Outpop::Utility::Lock::unlock(v26);
          }
        }
      }
      LOBYTE(v35) = 1;
      Outpop::IONetwork::INET_Addr::~INET_Addr((Outpop::IONetwork::INET_Addr *)v34);
    }
  }
  LOBYTE(v35) = 0;
  std::string::~string(v31);
  v35 = -1;
  return std::string::~string(v33);
}
