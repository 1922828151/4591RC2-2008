/*
 * func-name: ?on_new_channel@Stream_Acceptor@IONetwork@Outpop@@UAEXAAUIO_Channel_Config@23@HHV?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@3@@Z
 * func-address: 0x10018710
 * callers: none
 * callees: 0x10003890, 0x10007400, 0x1000e490, 0x1003a2e0, 0x1004e98e
 */

void __fastcall Outpop::IONetwork::Stream_Acceptor::on_new_channel(
        int a1,
        int a2,
        Outpop::Utility::Ref_Object *a3,
        Outpop::Utility::Lock *a4,
        Outpop::Utility::Ref_Object *a5,
        Outpop::Utility::Ref_Object *a6)
{
  Outpop::Utility::Ref_Object *v7; // ebx
  struct in_addr *v8; // edi
  int v9; // ebp
  int v10; // ecx
  int v11; // edx
  int v12; // eax
  int v13; // ecx
  int v14; // edx
  Outpop::Utility::Logger *v15; // eax
  wchar_t *log_buffer; // ebx
  int v17; // ebp
  Outpop::Utility::Logger *v18; // eax
  Outpop::Utility::Logger *v19; // eax
  wchar_t *dt; // eax
  int v21; // ebp
  char *v22; // eax
  Outpop::Utility::Logger *v23; // eax
  Outpop::IONetwork::Stream_Channel *v24; // eax
  Outpop::Utility::Ref_Object *v25; // edi
  void (__thiscall *v26)(Outpop::Utility::Ref_Object *__hidden); // esi
  wchar_t *tm; // [esp-18h] [ebp-74h]
  DWORD CurrentProcessId; // [esp-14h] [ebp-70h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-6Ch]
  DWORD LastError; // [esp-Ch] [ebp-68h]
  int v31; // [esp-4h] [ebp-60h]
  _DWORD v32[11]; // [esp+24h] [ebp-38h] BYREF
  int v33; // [esp+58h] [ebp-4h]

  v33 = 0;
  v7 = a5;
  v8 = (struct in_addr *)a3;
  if ( !*(_BYTE *)(a1 + 88) )
  {
    v9 = *(_DWORD *)(a1 + 184);
    a3 = (Outpop::Utility::Ref_Object *)a1;
    Outpop::Utility::Ref_Object::addref((Outpop::Utility::Ref_Object *)a1);
    LOBYTE(v33) = 1;
    LOBYTE(a5) = (*(int (__thiscall **)(int, Outpop::Utility::Ref_Object **, struct in_addr *, Outpop::Utility::Lock *, Outpop::Utility::Ref_Object *, Outpop::Utility::Ref_Object **))(*(_DWORD *)v9 + 16))(
                   v9,
                   &a3,
                   v8 + 9,
                   a4,
                   v7,
                   &a6);
    LOBYTE(v33) = 0;
    if ( a3 )
      Outpop::Utility::Ref_Object::release(a3);
    if ( !(_BYTE)a5 )
    {
      closesocket(v8->S_un.S_addr);
      v33 = -1;
      goto LABEL_29;
    }
  }
  v8[18].S_un.S_un_b.s_b1 = *(_BYTE *)(a1 + 88);
  v8[1].S_un.S_addr = 1;
  v10 = *(_DWORD *)(a1 + 24);
  v11 = *(_DWORD *)(a1 + 28);
  v32[7] = 300;
  v32[9] = 300;
  v12 = *(_DWORD *)(a1 + 40);
  v32[4] = v10;
  v13 = *(_DWORD *)(a1 + 8);
  v32[8] = v12;
  v32[5] = v11;
  v14 = *(_DWORD *)(a1 + 16);
  v32[0] = v13;
  v32[10] = 100;
  v32[6] = 1500;
  v32[1] = a4;
  v32[3] = v7;
  v32[2] = v14;
  LOBYTE(v33) = 2;
  if ( !Outpop::Utility::Thread_Mutex::acquire((Outpop::Utility::Thread_Mutex *)(a1 + 132)) )
  {
    v33 = -1;
LABEL_29:
    if ( a6 )
      Outpop::Utility::Ref_Object::release(a6);
    return;
  }
  Outpop::IONetwork::INET_Addr::hash64((Outpop::IONetwork::INET_Addr *)&v8[9]);
  sub_1003A2E0(a1 + 192);
  LOBYTE(v33) = 0;
  Outpop::Utility::Thread_Mutex::release((Outpop::Utility::Thread_Mutex *)(a1 + 132));
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
  {
    a4 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(a4);
    LOBYTE(v33) = 3;
    v15 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    log_buffer = Outpop::Utility::Logger::get_log_buffer(v15);
    v17 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_DEBUG");
    LastError = GetLastError();
    CurrentThreadId = GetCurrentThreadId();
    CurrentProcessId = GetCurrentProcessId();
    v18 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    tm = Outpop::Utility::Logger::make_tm(v18);
    v19 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    dt = Outpop::Utility::Logger::make_dt(v19);
    v21 = sub_10007400(
            0xFFFF - v17,
            &log_buffer[v17],
            L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
            dt,
            tm,
            CurrentProcessId,
            CurrentThreadId,
            LastError,
            L"D:\\R3\\OutpopGameProject\\IONetwork\\Stream_Accecptor.cpp",
            267)
        + v17;
    v31 = ntohs(v8[12].S_un.S_un_w.s_w2);
    v22 = inet_ntoa(v8[13]);
    sub_10007400(
      0xFFFF - v21,
      &log_buffer[v21],
      L"Stream_Acceptor::on_new_channel remote ip is %S,port is %d",
      v22,
      v31);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", log_buffer);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v23 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v23);
    }
    LOBYTE(v33) = 0;
    Outpop::Utility::Lock::unlock(a4);
  }
  v24 = (Outpop::IONetwork::Stream_Channel *)operator new(232);
  a4 = v24;
  LOBYTE(v33) = 4;
  if ( v24 )
    v25 = Outpop::IONetwork::Stream_Channel::Stream_Channel(
            v24,
            (struct Outpop::IONetwork::Channel_Config *)v32,
            (struct Outpop::IONetwork::IO_Channel_Config *)v8);
  else
    v25 = 0;
  LOBYTE(v33) = 0;
  a3 = v25;
  if ( v25 )
    Outpop::Utility::Ref_Object::addref(v25);
  LOBYTE(v33) = 5;
  (*(void (__thiscall **)(Outpop::Utility::Ref_Object *, int))(*(_DWORD *)v25 + 28))(v25, a1);
  if ( *(_DWORD *)(a1 + 184) )
  {
    a5 = (Outpop::Utility::Ref_Object *)a1;
    Outpop::Utility::Ref_Object::addref((Outpop::Utility::Ref_Object *)a1);
    LOBYTE(v33) = 6;
    a4 = v25;
    Outpop::Utility::Ref_Object::addref(v25);
    LOBYTE(v33) = 7;
    (*(void (__thiscall **)(_DWORD, Outpop::Utility::Lock **, Outpop::Utility::Ref_Object **, Outpop::Utility::Ref_Object **))(**(_DWORD **)(a1 + 184) + 4))(
      *(_DWORD *)(a1 + 184),
      &a4,
      &a6,
      &a5);
    LOBYTE(v33) = 6;
    v26 = Outpop::Utility::Ref_Object::release;
    if ( a4 )
      Outpop::Utility::Ref_Object::release(a4);
    LOBYTE(v33) = 5;
    if ( a5 )
      Outpop::Utility::Ref_Object::release(a5);
  }
  else
  {
    v26 = Outpop::Utility::Ref_Object::release;
  }
  LOBYTE(v33) = 0;
  v26(v25);
  v33 = -1;
  if ( a6 )
    v26(a6);
}
