/*
 * func-name: ?connect@P2PUdpBuilder@IONetwork@Outpop@@QAEHAAV?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@3@AAVINET_Addr@23@@Z
 * func-address: 0x1004ccb0
 * callers: none
 * callees: 0x10007400, 0x10042060, 0x100420d0, 0x10042a80, 0x10045f80, 0x1004b970, 0x1004d1b0, 0x1004d220, 0x1004da30, 0x1004e510, 0x1004e5c0, 0x1004e861, 0x1004e98e
 */

int __thiscall Outpop::IONetwork::P2PUdpBuilder::connect(_DWORD *this, Outpop::Utility::Stream_Base **a2, _DWORD *a3)
{
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // eax
  Outpop::IONetwork::P2P_Channel *v9; // eax
  Outpop::IONetwork::P2P_Channel *v10; // esi
  _DWORD *v11; // edi
  _DWORD *v12; // eax
  _DWORD *v13; // ecx
  _DWORD *v14; // edi
  _DWORD *v15; // eax
  struct in_addr v16; // ecx
  Outpop::Utility::Logger *v17; // eax
  int v18; // eax
  int v19; // edi
  Outpop::Utility::Logger *v20; // eax
  Outpop::Utility::Logger *v21; // eax
  wchar_t *dt; // eax
  int v23; // edi
  u_short v24; // ax
  char *v25; // eax
  Outpop::Utility::Stream_Base *v26; // ecx
  _DWORD *v27; // edx
  _DWORD *v28; // edx
  int readable; // eax
  Outpop::Utility::Logger *v30; // eax
  Outpop::Utility::Ref_Object *v31; // ecx
  bool v32; // zf
  char v34; // [esp-1Ch] [ebp-F0h] BYREF
  wchar_t *tm; // [esp-18h] [ebp-ECh]
  DWORD CurrentProcessId; // [esp-14h] [ebp-E8h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-E4h]
  DWORD LastError; // [esp-Ch] [ebp-E0h]
  const wchar_t *v39; // [esp-8h] [ebp-DCh]
  struct in_addr v40; // [esp-4h] [ebp-D8h] BYREF
  _DWORD *v41; // [esp+14h] [ebp-C0h]
  struct in_addr *v42; // [esp+18h] [ebp-BCh]
  _DWORD *pos; // [esp+1Ch] [ebp-B8h]
  wchar_t *log_buffer; // [esp+20h] [ebp-B4h]
  Outpop::IONetwork::P2P_Channel *v45; // [esp+24h] [ebp-B0h] BYREF
  Outpop::Utility::Stream_Base **v46; // [esp+28h] [ebp-ACh]
  int v47; // [esp+2Ch] [ebp-A8h]
  _DWORD v48[11]; // [esp+30h] [ebp-A4h] BYREF
  _BYTE v49[32]; // [esp+5Ch] [ebp-78h] BYREF
  char v50[12]; // [esp+7Ch] [ebp-58h] BYREF
  int v51; // [esp+88h] [ebp-4Ch] BYREF
  _DWORD v52[6]; // [esp+8Ch] [ebp-48h] BYREF
  int v53; // [esp+A4h] [ebp-30h] BYREF
  _DWORD v54[6]; // [esp+A8h] [ebp-2Ch] BYREF
  int v55; // [esp+D0h] [ebp-4h]

  v46 = a2;
  v41 = a3;
  std::string::string(&v53);
  v55 = 0;
  std::string::string(&v51);
  LOBYTE(v55) = 1;
  pos = (_DWORD *)Outpop::Utility::Stream_Base::get_read_pos(*a2);
  sub_1004E510(&v53);
  sub_1004E510(&v51);
  Outpop::Utility::Stream_Base::set_read_pos(*a2, pos);
  v4 = this[10];
  v5 = this[12];
  v48[8] = this[11];
  v6 = this[8];
  v48[7] = v4;
  v7 = this[9];
  v48[9] = v5;
  v8 = this[7];
  v48[10] = 100;
  memset(v48, 0, 16);
  v48[5] = v6;
  v48[6] = v7;
  v48[4] = v8;
  v9 = (Outpop::IONetwork::P2P_Channel *)operator new(712);
  v45 = v9;
  LOBYTE(v55) = 2;
  if ( v9 )
    v10 = Outpop::IONetwork::P2P_Channel::P2P_Channel(v9, (struct Outpop::IONetwork::Channel_Config *)v48);
  else
    v10 = 0;
  LOBYTE(v55) = 1;
  v45 = v10;
  if ( v10 )
    Outpop::Utility::Ref_Object::addref(v10);
  LOBYTE(v55) = 3;
  v11 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(this[29] + 16))(this + 29);
  v12 = (_DWORD *)(*(int (__thiscall **)(int))(*((_DWORD *)v10 + 13) + 16))((int)v10 + 52);
  *v12 = *v11;
  v12[1] = v11[1];
  v12[2] = v11[2];
  v13 = v41;
  v12[3] = v11[3];
  v14 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v13 + 16))(v13);
  v15 = (_DWORD *)(*(int (__thiscall **)(int))(*((_DWORD *)v10 + 20) + 16))((int)v10 + 80);
  *v15 = *v14;
  v15[1] = v14[1];
  v15[2] = v14[2];
  v15[3] = v14[3];
  v42 = (struct in_addr *)&v34;
  std::string::string(&v53);
  LOBYTE(v55) = 3;
  Outpop::IONetwork::P2P_Channel::set_local_name(
    v34,
    (int)tm,
    CurrentProcessId,
    CurrentThreadId,
    LastError,
    (int)v39,
    v40.S_un.S_addr);
  v42 = (struct in_addr *)&v34;
  std::string::string(&v51);
  LOBYTE(v55) = 3;
  Outpop::IONetwork::P2P_Channel::set_remote_name(
    v34,
    (int)tm,
    CurrentProcessId,
    CurrentThreadId,
    LastError,
    (int)v39,
    v40.S_un.S_addr);
  *((_DWORD *)v10 + 45) = this;
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
  {
    v42 = (struct in_addr *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock((Outpop::Utility::Lock *)v42);
    LOBYTE(v55) = 6;
    v17 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    log_buffer = Outpop::Utility::Logger::get_log_buffer(v17);
    v18 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_DEBUG");
    v40 = (struct in_addr)415;
    v39 = L"D:\\R3\\OutpopGameProject\\IONetwork\\P2PUdpBuilder.cpp";
    v19 = v18;
    LastError = GetLastError();
    CurrentThreadId = GetCurrentThreadId();
    CurrentProcessId = GetCurrentProcessId();
    v20 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    tm = Outpop::Utility::Logger::make_tm(v20);
    v21 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    dt = Outpop::Utility::Logger::make_dt(v21);
    v23 = sub_10007400(
            0xFFFF - v19,
            &log_buffer[v19],
            L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
            dt)
        + v19;
    v24 = ntohs(*((_WORD *)v41 + 7));
    v40 = (struct in_addr)v41[4];
    v47 = v24;
    v25 = inet_ntoa(v40);
    v26 = *v46;
    v27 = (_DWORD *)v52[0];
    if ( v52[5] < 0x10u )
      v27 = v52;
    v41 = v27;
    v28 = (_DWORD *)v54[0];
    if ( v54[5] < 0x10u )
      v28 = v54;
    pos = v28;
    v40 = (struct in_addr)(unsigned __int16)v47;
    v39 = (const wchar_t *)v25;
    readable = Outpop::Utility::Stream_Base::get_readable(v26);
    sub_10007400(
      0xFFFF - v23,
      &log_buffer[v23],
      L"P2PUdpBuilder::connect localname is %S,remotename  is %S, stream len is %d,channel remote ip  is %S, port is %d",
      pos,
      v41,
      readable);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", log_buffer);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v40 = (struct in_addr)log_buffer;
      v30 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v30);
    }
    LOBYTE(v55) = 3;
    Outpop::Utility::Lock::unlock((Outpop::Utility::Lock *)v42);
  }
  v40 = v16;
  v31 = *v46;
  v32 = *v46 == 0;
  v42 = &v40;
  v40 = (struct in_addr)v31;
  if ( !v32 )
    Outpop::Utility::Ref_Object::addref(v31);
  LOBYTE(v55) = 3;
  Outpop::IONetwork::P2P_Channel::send_test_packet(
    (struct in_addr *)v10,
    (Outpop::Utility::Stream_Base *)v40.S_un.S_addr);
  Outpop::Utility::Thread_Mutex::acquire((Outpop::Utility::Thread_Mutex *)(this + 42));
  sub_1004DA30(v48, &v51, &v45);
  LOBYTE(v55) = 8;
  sub_1004E5C0(v49);
  LOBYTE(v55) = 9;
  sub_1004D220(this + 51, v50, v49);
  LOBYTE(v55) = 8;
  sub_1004D1B0(v49);
  LOBYTE(v55) = 3;
  sub_1004D1B0(v48);
  Outpop::Utility::Thread_Mutex::release((Outpop::Utility::Thread_Mutex *)(this + 42));
  Outpop::IONetwork::P2PUdpBuilder::PostAccept((Outpop::IONetwork::P2PUdpBuilder *)this, 0xFFDCu);
  LOBYTE(v55) = 1;
  Outpop::Utility::Ref_Object::release(v10);
  LOBYTE(v55) = 0;
  std::string::~string(&v51);
  v55 = -1;
  std::string::~string(&v53);
  return 0;
}
