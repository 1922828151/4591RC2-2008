/*
 * func-name: sub_1000AC90
 * func-address: 0x1000ac90
 * callers: 0x100031a0, 0x10003870, 0x10003ae0
 * callees: 0x100096f0, 0x1000a570, 0x1000d5a0, 0x1000e660, 0x1000e760, 0x1000e860
 */

void __fastcall sub_1000AC90(
        __int16 a1,
        __int16 a2,
        Outpop::Utility::Ref_Object *a3,
        Outpop::Utility::Ref_Object *a4,
        int a5,
        Outpop::Utility::Lock *a6)
{
  Outpop::Utility::Ref_Object *v6; // ebp
  _DWORD *v7; // ebx
  int v8; // eax
  __int16 v9; // cx
  Outpop::Utility::Binary_Stream *v10; // eax
  Outpop::Utility::Ref_Object *v11; // esi
  Outpop::Utility::Stream_Base *v12; // eax
  Outpop::Utility::Logger *v13; // eax
  wchar_t *log_buffer; // edi
  int v15; // esi
  Outpop::Utility::Logger *v16; // eax
  Outpop::Utility::Logger *v17; // eax
  wchar_t *dt; // eax
  int v19; // esi
  int v20; // eax
  Outpop::Utility::Logger *v21; // eax
  DWORD v22; // eax
  DWORD v23; // eax
  _DWORD v24[3]; // [esp-8h] [ebp-44h] BYREF
  wchar_t *tm; // [esp+4h] [ebp-38h]
  DWORD CurrentProcessId; // [esp+8h] [ebp-34h]
  DWORD CurrentThreadId; // [esp+Ch] [ebp-30h]
  DWORD LastError; // [esp+10h] [ebp-2Ch]
  int v29; // [esp+14h] [ebp-28h]
  unsigned int v30; // [esp+18h] [ebp-24h]
  int v31; // [esp+38h] [ebp-4h]

  v6 = a3;
  if ( !*((_BYTE *)a3 + 118) )
  {
    v7 = (_DWORD *)((char *)a3 + 152);
    *((_DWORD *)a3 + 38) = a4;
    v8 = a5;
    *((_WORD *)v6 + 78) = a1;
    v9 = (__int16)a6;
    v30 = 72;
    *((_BYTE *)v6 + 118) = 1;
    *((_BYTE *)v6 + 119) = 0;
    *((_WORD *)v6 + 79) = a2;
    *((_DWORD *)v6 + 40) = v8;
    *((_WORD *)v6 + 82) = v9;
    v10 = (Outpop::Utility::Binary_Stream *)Outpop::Utility::Binary_Stream::operator new(v30);
    v11 = v10;
    a6 = v10;
    v31 = 0;
    if ( v10 )
    {
      Outpop::Utility::Binary_Stream::Binary_Stream(v10, 64);
      *(_DWORD *)v11 = &Outpop::Utility::Binary_Stream::`vftable';
    }
    else
    {
      v11 = 0;
    }
    v31 = -1;
    a3 = v11;
    if ( v11 )
      Outpop::Utility::Ref_Object::addref(v11);
    v31 = 1;
    LOBYTE(a6) = -123;
    v12 = (Outpop::Utility::Stream_Base *)sub_1000E660(&a6);
    sub_100096F0((_DWORD *)v6 + 17, v12);
    sub_1000E760((char *)v6 + 152);
    sub_1000E860((char *)v6 + 156);
    sub_1000E860((char *)v6 + 158);
    sub_1000E760((char *)v6 + 160);
    sub_1000E860((char *)v6 + 164);
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
    {
      a6 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      Outpop::Utility::Lock::lock(a6);
      LOBYTE(v31) = 2;
      v13 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      log_buffer = Outpop::Utility::Logger::get_log_buffer(v13);
      v15 = sub_1000A570(0xFFFFu, log_buffer, L"\n%s", L"LOG_DEBUG");
      LastError = GetLastError();
      CurrentThreadId = GetCurrentThreadId();
      CurrentProcessId = GetCurrentProcessId();
      v16 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      tm = Outpop::Utility::Logger::make_tm(v16);
      v17 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      dt = Outpop::Utility::Logger::make_dt(v17);
      v19 = sub_1000A570(
              0xFFFF - v15,
              &log_buffer[v15],
              L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
              dt,
              tm,
              CurrentProcessId,
              CurrentThreadId,
              LastError,
              L"D:\\R3\\OutpopGameProject\\P2PNetwork\\Simple_Address_Protocol.cpp",
              159)
          + v15;
      if ( *((_DWORD *)v6 + 23) < 0x10u )
        v20 = (int)v6 + 72;
      else
        v20 = *((_DWORD *)v6 + 18);
      sub_1000A570(
        0xFFFF - v19,
        &log_buffer[v19],
        L"SAP report address id %S exteral ip %d address port %d kp port %d interal ip %d interal port %d",
        v20,
        *v7,
        *((unsigned __int16 *)v6 + 78),
        *((unsigned __int16 *)v6 + 79),
        *((_DWORD *)v6 + 40),
        *((unsigned __int16 *)v6 + 82));
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", log_buffer);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v30 = (unsigned int)log_buffer;
        v21 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v21);
      }
      LOBYTE(v31) = 1;
      Outpop::Utility::Lock::unlock(a6);
    }
    v30 = 0;
    v29 = 1;
    a6 = (Outpop::Utility::Lock *)v24;
    std::string::string(v24, &unk_10026701);
    if ( Outpop::IONetwork::P2PUdpBuilder::asynch_send_to(
           *((_DWORD *)v6 + 24),
           &a3,
           (char *)v6 + 124,
           v24[0],
           v24[1],
           v24[2],
           tm,
           CurrentProcessId,
           CurrentThreadId,
           LastError,
           v29,
           v30) == -1 )
    {
      v22 = GetLastError();
      (*((void (__cdecl **)(_DWORD, int, DWORD))v6 + 11))(*((_DWORD *)v6 + 12), 5, v22);
    }
    else
    {
      a6 = 0;
      LOBYTE(v31) = 3;
      a4 = v6;
      Outpop::Utility::Ref_Object::addref(v6);
      LOBYTE(v31) = 4;
      *((_DWORD *)v6 + 26) = sub_1000D5A0(&a4, &unk_10030AB0, &a6);
      LOBYTE(v31) = 3;
      Outpop::Utility::Ref_Object::release(v6);
      LOBYTE(v31) = 1;
      if ( *((_DWORD *)v6 + 26) == -1 )
      {
        v23 = GetLastError();
        (*((void (__cdecl **)(_DWORD, int, DWORD))v6 + 11))(*((_DWORD *)v6 + 12), 1, v23);
      }
    }
    v31 = -1;
    if ( a3 )
      Outpop::Utility::Ref_Object::release(a3);
  }
}
