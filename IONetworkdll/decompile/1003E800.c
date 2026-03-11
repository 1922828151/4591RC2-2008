/*
 * func-name: ?make_respond_packet@Accept_Bluider_Process@IONetwork@Outpop@@QAE_NV?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@3@PAVSecurity@23@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x1003e800
 * callers: 0x1003dd30
 * callees: 0x100068e0, 0x10007400, 0x10008000, 0x10008920, 0x1000d010, 0x1000d260, 0x1004e861, 0x1004e938
 */

char __thiscall Outpop::IONetwork::Accept_Bluider_Process::make_respond_packet(
        _DWORD *this,
        Outpop::Utility::Ref_Object *a2,
        Outpop::IONetwork::Security *a3,
        char a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  unsigned int v11; // eax
  int v12; // eax
  int v13; // esi
  int v14; // ebp
  unsigned int *v15; // eax
  Outpop::Utility::Lock *v16; // ebx
  Outpop::Utility::Logger *v17; // eax
  wchar_t *log_buffer; // edi
  int v19; // esi
  Outpop::Utility::Logger *v20; // eax
  Outpop::Utility::Logger *v21; // eax
  wchar_t *dt; // eax
  int v23; // eax
  Outpop::Utility::Logger *v24; // eax
  bool v25; // al
  HCRYPTPROV *v26; // eax
  Outpop::Utility::Lock *v27; // ebx
  Outpop::Utility::Logger *v28; // eax
  wchar_t *v29; // edi
  int v30; // esi
  Outpop::Utility::Logger *v31; // eax
  Outpop::Utility::Logger *v32; // eax
  wchar_t *v33; // eax
  int v34; // eax
  Outpop::Utility::Logger *v35; // eax
  struct Outpop::IONetwork::CryptProv *v37; // eax
  Outpop::Utility::Logger *v38; // eax
  int v39; // esi
  Outpop::Utility::Logger *v40; // eax
  Outpop::Utility::Logger *v41; // eax
  wchar_t *v42; // eax
  int v43; // eax
  wchar_t *tm; // [esp-18h] [ebp-11Ch]
  wchar_t *v45; // [esp-18h] [ebp-11Ch]
  wchar_t *v46; // [esp-18h] [ebp-11Ch]
  DWORD CurrentProcessId; // [esp-14h] [ebp-118h]
  DWORD v48; // [esp-14h] [ebp-118h]
  DWORD v49; // [esp-14h] [ebp-118h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-114h]
  DWORD v51; // [esp-10h] [ebp-114h]
  DWORD v52; // [esp-10h] [ebp-114h]
  DWORD LastError; // [esp-Ch] [ebp-110h]
  DWORD v54; // [esp-Ch] [ebp-110h]
  DWORD v55; // [esp-Ch] [ebp-110h]
  BYTE *v56; // [esp-8h] [ebp-10Ch]
  DWORD v57; // [esp-4h] [ebp-108h]
  char aes_key; // [esp+17h] [ebp-EDh]
  DWORD v59; // [esp+18h] [ebp-ECh]
  DWORD v60; // [esp+18h] [ebp-ECh]
  DWORD pdwDataLen[2]; // [esp+1Ch] [ebp-E8h] BYREF
  int v62; // [esp+24h] [ebp-E0h]
  Outpop::Utility::Lock *v63; // [esp+28h] [ebp-DCh]
  BYTE pbData[4]; // [esp+2Ch] [ebp-D8h] BYREF
  __int16 v65; // [esp+30h] [ebp-D4h]
  int v66; // [esp+32h] [ebp-D2h]
  int v67; // [esp+36h] [ebp-CEh]
  int v68; // [esp+3Ah] [ebp-CAh]
  int v69; // [esp+3Eh] [ebp-C6h]
  int v70; // [esp+100h] [ebp-4h]

  v70 = 1;
  v11 = time64(0);
  srand(v11);
  v12 = rand() % 32 + 1;
  this[5] = v12;
  *(_DWORD *)pbData = v12;
  v65 = *(_WORD *)(this[6] + 100);
  v13 = sub_1000D010();
  Outpop::IONetwork::Security::first_set_deskey(a3, (char *)v13, (char *)v13, 0x10u);
  v14 = this[6];
  v66 = *(_DWORD *)v13;
  v67 = *(_DWORD *)(v13 + 4);
  v68 = *(_DWORD *)(v13 + 8);
  v69 = *(_DWORD *)(v13 + 12);
  v15 = (unsigned int *)Outpop::IONetwork::CryptProv::instance();
  aes_key = Outpop::IONetwork::Crypto_Aes::create_aes_key(
              (Outpop::IONetwork::Crypto_Aes *)(this[4] + 32),
              *v15,
              (BYTE *)v13,
              0x10u,
              *(_DWORD *)(v14 + 100));
  operator delete[](v13);
  if ( !aes_key )
  {
    pdwDataLen[0] = GetLastError();
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
    {
      v16 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      Outpop::Utility::Lock::lock(v16);
      LOBYTE(v70) = 2;
      v17 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      log_buffer = Outpop::Utility::Logger::get_log_buffer(v17);
      v19 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_ERROR");
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
              dt,
              tm,
              CurrentProcessId,
              CurrentThreadId,
              LastError,
              L"D:\\R3\\OutpopGameProject\\IONetwork\\Bluider_Process.cpp",
              160);
      sub_10007400(
        0xFFFF - (v23 + v19),
        &log_buffer[v23 + v19],
        L"Accept_Bluider_Process::make_respond_packet  se_->get_win32_des_oldobj().create_aes_key falied,errcode is:%d",
        pdwDataLen[0]);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", log_buffer);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v24 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v24);
      }
      LOBYTE(v70) = 1;
      Outpop::Utility::Lock::unlock(v16);
    }
    LOBYTE(v70) = 0;
    if ( a2 )
      Outpop::Utility::Ref_Object::release(a2);
    v70 = -1;
LABEL_28:
    std::string::~string(&a4);
    return 0;
  }
  pdwDataLen[1] = (DWORD)&unk_1007DD8C;
  v25 = Outpop::Utility::Thread_Mutex::acquire((Outpop::Utility::Thread_Mutex *)&unk_1007DD8C);
  v62 = v25 - 1;
  LOBYTE(v70) = 3;
  if ( !v25 )
  {
LABEL_25:
    LOBYTE(v70) = 0;
    if ( a2 )
      Outpop::Utility::Ref_Object::release(a2);
    v70 = -1;
    goto LABEL_28;
  }
  v57 = *((_DWORD *)a3 + 6);
  v56 = (BYTE *)*((_DWORD *)a3 + 5);
  v26 = (HCRYPTPROV *)Outpop::IONetwork::CryptProv::instance();
  if ( !Outpop::IONetwork::CryptProv::UpdateKey(v26, v56, v57) )
  {
    v59 = GetLastError();
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
    {
      v27 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      v63 = v27;
      Outpop::Utility::Lock::lock(v27);
      LOBYTE(v70) = 4;
      v28 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v29 = Outpop::Utility::Logger::get_log_buffer(v28);
      v30 = sub_10007400(0xFFFFu, v29, L"\n%s", L"LOG_ERROR");
      v54 = GetLastError();
      v51 = GetCurrentThreadId();
      v48 = GetCurrentProcessId();
      v31 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v45 = Outpop::Utility::Logger::make_tm(v31);
      v32 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v33 = Outpop::Utility::Logger::make_dt(v32);
      v34 = sub_10007400(
              0xFFFF - v30,
              &v29[v30],
              L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
              v33,
              v45,
              v48,
              v51,
              v54,
              L"D:\\R3\\OutpopGameProject\\IONetwork\\Bluider_Process.cpp",
              171);
      sub_10007400(0xFFFF - (v34 + v30), &v29[v34 + v30], L"g_pRsan.UpdateKey failed  %d", v59);
LABEL_19:
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", v29);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v35 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v35);
      }
      LOBYTE(v70) = 3;
      Outpop::Utility::Lock::unlock(v27);
      goto LABEL_24;
    }
    goto LABEL_24;
  }
  pdwDataLen[0] = 22;
  v37 = Outpop::IONetwork::CryptProv::instance();
  if ( !CryptEncrypt(*((_DWORD *)v37 + 2), 0, 1, 0, pbData, pdwDataLen, 0xC8u) )
  {
    v60 = GetLastError();
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
    {
      v27 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      v63 = v27;
      Outpop::Utility::Lock::lock(v27);
      LOBYTE(v70) = 5;
      v38 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v29 = Outpop::Utility::Logger::get_log_buffer(v38);
      v39 = sub_10007400(0xFFFFu, v29, L"\n%s", L"LOG_ERROR");
      v55 = GetLastError();
      v52 = GetCurrentThreadId();
      v49 = GetCurrentProcessId();
      v40 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v46 = Outpop::Utility::Logger::make_tm(v40);
      v41 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v42 = Outpop::Utility::Logger::make_dt(v41);
      v43 = sub_10007400(
              0xFFFF - v39,
              &v29[v39],
              L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
              v42,
              v46,
              v49,
              v52,
              v55,
              L"D:\\R3\\OutpopGameProject\\IONetwork\\Bluider_Process.cpp",
              179);
      sub_10007400(0xFFFF - (v43 + v39), &v29[v43 + v39], L"g_pRsan.EnCryptEncrypt2  %d", v60);
      goto LABEL_19;
    }
LABEL_24:
    LOBYTE(v70) = 1;
    v62 = -1;
    Outpop::Utility::Thread_Mutex::release((Outpop::Utility::Thread_Mutex *)&unk_1007DD8C);
    goto LABEL_25;
  }
  Outpop::Utility::Stream_Base::write(a2, (const char *)pbData);
  LOBYTE(v70) = 1;
  v62 = -1;
  Outpop::Utility::Thread_Mutex::release((Outpop::Utility::Thread_Mutex *)&unk_1007DD8C);
  LOBYTE(v70) = 0;
  if ( a2 )
    Outpop::Utility::Ref_Object::release(a2);
  v70 = -1;
  std::string::~string(&a4);
  return 1;
}
