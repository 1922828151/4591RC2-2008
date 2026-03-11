/*
 * func-name: ?on_new_channel@Stream_Connector@IONetwork@Outpop@@UAEXAAUIO_Channel_Config@23@HHV?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@3@@Z
 * func-address: 0x1001e8b0
 * callers: none
 * callees: 0x10007400, 0x1000e490, 0x1004e98e
 */

void __thiscall Outpop::IONetwork::Stream_Connector::on_new_channel(
        int this,
        struct in_addr *a2,
        int a3,
        int a4,
        Outpop::Utility::Ref_Object *a5)
{
  ULONG *p_S_addr; // edi
  int v7; // ecx
  int v8; // edx
  int v9; // eax
  int v10; // ecx
  int v11; // edx
  int v12; // eax
  int v13; // ecx
  Outpop::Utility::Lock *v14; // eax
  Outpop::Utility::Lock *v15; // ebx
  Outpop::Utility::Logger *v16; // eax
  wchar_t *log_buffer; // ebp
  int v18; // edi
  Outpop::Utility::Logger *v19; // eax
  Outpop::Utility::Logger *v20; // eax
  wchar_t *dt; // eax
  int v22; // edi
  char *v23; // eax
  Outpop::Utility::Logger *v24; // eax
  wchar_t *tm; // [esp-18h] [ebp-6Ch]
  DWORD CurrentProcessId; // [esp-14h] [ebp-68h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-64h]
  DWORD LastError; // [esp-Ch] [ebp-60h]
  int v29; // [esp-4h] [ebp-58h]
  Outpop::Utility::Lock *v30[2]; // [esp+14h] [ebp-40h] BYREF
  _DWORD v31[11]; // [esp+1Ch] [ebp-38h] BYREF
  int v32; // [esp+50h] [ebp-4h]

  v32 = 0;
  p_S_addr = &a2->S_un.S_addr;
  a2[18].S_un.S_un_b.s_b1 = *(_BYTE *)(this + 84);
  p_S_addr[1] = 0;
  v7 = *(_DWORD *)(this + 28);
  v8 = *(_DWORD *)(this + 32);
  v31[7] = 300;
  v31[9] = 300;
  v9 = *(_DWORD *)(this + 44);
  v31[4] = v7;
  v10 = *(_DWORD *)(this + 16);
  v31[5] = v8;
  v11 = *(_DWORD *)(this + 24);
  v31[8] = v9;
  v12 = *(_DWORD *)(this + 12);
  v31[1] = v10;
  v13 = *(_DWORD *)(this + 20);
  v31[10] = 100;
  v31[6] = 1500;
  v31[3] = v11;
  v31[0] = v12;
  v31[2] = v13;
  v14 = (Outpop::Utility::Lock *)operator new(232);
  v30[0] = v14;
  LOBYTE(v32) = 1;
  if ( v14 )
    v15 = Outpop::IONetwork::Stream_Channel::Stream_Channel(
            v14,
            (struct Outpop::IONetwork::Channel_Config *)v31,
            (struct Outpop::IONetwork::IO_Channel_Config *)p_S_addr);
  else
    v15 = 0;
  LOBYTE(v32) = 0;
  v30[1] = v15;
  if ( v15 )
    Outpop::Utility::Ref_Object::addref(v15);
  LOBYTE(v32) = 2;
  (*(void (__thiscall **)(Outpop::Utility::Lock *, int))(*(_DWORD *)v15 + 32))(v15, this);
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
  {
    v30[0] = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v30[0]);
    LOBYTE(v32) = 3;
    v16 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    log_buffer = Outpop::Utility::Logger::get_log_buffer(v16);
    v18 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_DEBUG");
    LastError = GetLastError();
    CurrentThreadId = GetCurrentThreadId();
    CurrentProcessId = GetCurrentProcessId();
    v19 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    tm = Outpop::Utility::Logger::make_tm(v19);
    v20 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    dt = Outpop::Utility::Logger::make_dt(v20);
    v22 = sub_10007400(
            0xFFFF - v18,
            &log_buffer[v18],
            L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
            dt,
            tm,
            CurrentProcessId,
            CurrentThreadId,
            LastError,
            L"D:\\R3\\OutpopGameProject\\IONetwork\\Stream_Connector.cpp",
            184)
        + v18;
    v29 = ntohs(a2[12].S_un.S_un_w.s_w2);
    v23 = inet_ntoa(a2[13]);
    sub_10007400(0xFFFF - v22, &log_buffer[v22], L"Stream_Connector::handle_connect ip is %S,port is %d", v23, v29);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", log_buffer);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v24 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v24);
    }
    LOBYTE(v32) = 2;
    Outpop::Utility::Lock::unlock(v30[0]);
  }
  v30[0] = (Outpop::Utility::Lock *)this;
  Outpop::Utility::Ref_Object::addref((Outpop::Utility::Ref_Object *)this);
  LOBYTE(v32) = 4;
  a2 = (struct in_addr *)v15;
  Outpop::Utility::Ref_Object::addref(v15);
  LOBYTE(v32) = 5;
  (*(void (__thiscall **)(_DWORD, struct in_addr **, Outpop::Utility::Ref_Object **, Outpop::Utility::Lock **))(**(_DWORD **)(this + 116) + 4))(
    *(_DWORD *)(this + 116),
    &a2,
    &a5,
    v30);
  LOBYTE(v32) = 4;
  if ( a2 )
    Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)a2);
  LOBYTE(v32) = 2;
  if ( v30[0] )
    Outpop::Utility::Ref_Object::release(v30[0]);
  LOBYTE(v32) = 0;
  Outpop::Utility::Ref_Object::release(v15);
  v32 = -1;
  if ( a5 )
    Outpop::Utility::Ref_Object::release(a5);
}
