/*
 * func-name: ??0CryptProv@IONetwork@Outpop@@QAE@PBD@Z
 * func-address: 0x10007420
 * callers: 0x10008920, 0x1003fba0, 0x10041b20
 * callees: 0x10001d10, 0x10002050, 0x10007400, 0x1000d010, 0x1004e938
 */

HCRYPTPROV *__thiscall Outpop::IONetwork::CryptProv::CryptProv(HCRYPTPROV *phProv, LPCSTR szContainer)
{
  HCRYPTPROV *v2; // ebx
  BOOL (__stdcall *v3)(HCRYPTPROV *, LPCSTR, LPCSTR, DWORD, DWORD); // esi
  DWORD LastError; // eax
  Outpop::Utility::Logger *v5; // eax
  wchar_t *log_buffer; // edi
  int v7; // esi
  Outpop::Utility::Logger *v8; // eax
  Outpop::Utility::Logger *v9; // eax
  wchar_t *dt; // eax
  int v11; // eax
  Outpop::Utility::Logger *v12; // eax
  Outpop::Utility::Logger *v13; // eax
  wchar_t *v14; // edi
  int v15; // esi
  Outpop::Utility::Logger *v16; // eax
  Outpop::Utility::Logger *v17; // eax
  wchar_t *v18; // eax
  int v19; // eax
  Outpop::Utility::Logger *v20; // eax
  Outpop::Utility::Lock *v21; // edi
  Outpop::Utility::Lock *v22; // ebx
  Outpop::Utility::Logger *v23; // eax
  wchar_t *v24; // edi
  int v25; // esi
  Outpop::Utility::Logger *v26; // eax
  Outpop::Utility::Logger *v27; // eax
  wchar_t *v28; // eax
  int v29; // eax
  Outpop::Utility::Logger *v30; // eax
  DWORD v31; // eax
  Outpop::Utility::Logger *v32; // eax
  wchar_t *v33; // edi
  int v34; // esi
  Outpop::Utility::Logger *v35; // eax
  Outpop::Utility::Logger *v36; // eax
  wchar_t *v37; // eax
  int v38; // eax
  Outpop::Utility::Logger *v39; // eax
  Outpop::Utility::Logger *v40; // eax
  wchar_t *v41; // edi
  int v42; // esi
  Outpop::Utility::Logger *v43; // eax
  Outpop::Utility::Logger *v44; // eax
  wchar_t *v45; // eax
  int v46; // eax
  Outpop::Utility::Logger *v47; // eax
  Outpop::Utility::Lock *v48; // ebx
  Outpop::Utility::Logger *v49; // eax
  wchar_t *v50; // edi
  int v51; // esi
  Outpop::Utility::Logger *v52; // eax
  Outpop::Utility::Logger *v53; // eax
  wchar_t *v54; // eax
  int v55; // eax
  Outpop::Utility::Logger *v56; // eax
  char v58; // [esp-1Ch] [ebp-48h] BYREF
  LPCSTR tm; // [esp-18h] [ebp-44h]
  HCRYPTPROV *CurrentProcessId; // [esp-14h] [ebp-40h]
  LPCSTR CurrentThreadId; // [esp-10h] [ebp-3Ch]
  LPCSTR v62; // [esp-Ch] [ebp-38h]
  DWORD v63; // [esp-8h] [ebp-34h]
  DWORD v64; // [esp-4h] [ebp-30h]
  Outpop::Utility::Lock *v65; // [esp+14h] [ebp-18h]
  Outpop::Utility::Lock *v66; // [esp+18h] [ebp-14h]
  Outpop::Utility::Lock *v67; // [esp+1Ch] [ebp-10h]
  int v68; // [esp+28h] [ebp-4h]
  LPCSTR szContainera; // [esp+30h] [ebp+4h]
  LPCSTR szContainerb; // [esp+30h] [ebp+4h]
  LPCSTR szContainerc; // [esp+30h] [ebp+4h]
  LPCSTR szContainerd; // [esp+30h] [ebp+4h]

  v2 = phProv;
  v65 = (Outpop::Utility::Lock *)phProv;
  v3 = CryptAcquireContextA;
  v64 = 0;
  v63 = 1;
  v62 = "Microsoft Enhanced Cryptographic Provider v1.0";
  CurrentThreadId = szContainer;
  CurrentProcessId = phProv;
  phProv[1] = (HCRYPTPROV)szContainer;
  phProv[2] = 0;
  if ( CryptAcquireContextA(CurrentProcessId, CurrentThreadId, v62, v63, v64) )
    return v2;
  if ( GetLastError() == -2146893802 )
  {
    if ( CryptAcquireContextA(v2, szContainer, 0, 1u, 8u) )
      return v2;
    LastError = GetLastError();
    szContainera = (LPCSTR)LastError;
    if ( LastError != -2146893809 && LastError != -2146893813 )
    {
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
      {
        v65 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        Outpop::Utility::Lock::lock(v65);
        v68 = 3;
        v5 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        log_buffer = Outpop::Utility::Logger::get_log_buffer(v5);
        v7 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_ERROR");
        v62 = (LPCSTR)GetLastError();
        CurrentThreadId = (LPCSTR)GetCurrentThreadId();
        CurrentProcessId = (HCRYPTPROV *)GetCurrentProcessId();
        v8 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        tm = (LPCSTR)Outpop::Utility::Logger::make_tm(v8);
        v9 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        dt = Outpop::Utility::Logger::make_dt(v9);
        v11 = sub_10007400(
                0xFFFF - v7,
                &log_buffer[v7],
                L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                dt,
                tm,
                CurrentProcessId,
                CurrentThreadId,
                v62,
                L"D:\\R3\\OutpopGameProject\\IONetwork\\CryptProv.cpp",
                43);
        sub_10007400(
          0xFFFF - (v11 + v7),
          &log_buffer[v11 + v7],
          L"Error  CryptProv::CryptProv  CryptAcquireContext falsed3  error is %d",
          szContainera);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", log_buffer);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          v64 = (DWORD)log_buffer;
          v12 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v12);
        }
        v68 = -1;
        Outpop::Utility::Lock::unlock(v65);
      }
      *v2 = 0;
      return v2;
    }
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
    {
      v66 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      Outpop::Utility::Lock::lock(v66);
      v68 = 0;
      v13 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v14 = Outpop::Utility::Logger::get_log_buffer(v13);
      v15 = sub_10007400(0xFFFFu, v14, L"\n%s", L"LOG_DEBUG");
      v62 = (LPCSTR)GetLastError();
      CurrentThreadId = (LPCSTR)GetCurrentThreadId();
      CurrentProcessId = (HCRYPTPROV *)GetCurrentProcessId();
      v16 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      tm = (LPCSTR)Outpop::Utility::Logger::make_tm(v16);
      v17 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v18 = Outpop::Utility::Logger::make_dt(v17);
      v19 = sub_10007400(
              0xFFFF - v15,
              &v14[v15],
              L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
              v18,
              tm,
              CurrentProcessId,
              CurrentThreadId,
              v62,
              L"D:\\R3\\OutpopGameProject\\IONetwork\\CryptProv.cpp",
              25);
      sub_10007400(0xFFFF - (v19 + v15), &v14[v19 + v15], L"CryptAcquireContextA1   errora  is  %d ", szContainera);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", v14);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v64 = (DWORD)v14;
        v20 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v20);
      }
      v68 = -1;
      Outpop::Utility::Lock::unlock(v66);
      v3 = CryptAcquireContextA;
    }
    v21 = (Outpop::Utility::Lock *)sub_1000D010();
    v66 = v21;
    if ( !v3(v2, (LPCSTR)v21, 0, 1u, 8u) )
    {
      szContainerb = (LPCSTR)GetLastError();
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
      {
        v22 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        v67 = v22;
        Outpop::Utility::Lock::lock(v22);
        v68 = 1;
        v23 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v24 = Outpop::Utility::Logger::get_log_buffer(v23);
        v25 = sub_10007400(0xFFFFu, v24, L"\n%s", L"LOG_ERROR");
        v62 = (LPCSTR)GetLastError();
        CurrentThreadId = (LPCSTR)GetCurrentThreadId();
        CurrentProcessId = (HCRYPTPROV *)GetCurrentProcessId();
        v26 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        tm = (LPCSTR)Outpop::Utility::Logger::make_tm(v26);
        v27 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v28 = Outpop::Utility::Logger::make_dt(v27);
        v29 = sub_10007400(
                0xFFFF - v25,
                &v24[v25],
                L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                v28,
                tm,
                CurrentProcessId,
                CurrentThreadId,
                v62,
                L"D:\\R3\\OutpopGameProject\\IONetwork\\CryptProv.cpp",
                34);
        sub_10007400(
          0xFFFF - (v29 + v25),
          &v24[v29 + v25],
          L"Error  CryptProv::CryptProv  CryptAcquireContext falsed2  error is %d",
          szContainerb);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", v24);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          v64 = (DWORD)v24;
          v30 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v30);
        }
        v68 = -1;
        Outpop::Utility::Lock::unlock(v22);
        v21 = v66;
        v2 = (HCRYPTPROV *)v65;
      }
      *v2 = 0;
    }
    std::string::string(&v58, v21);
    v68 = 2;
LABEL_64:
    Outpop::IONetwork::Network_Init::instance();
    v68 = -1;
    Outpop::IONetwork::Network_Init::write_to_ini_file(
      v58,
      tm,
      (int)CurrentProcessId,
      (int)CurrentThreadId,
      (int)v62,
      v63,
      v64);
    operator delete[](v21);
    return v2;
  }
  v31 = GetLastError();
  szContainerc = (LPCSTR)v31;
  if ( v31 == -2146893809 || v31 == -2146893813 )
  {
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
    {
      v66 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      Outpop::Utility::Lock::lock(v66);
      v68 = 4;
      v40 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v41 = Outpop::Utility::Logger::get_log_buffer(v40);
      v42 = sub_10007400(0xFFFFu, v41, L"\n%s", L"LOG_DEBUG");
      v62 = (LPCSTR)GetLastError();
      CurrentThreadId = (LPCSTR)GetCurrentThreadId();
      CurrentProcessId = (HCRYPTPROV *)GetCurrentProcessId();
      v43 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      tm = (LPCSTR)Outpop::Utility::Logger::make_tm(v43);
      v44 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v45 = Outpop::Utility::Logger::make_dt(v44);
      v46 = sub_10007400(
              0xFFFF - v42,
              &v41[v42],
              L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
              v45,
              tm,
              CurrentProcessId,
              CurrentThreadId,
              v62,
              L"D:\\R3\\OutpopGameProject\\IONetwork\\CryptProv.cpp",
              53);
      sub_10007400(0xFFFF - (v46 + v42), &v41[v46 + v42], L"CryptAcquireContextA2   errora  is  %d ", szContainerc);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", v41);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v64 = (DWORD)v41;
        v47 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v47);
      }
      v68 = -1;
      Outpop::Utility::Lock::unlock(v66);
      v3 = CryptAcquireContextA;
    }
    v21 = (Outpop::Utility::Lock *)sub_1000D010();
    v66 = v21;
    if ( !v3(v2, (LPCSTR)v21, 0, 1u, 8u) )
    {
      szContainerd = (LPCSTR)GetLastError();
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
      {
        v48 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        v67 = v48;
        Outpop::Utility::Lock::lock(v48);
        v68 = 5;
        v49 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v50 = Outpop::Utility::Logger::get_log_buffer(v49);
        v51 = sub_10007400(0xFFFFu, v50, L"\n%s", L"LOG_ERROR");
        v62 = (LPCSTR)GetLastError();
        CurrentThreadId = (LPCSTR)GetCurrentThreadId();
        CurrentProcessId = (HCRYPTPROV *)GetCurrentProcessId();
        v52 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        tm = (LPCSTR)Outpop::Utility::Logger::make_tm(v52);
        v53 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v54 = Outpop::Utility::Logger::make_dt(v53);
        v55 = sub_10007400(
                0xFFFF - v51,
                &v50[v51],
                L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                v54,
                tm,
                CurrentProcessId,
                CurrentThreadId,
                v62,
                L"D:\\R3\\OutpopGameProject\\IONetwork\\CryptProv.cpp",
                62);
        sub_10007400(
          0xFFFF - (v55 + v51),
          &v50[v55 + v51],
          L"Error  CryptProv::CryptProv  CryptAcquireContext falsed4  error is %d",
          szContainerd);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", v50);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          v64 = (DWORD)v50;
          v56 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v56);
        }
        v68 = -1;
        Outpop::Utility::Lock::unlock(v48);
        v2 = (HCRYPTPROV *)v65;
        v21 = v66;
      }
      *v2 = 0;
    }
    std::string::string(&v58, v21);
    v68 = 6;
    goto LABEL_64;
  }
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
  {
    v66 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v66);
    v68 = 7;
    v32 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v33 = Outpop::Utility::Logger::get_log_buffer(v32);
    v34 = sub_10007400(0xFFFFu, v33, L"\n%s", L"LOG_ERROR");
    v62 = (LPCSTR)GetLastError();
    CurrentThreadId = (LPCSTR)GetCurrentThreadId();
    CurrentProcessId = (HCRYPTPROV *)GetCurrentProcessId();
    v35 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    tm = (LPCSTR)Outpop::Utility::Logger::make_tm(v35);
    v36 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v37 = Outpop::Utility::Logger::make_dt(v36);
    v38 = sub_10007400(
            0xFFFF - v34,
            &v33[v34],
            L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
            v37,
            tm,
            CurrentProcessId,
            CurrentThreadId,
            v62,
            L"D:\\R3\\OutpopGameProject\\IONetwork\\CryptProv.cpp",
            71);
    sub_10007400(
      0xFFFF - (v38 + v34),
      &v33[v38 + v34],
      L"Error  CryptProv::CryptProv  CryptAcquireContext falsed5  error is %d",
      szContainerc);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", v33);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v64 = (DWORD)v33;
      v39 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v39);
    }
    v68 = -1;
    Outpop::Utility::Lock::unlock(v66);
  }
  *v2 = 0;
  return v2;
}
