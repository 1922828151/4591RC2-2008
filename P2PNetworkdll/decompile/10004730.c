/*
 * func-name: ?handle_build_channel@Peer@P2P@Outpop@@UAEXAAV?$Smart_Ptr@VChannel@IONetwork@Outpop@@@Utility@3@AAV?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@53@AAV?$Smart_Ptr@VP2PUdpBuilder@IONetwork@Outpop@@@53@@Z
 * func-address: 0x10004730
 * callers: none
 * callees: 0x10004ad0, 0x10006440, 0x100072a0, 0x100097a0, 0x1000a480, 0x1000a570, 0x1000d8e0, 0x100232f7, 0x100234ce
 */

int __thiscall Outpop::P2P::Peer::handle_build_channel(
        Outpop::Utility::Lock *this,
        Outpop::IONetwork::Channel **a2,
        int a3,
        int a4)
{
  Outpop::IONetwork::Channel **v4; // edi
  void *v6; // eax
  Outpop::Utility::Ref_Object *v7; // eax
  int v8; // eax
  bool v9; // bl
  Outpop::Utility::Lock *v10; // ebx
  Outpop::Utility::Logger *v11; // eax
  wchar_t *log_buffer; // edi
  int v13; // esi
  Outpop::Utility::Logger *v14; // eax
  Outpop::Utility::Logger *v15; // eax
  wchar_t *dt; // eax
  int v17; // eax
  Outpop::Utility::Logger *v18; // eax
  Outpop::Utility::Lock *v19; // esi
  char *v20; // ebx
  struct Outpop::IONetwork::Channel_Handler *v21; // eax
  struct Outpop::IONetwork::Channel_Error_Handler *v22; // eax
  wchar_t *tm; // [esp-18h] [ebp-B4h]
  DWORD CurrentProcessId; // [esp-14h] [ebp-B0h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-ACh]
  DWORD LastError; // [esp-Ch] [ebp-A8h]
  Outpop::Utility::Ref_Object *v28; // [esp+14h] [ebp-88h] BYREF
  void *v29; // [esp+18h] [ebp-84h] BYREF
  Outpop::Utility::Lock *v30; // [esp+1Ch] [ebp-80h]
  Outpop::IONetwork::Channel **v31; // [esp+20h] [ebp-7Ch]
  char v32[12]; // [esp+24h] [ebp-78h] BYREF
  _BYTE v33[32]; // [esp+30h] [ebp-6Ch] BYREF
  _BYTE v34[28]; // [esp+50h] [ebp-4Ch] BYREF
  _BYTE v35[28]; // [esp+6Ch] [ebp-30h] BYREF
  int v36; // [esp+98h] [ebp-4h]

  v4 = a2;
  v30 = this;
  v31 = a2;
  std::string::string(v34);
  v36 = 0;
  std::string::string(v35);
  LOBYTE(v36) = 1;
  sub_100097A0(v34);
  sub_100097A0(v35);
  if ( !(unsigned __int8)std::operator==<char>(v34, &unk_10026701)
    && !(unsigned __int8)std::operator!=<char>(v35, (char *)this + 24) )
  {
    sub_100072A0();
    v6 = operator new(0x28u);
    v29 = v6;
    LOBYTE(v36) = 2;
    if ( v6 )
      v7 = (Outpop::Utility::Ref_Object *)sub_1000A480(v6, v34, *a2);
    else
      v7 = 0;
    LOBYTE(v36) = 1;
    v28 = v7;
    if ( v7 )
      Outpop::Utility::Ref_Object::addref(v7);
    LOBYTE(v36) = 3;
    v8 = sub_1000D8E0(v33, v34, &v28);
    LOBYTE(v36) = 4;
    v9 = *(_BYTE *)(sub_10006440((char *)this + 52, v32, v8) + 8) == 0;
    LOBYTE(v36) = 3;
    sub_10004AD0(v33);
    if ( v9 )
    {
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 139) == 1 )
      {
        v10 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        v30 = v10;
        Outpop::Utility::Lock::lock(v10);
        LOBYTE(v36) = 5;
        v11 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        log_buffer = Outpop::Utility::Logger::get_log_buffer(v11);
        v13 = sub_1000A570(log_buffer, L"\n%s", L"LOG_WARNING");
        LastError = GetLastError();
        CurrentThreadId = GetCurrentThreadId();
        CurrentProcessId = GetCurrentProcessId();
        v14 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        tm = Outpop::Utility::Logger::make_tm(v14);
        v15 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        dt = Outpop::Utility::Logger::make_dt(v15);
        v17 = sub_1000A570(
                &log_buffer[v13],
                L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                dt,
                tm,
                CurrentProcessId,
                CurrentThreadId,
                LastError,
                L"D:\\R3\\OutpopGameProject\\P2PNetwork\\Peer.cpp",
                455);
        sub_1000A570(&log_buffer[v17 + v13], L"Peer acceptor insert peer but already exits");
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", log_buffer);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          v18 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v18);
        }
        LOBYTE(v36) = 3;
        Outpop::Utility::Lock::unlock(v10);
        v4 = v31;
      }
      (*(void (__thiscall **)(Outpop::IONetwork::Channel *))(*(_DWORD *)*v4 + 24))(*v4);
    }
    else
    {
      v19 = v30;
      v20 = (char *)v30 - 8;
      if ( v30 == (Outpop::Utility::Lock *)8 )
        v21 = 0;
      else
        v21 = (Outpop::Utility::Lock *)((char *)v30 + 4);
      Outpop::IONetwork::Channel::set_channel_handle(*a2, v21);
      if ( v20 )
        v22 = (Outpop::Utility::Lock *)((char *)v19 + 8);
      else
        v22 = 0;
      Outpop::IONetwork::Channel::set_error_handle(*a2, v22);
      v29 = v28;
      if ( v28 )
        Outpop::Utility::Ref_Object::addref(v28);
      LOBYTE(v36) = 6;
      Outpop::IONetwork::Channel::set_act_obj(*a2, &v29);
      LOBYTE(v36) = 3;
      if ( v29 )
        Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)v29);
      (*(void (__thiscall **)(Outpop::IONetwork::Channel *))(*(_DWORD *)*a2 + 8))(*a2);
      (*(void (__thiscall **)(int, Outpop::Utility::Ref_Object **))(*((_DWORD *)v19 - 2) + 12))((int)v19 - 8, &v28);
    }
    LOBYTE(v36) = 1;
    if ( v28 )
      Outpop::Utility::Ref_Object::release(v28);
  }
  LOBYTE(v36) = 0;
  std::string::~string(v35);
  v36 = -1;
  return std::string::~string(v34);
}
