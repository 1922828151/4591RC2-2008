/*
 * func-name: ?handle_connect@Stream_Connector@IONetwork@Outpop@@QAEXPAVAsynch_IO_Result@23@@Z
 * func-address: 0x1001dec0
 * callers: 0x1001f220
 * callees: 0x10002600, 0x100037d0, 0x100038e0, 0x10003930, 0x10007400, 0x10008c40, 0x10008ca0, 0x10008db0, 0x10008e50, 0x1001a2c0, 0x1001da30, 0x1001f0d0, 0x1001f250, 0x1001f2c0, 0x1001fde0, 0x1003f730, 0x1004e861, 0x1004e98e
 */

void __thiscall Outpop::IONetwork::Stream_Connector::handle_connect(
        Outpop::IONetwork::Stream_Connector *this,
        struct Outpop::IONetwork::Asynch_IO_Result *a2)
{
  int v3; // eax
  Outpop::Utility::Ref_Object *v4; // ecx
  int Error; // esi
  int v6; // eax
  int v7; // eax
  Outpop::Utility::Logger *v8; // eax
  int v9; // esi
  Outpop::Utility::Logger *v10; // eax
  Outpop::Utility::Logger *v11; // eax
  wchar_t *dt; // eax
  int v13; // eax
  Outpop::Utility::Logger *v14; // eax
  Outpop::Utility::Logger *v15; // eax
  int v16; // esi
  Outpop::Utility::Logger *v17; // eax
  Outpop::Utility::Logger *v18; // eax
  wchar_t *v19; // eax
  int v20; // esi
  char *host_addr; // eax
  Outpop::Utility::Logger *v22; // eax
  Outpop::Utility::Lock *v23; // eax
  Outpop::IONetwork::Connect_Bluider_Process **v24; // esi
  Outpop::IONetwork::Bluid_Pakcet *v25; // ecx
  Outpop::Utility::Lock *v26; // eax
  Outpop::Utility::Ref_Object **v27; // esi
  Outpop::Utility::Ref_Object *v28; // ecx
  DWORD v29; // ebx
  wchar_t *tm; // [esp-18h] [ebp-70h]
  wchar_t *v31; // [esp-18h] [ebp-70h]
  DWORD CurrentProcessId; // [esp-14h] [ebp-6Ch]
  DWORD v33; // [esp-14h] [ebp-6Ch]
  DWORD CurrentThreadId; // [esp-10h] [ebp-68h]
  DWORD v35; // [esp-10h] [ebp-68h]
  DWORD LastError; // [esp-Ch] [ebp-64h]
  DWORD v37; // [esp-Ch] [ebp-64h]
  int v38; // [esp-4h] [ebp-5Ch]
  int v39; // [esp+0h] [ebp-58h] BYREF
  char v40[28]; // [esp+10h] [ebp-48h] BYREF
  char optval[4]; // [esp+30h] [ebp-28h] BYREF
  Outpop::IONetwork::Stream_Connector *v42; // [esp+34h] [ebp-24h] BYREF
  SOCKET *v43; // [esp+38h] [ebp-20h] BYREF
  Outpop::IONetwork::Stream_Connector *v44; // [esp+3Ch] [ebp-1Ch] BYREF
  Outpop::Utility::Lock *v45; // [esp+40h] [ebp-18h] BYREF
  Outpop::Utility::Ref_Object *v46[2]; // [esp+44h] [ebp-14h] BYREF
  int v47; // [esp+54h] [ebp-4h]
  _DWORD v48[16]; // [esp+58h] [ebp+0h] BYREF
  _DWORD v49[16]; // [esp+98h] [ebp+40h] BYREF
  _BYTE v50[28]; // [esp+D8h] [ebp+80h] BYREF
  struct in_addr v51[3]; // [esp+F4h] [ebp+9Ch] BYREF
  u_short netshort[7]; // [esp+102h] [ebp+AAh]

  v46[1] = (Outpop::Utility::Ref_Object *)&v39;
  v43 = (SOCKET *)a2;
  v47 = 0;
  Outpop::IONetwork::INET_Addr::INET_Addr((Outpop::IONetwork::INET_Addr *)v50);
  LOBYTE(v47) = 1;
  Outpop::IONetwork::INET_Addr::INET_Addr((Outpop::IONetwork::INET_Addr *)v51);
  LOBYTE(v47) = 2;
  if ( *((_DWORD *)a2 + 10) )
  {
    v3 = sub_1001F250(a2, v40);
    LOBYTE(v47) = 3;
    Outpop::IONetwork::INET_Addr::operator=(v51, v3);
    LOBYTE(v47) = 2;
    Outpop::IONetwork::INET_Addr::~INET_Addr((Outpop::IONetwork::INET_Addr *)v40);
    v45 = this;
    if ( this )
      Outpop::Utility::Ref_Object::addref(this);
    LOBYTE(v47) = 4;
    closesocket(*((_DWORD *)a2 + 27));
    if ( *((_DWORD *)this + 29) )
    {
      v46[0] = this;
      Outpop::Utility::Ref_Object::addref(this);
      LOBYTE(v47) = 5;
      (*(void (__thiscall **)(_DWORD, _DWORD, struct in_addr *, char *, Outpop::Utility::Ref_Object **))(**((_DWORD **)this + 29) + 8))(
        *((_DWORD *)this + 29),
        *((_DWORD *)a2 + 10),
        v51,
        (char *)a2 + 104,
        v46);
      LOBYTE(v47) = 4;
      if ( v46[0] )
        Outpop::Utility::Ref_Object::release(v46[0]);
    }
    LOBYTE(v47) = 2;
    v4 = this;
LABEL_8:
    Outpop::Utility::Ref_Object::release(v4);
LABEL_9:
    LOBYTE(v47) = 1;
    Outpop::IONetwork::INET_Addr::~INET_Addr((Outpop::IONetwork::INET_Addr *)v51);
    LOBYTE(v47) = 0;
    Outpop::IONetwork::INET_Addr::~INET_Addr((Outpop::IONetwork::INET_Addr *)v50);
    return;
  }
  if ( sub_1001F0D0(*((_DWORD *)a2 + 27)) == -1 )
  {
    Error = WSAGetLastError();
    v6 = sub_1001F250(a2, v40);
    LOBYTE(v47) = 6;
    Outpop::IONetwork::INET_Addr::operator=(v51, v6);
    LOBYTE(v47) = 2;
    Outpop::IONetwork::INET_Addr::~INET_Addr((Outpop::IONetwork::INET_Addr *)v40);
    v44 = this;
    if ( this )
      Outpop::Utility::Ref_Object::addref(this);
    LOBYTE(v47) = 7;
    closesocket(*((_DWORD *)a2 + 27));
    if ( *((_DWORD *)this + 29) )
      (*(void (__thiscall **)(_DWORD, int, struct in_addr *, char *, Outpop::IONetwork::Stream_Connector **))(**((_DWORD **)this + 29) + 8))(
        *((_DWORD *)this + 29),
        Error,
        v51,
        (char *)a2 + 104,
        &v44);
    LOBYTE(v47) = 2;
    v4 = v44;
    if ( !v44 )
      goto LABEL_9;
    goto LABEL_8;
  }
  v7 = sub_1001F250(a2, v40);
  LOBYTE(v47) = 8;
  Outpop::IONetwork::INET_Addr::operator=(v51, v7);
  LOBYTE(v47) = 2;
  Outpop::IONetwork::INET_Addr::~INET_Addr((Outpop::IONetwork::INET_Addr *)v40);
  *(_DWORD *)optval = 1;
  if ( setsockopt(*((_DWORD *)a2 + 27), 6, 1, optval, 4) == -1 )
  {
    closesocket(*((_DWORD *)a2 + 27));
    v44 = (Outpop::IONetwork::Stream_Connector *)WSAGetLastError();
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
    {
      v45 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      Outpop::Utility::Lock::lock(v45);
      LOBYTE(v47) = 9;
      v8 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v46[0] = (Outpop::Utility::Ref_Object *)Outpop::Utility::Logger::get_log_buffer(v8);
      v9 = sub_10007400(0xFFFFu, (wchar_t *)v46[0], L"\n%s", L"LOG_ERROR");
      LastError = GetLastError();
      CurrentThreadId = GetCurrentThreadId();
      CurrentProcessId = GetCurrentProcessId();
      v10 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      tm = Outpop::Utility::Logger::make_tm(v10);
      v11 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      dt = Outpop::Utility::Logger::make_dt(v11);
      v13 = sub_10007400(
              0xFFFF - v9,
              (wchar_t *)v46[0] + v9,
              L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
              dt,
              tm,
              CurrentProcessId,
              CurrentThreadId,
              LastError,
              L"D:\\R3\\OutpopGameProject\\IONetwork\\Stream_Connector.cpp",
              99);
      sub_10007400(
        0xFFFF - (v13 + v9),
        (wchar_t *)v46[0] + v13 + v9,
        L"Stream_Connector setsockopt  can't set tcp no delay error %d",
        v44);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", v46[0]);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v14 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v14);
      }
      LOBYTE(v47) = 2;
      Outpop::Utility::Lock::unlock(v45);
    }
    if ( !*((_DWORD *)this + 29) )
      goto LABEL_9;
    v42 = this;
    Outpop::Utility::Ref_Object::addref(this);
    LOBYTE(v47) = 10;
    (*(void (__thiscall **)(_DWORD, Outpop::IONetwork::Stream_Connector *, struct in_addr *, char *, Outpop::IONetwork::Stream_Connector **))(**((_DWORD **)this + 29) + 8))(
      *((_DWORD *)this + 29),
      v44,
      v51,
      (char *)a2 + 104,
      &v42);
    LOBYTE(v47) = 2;
    v4 = v42;
    if ( !v42 )
      goto LABEL_9;
    goto LABEL_8;
  }
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
  {
    v45 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v45);
    LOBYTE(v47) = 11;
    v15 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v46[0] = (Outpop::Utility::Ref_Object *)Outpop::Utility::Logger::get_log_buffer(v15);
    v16 = sub_10007400(0xFFFFu, (wchar_t *)v46[0], L"\n%s", L"LOG_DEBUG");
    v37 = GetLastError();
    v35 = GetCurrentThreadId();
    v33 = GetCurrentProcessId();
    v17 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v31 = Outpop::Utility::Logger::make_tm(v17);
    v18 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v19 = Outpop::Utility::Logger::make_dt(v18);
    v20 = sub_10007400(
            0xFFFF - v16,
            (wchar_t *)v46[0] + v16,
            L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
            v19,
            v31,
            v33,
            v35,
            v37,
            L"D:\\R3\\OutpopGameProject\\IONetwork\\Stream_Connector.cpp",
            107)
        + v16;
    v38 = ntohs(netshort[0]);
    host_addr = Outpop::IONetwork::INET_Addr::get_host_addr(v51);
    sub_10007400(
      0xFFFF - v20,
      (wchar_t *)v46[0] + v20,
      L"Stream_Connector::handle_connect ip is %S,port is %d",
      host_addr,
      v38);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", v46[0]);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v22 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v22);
    }
    LOBYTE(v47) = 2;
    Outpop::Utility::Lock::unlock(v45);
  }
  if ( *((_BYTE *)this + 84) )
  {
    Outpop::IONetwork::Bluid_Pakcet::Bluid_Pakcet((Outpop::IONetwork::Bluid_Pakcet *)v48);
    LOBYTE(v47) = 12;
    v48[0] = *((_DWORD *)a2 + 27);
    Outpop::IONetwork::Bluid_Pakcet::remote_addr(
      (Outpop::IONetwork::Bluid_Pakcet *)v48,
      (struct Outpop::IONetwork::INET_Addr *)v51);
    Outpop::IONetwork::Bluid_Pakcet::local_addr(
      (Outpop::IONetwork::Bluid_Pakcet *)v48,
      (struct Outpop::IONetwork::INET_Addr *)v50);
    v23 = (Outpop::Utility::Lock *)operator new(92);
    v45 = v23;
    LOBYTE(v47) = 13;
    if ( v23 )
      v24 = (Outpop::IONetwork::Connect_Bluider_Process **)sub_1001F2C0(v23, v48, this);
    else
      v24 = 0;
    LOBYTE(v47) = 12;
    v42 = (Outpop::IONetwork::Stream_Connector *)v24;
    if ( v24 )
      Outpop::Utility::Ref_Object::addref((Outpop::Utility::Ref_Object *)v24);
    LOBYTE(v47) = 14;
    v46[0] = (struct Outpop::IONetwork::Asynch_IO_Result *)((char *)a2 + 104);
    sub_1001DA30((int)v24, (Outpop::Utility::Ref_Object **)a2 + 26);
    if ( Outpop::IONetwork::Connect_Bluider_Process::first_process(v24[21]) == -1 )
    {
      v45 = (Outpop::Utility::Lock *)GetLastError();
      closesocket(*((_DWORD *)a2 + 27));
      if ( *((_DWORD *)this + 29) )
      {
        v43 = (SOCKET *)this;
        Outpop::Utility::Ref_Object::addref(this);
        LOBYTE(v47) = 15;
        (*(void (__thiscall **)(_DWORD, Outpop::Utility::Lock *, struct in_addr *, Outpop::Utility::Ref_Object *, SOCKET **))(**((_DWORD **)this + 29) + 8))(
          *((_DWORD *)this + 29),
          v45,
          v51,
          v46[0],
          &v43);
        LOBYTE(v47) = 14;
        if ( v43 )
          Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)v43);
      }
    }
    LOBYTE(v47) = 12;
    Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)v24);
    LOBYTE(v47) = 2;
    v25 = (Outpop::IONetwork::Bluid_Pakcet *)v48;
  }
  else
  {
    Outpop::IONetwork::Bluid_Pakcet::Bluid_Pakcet((Outpop::IONetwork::Bluid_Pakcet *)v49);
    LOBYTE(v47) = 16;
    v49[0] = *((_DWORD *)a2 + 27);
    Outpop::IONetwork::Bluid_Pakcet::remote_addr(
      (Outpop::IONetwork::Bluid_Pakcet *)v49,
      (struct Outpop::IONetwork::INET_Addr *)v51);
    Outpop::IONetwork::Bluid_Pakcet::local_addr(
      (Outpop::IONetwork::Bluid_Pakcet *)v49,
      (struct Outpop::IONetwork::INET_Addr *)v50);
    v26 = (Outpop::Utility::Lock *)operator new(156);
    v45 = v26;
    LOBYTE(v47) = 17;
    if ( v26 )
      v27 = (Outpop::Utility::Ref_Object **)sub_1001FDE0(v26, v49, this, *((_DWORD *)this + 3), *((_DWORD *)this + 5));
    else
      v27 = 0;
    LOBYTE(v47) = 16;
    v42 = (Outpop::IONetwork::Stream_Connector *)v27;
    if ( v27 )
      Outpop::Utility::Ref_Object::addref((Outpop::Utility::Ref_Object *)v27);
    LOBYTE(v47) = 18;
    if ( v27[38] )
      Outpop::Utility::Ref_Object::release(v27[38]);
    v46[0] = (struct Outpop::IONetwork::Asynch_IO_Result *)((char *)a2 + 104);
    v28 = (Outpop::Utility::Ref_Object *)*((_DWORD *)a2 + 26);
    v27[38] = v28;
    if ( v28 )
      Outpop::Utility::Ref_Object::addref(v28);
    if ( sub_1001A2C0((int *)v27) == -1 )
    {
      v29 = GetLastError();
      closesocket(v43[27]);
      if ( *((_DWORD *)this + 29) )
      {
        v45 = this;
        Outpop::Utility::Ref_Object::addref(this);
        LOBYTE(v47) = 19;
        (*(void (__thiscall **)(_DWORD, DWORD, struct in_addr *, Outpop::Utility::Ref_Object *, Outpop::Utility::Lock **))(**((_DWORD **)this + 29) + 8))(
          *((_DWORD *)this + 29),
          v29,
          v51,
          v46[0],
          &v45);
        LOBYTE(v47) = 18;
        if ( v45 )
          Outpop::Utility::Ref_Object::release(v45);
      }
    }
    LOBYTE(v47) = 16;
    if ( v27 )
      Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)v27);
    LOBYTE(v47) = 2;
    v25 = (Outpop::IONetwork::Bluid_Pakcet *)v49;
  }
  Outpop::IONetwork::Bluid_Pakcet::~Bluid_Pakcet(v25);
  LOBYTE(v47) = 1;
  Outpop::IONetwork::INET_Addr::~INET_Addr((Outpop::IONetwork::INET_Addr *)v51);
  LOBYTE(v47) = 0;
  Outpop::IONetwork::INET_Addr::~INET_Addr((Outpop::IONetwork::INET_Addr *)v50);
}
