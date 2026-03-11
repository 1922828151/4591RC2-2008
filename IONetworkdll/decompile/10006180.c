/*
 * func-name: ?create_test_key@Crypto_Aes@IONetwork@Outpop@@QAE_NKPADHH@Z
 * func-address: 0x10006180
 * callers: none
 * callees: 0x10007400
 */

char __thiscall Outpop::IONetwork::Crypto_Aes::create_test_key(
        Outpop::IONetwork::Crypto_Aes *this,
        unsigned int a2,
        BYTE *pbData,
        DWORD dwDataLen,
        ALG_ID Algid)
{
  HCRYPTKEY *v6; // edi
  Outpop::Utility::Lock *v7; // ebx
  Outpop::Utility::Logger *v8; // eax
  wchar_t *log_buffer; // edi
  int v10; // esi
  Outpop::Utility::Logger *v11; // eax
  Outpop::Utility::Logger *v12; // eax
  wchar_t *dt; // eax
  int v14; // eax
  Outpop::Utility::Logger *v15; // eax
  Outpop::Utility::Logger *v17; // eax
  int v18; // esi
  Outpop::Utility::Logger *v19; // eax
  Outpop::Utility::Logger *v20; // eax
  wchar_t *v21; // eax
  int v22; // eax
  Outpop::Utility::Logger *v23; // eax
  int v24; // esi
  Outpop::Utility::Logger *v25; // eax
  Outpop::Utility::Logger *v26; // eax
  wchar_t *v27; // eax
  int v28; // eax
  Outpop::Utility::Lock *v29; // ebx
  Outpop::Utility::Logger *v30; // eax
  wchar_t *v31; // edi
  int v32; // esi
  Outpop::Utility::Logger *v33; // eax
  Outpop::Utility::Logger *v34; // eax
  wchar_t *v35; // eax
  int v36; // eax
  Outpop::Utility::Logger *v37; // eax
  Outpop::Utility::Logger *v38; // eax
  int v39; // esi
  Outpop::Utility::Logger *v40; // eax
  Outpop::Utility::Logger *v41; // eax
  wchar_t *v42; // eax
  int v43; // eax
  Outpop::Utility::Lock *v44; // ebx
  Outpop::Utility::Logger *v45; // eax
  wchar_t *v46; // edi
  int v47; // esi
  Outpop::Utility::Logger *v48; // eax
  Outpop::Utility::Logger *v49; // eax
  wchar_t *v50; // eax
  int v51; // eax
  Outpop::Utility::Logger *v52; // eax
  wchar_t *tm; // [esp-18h] [ebp-3Ch]
  wchar_t *v54; // [esp-18h] [ebp-3Ch]
  wchar_t *v55; // [esp-18h] [ebp-3Ch]
  wchar_t *v56; // [esp-18h] [ebp-3Ch]
  wchar_t *v57; // [esp-18h] [ebp-3Ch]
  wchar_t *v58; // [esp-18h] [ebp-3Ch]
  DWORD CurrentProcessId; // [esp-14h] [ebp-38h]
  DWORD v60; // [esp-14h] [ebp-38h]
  DWORD v61; // [esp-14h] [ebp-38h]
  DWORD v62; // [esp-14h] [ebp-38h]
  DWORD v63; // [esp-14h] [ebp-38h]
  DWORD v64; // [esp-14h] [ebp-38h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-34h]
  DWORD v66; // [esp-10h] [ebp-34h]
  DWORD v67; // [esp-10h] [ebp-34h]
  DWORD v68; // [esp-10h] [ebp-34h]
  DWORD v69; // [esp-10h] [ebp-34h]
  DWORD v70; // [esp-10h] [ebp-34h]
  DWORD LastError; // [esp-Ch] [ebp-30h]
  DWORD v72; // [esp-Ch] [ebp-30h]
  DWORD v73; // [esp-Ch] [ebp-30h]
  DWORD v74; // [esp-Ch] [ebp-30h]
  DWORD v75; // [esp-Ch] [ebp-30h]
  DWORD v76; // [esp-Ch] [ebp-30h]
  HCRYPTHASH phHash; // [esp+14h] [ebp-10h] BYREF
  int v78; // [esp+20h] [ebp-4h]
  DWORD dwDataLena; // [esp+30h] [ebp+Ch]
  DWORD dwDataLenb; // [esp+30h] [ebp+Ch]
  DWORD dwDataLenc; // [esp+30h] [ebp+Ch]
  DWORD dwDataLend; // [esp+30h] [ebp+Ch]
  DWORD dwDataLene; // [esp+30h] [ebp+Ch]
  DWORD dwDataLenf; // [esp+30h] [ebp+Ch]

  v6 = (HCRYPTKEY *)((char *)this + 4);
  if ( *((_DWORD *)this + 1) )
  {
    if ( !CryptDestroyKey(*((_DWORD *)this + 1)) )
    {
      dwDataLena = GetLastError();
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
      {
        v7 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        Outpop::Utility::Lock::lock(v7);
        v78 = 0;
        v8 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        log_buffer = Outpop::Utility::Logger::get_log_buffer(v8);
        v10 = sub_10007400(log_buffer, L"\n%s", L"LOG_ERROR");
        LastError = GetLastError();
        CurrentThreadId = GetCurrentThreadId();
        CurrentProcessId = GetCurrentProcessId();
        v11 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        tm = Outpop::Utility::Logger::make_tm(v11);
        v12 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        dt = Outpop::Utility::Logger::make_dt(v12);
        v14 = sub_10007400(
                &log_buffer[v10],
                L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                dt,
                tm,
                CurrentProcessId,
                CurrentThreadId,
                LastError,
                L"D:\\R3\\OutpopGameProject\\IONetwork\\Crypto_Aes.cpp",
                64);
        sub_10007400(&log_buffer[v14 + v10], L"Crypto_Aes::create_aes_key  CryptDestroyKey Error is %d", dwDataLena);
LABEL_7:
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", log_buffer);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          v15 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v15);
        }
        v78 = -1;
        Outpop::Utility::Lock::unlock(v7);
        return 0;
      }
      return 0;
    }
    *v6 = 0;
  }
  if ( !CryptCreateHash(*(_DWORD *)this, 0x8003u, 0, 0, &phHash) )
  {
    dwDataLenb = GetLastError();
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
    {
      v7 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      Outpop::Utility::Lock::lock(v7);
      v78 = 1;
      v17 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      log_buffer = Outpop::Utility::Logger::get_log_buffer(v17);
      v18 = sub_10007400(log_buffer, L"\n%s", L"LOG_ERROR");
      v72 = GetLastError();
      v66 = GetCurrentThreadId();
      v60 = GetCurrentProcessId();
      v19 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v54 = Outpop::Utility::Logger::make_tm(v19);
      v20 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v21 = Outpop::Utility::Logger::make_dt(v20);
      v22 = sub_10007400(
              &log_buffer[v18],
              L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
              v21,
              v54,
              v60,
              v66,
              v72,
              L"D:\\R3\\OutpopGameProject\\IONetwork\\Crypto_Aes.cpp",
              74);
      sub_10007400(
        &log_buffer[v22 + v18],
        L"Crypto_Aes::create_aes_key  CryptCreateHash(hCryptProv, CALG_MD5, 0, 0,&hHash) Error is %d",
        dwDataLenb);
      goto LABEL_7;
    }
    return 0;
  }
  if ( !CryptHashData(phHash, pbData, dwDataLen, 0) )
  {
    dwDataLenc = GetLastError();
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
    {
      v7 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      Outpop::Utility::Lock::lock(v7);
      v78 = 2;
      v23 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      log_buffer = Outpop::Utility::Logger::get_log_buffer(v23);
      v24 = sub_10007400(log_buffer, L"\n%s", L"LOG_ERROR");
      v73 = GetLastError();
      v67 = GetCurrentThreadId();
      v61 = GetCurrentProcessId();
      v25 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v55 = Outpop::Utility::Logger::make_tm(v25);
      v26 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v27 = Outpop::Utility::Logger::make_dt(v26);
      v28 = sub_10007400(
              &log_buffer[v24],
              L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
              v27,
              v55,
              v61,
              v67,
              v73,
              L"D:\\R3\\OutpopGameProject\\IONetwork\\Crypto_Aes.cpp",
              81);
      sub_10007400(
        &log_buffer[v28 + v24],
        L"Crypto_Aes::create_aes_key  CryptHashData(hHash,(BYTE *),len,0) Error is %d",
        dwDataLenc);
      goto LABEL_7;
    }
    return 0;
  }
  if ( !CryptDeriveKey(*(_DWORD *)this, Algid, phHash, 0, v6) )
  {
    dwDataLend = GetLastError();
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
    {
      v29 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      Outpop::Utility::Lock::lock(v29);
      v78 = 3;
      v30 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v31 = Outpop::Utility::Logger::get_log_buffer(v30);
      v32 = sub_10007400(v31, L"\n%s", L"LOG_ERROR");
      v74 = GetLastError();
      v68 = GetCurrentThreadId();
      v62 = GetCurrentProcessId();
      v33 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v56 = Outpop::Utility::Logger::make_tm(v33);
      v34 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v35 = Outpop::Utility::Logger::make_dt(v34);
      v36 = sub_10007400(
              &v31[v32],
              L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
              v35,
              v56,
              v62,
              v68,
              v74,
              L"D:\\R3\\OutpopGameProject\\IONetwork\\Crypto_Aes.cpp",
              89);
      sub_10007400(&v31[v36 + v32], L"Crypto_Aes::create_aes_key  CryptDeriveKey  Error is %d", dwDataLend);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", v31);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v37 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v37);
      }
      v78 = -1;
      Outpop::Utility::Lock::unlock(v29);
    }
    if ( !phHash )
      return 0;
    if ( CryptDestroyHash(phHash) )
      return 0;
    dwDataLene = GetLastError();
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) != 1
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) != 1 )
    {
      return 0;
    }
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) != 1 )
      return 0;
    v7 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v7);
    v78 = 4;
    v38 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    log_buffer = Outpop::Utility::Logger::get_log_buffer(v38);
    v39 = sub_10007400(log_buffer, L"\n%s", L"LOG_ERROR");
    v75 = GetLastError();
    v69 = GetCurrentThreadId();
    v63 = GetCurrentProcessId();
    v40 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v57 = Outpop::Utility::Logger::make_tm(v40);
    v41 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v42 = Outpop::Utility::Logger::make_dt(v41);
    v43 = sub_10007400(
            &log_buffer[v39],
            L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
            v42,
            v57,
            v63,
            v69,
            v75,
            L"D:\\R3\\OutpopGameProject\\IONetwork\\Crypto_Aes.cpp",
            95);
    sub_10007400(&log_buffer[v43 + v39], L"Crypto_Aes::create_aes_key  CryptDestroyHash first  Error is %d", dwDataLene);
    goto LABEL_7;
  }
  if ( phHash )
  {
    if ( !CryptDestroyHash(phHash) )
    {
      dwDataLenf = GetLastError();
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
      {
        v44 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        Outpop::Utility::Lock::lock(v44);
        v78 = 5;
        v45 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v46 = Outpop::Utility::Logger::get_log_buffer(v45);
        v47 = sub_10007400(v46, L"\n%s", L"LOG_ERROR");
        v76 = GetLastError();
        v70 = GetCurrentThreadId();
        v64 = GetCurrentProcessId();
        v48 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v58 = Outpop::Utility::Logger::make_tm(v48);
        v49 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v50 = Outpop::Utility::Logger::make_dt(v49);
        v51 = sub_10007400(
                &v46[v47],
                L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                v50,
                v58,
                v64,
                v70,
                v76,
                L"D:\\R3\\OutpopGameProject\\IONetwork\\Crypto_Aes.cpp",
                107);
        sub_10007400(&v46[v51 + v47], L"Crypto_Aes::create_aes_key  CryptDestroyHash seconed  Error is %d", dwDataLenf);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", v46);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          v52 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v52);
        }
        v78 = -1;
        Outpop::Utility::Lock::unlock(v44);
      }
    }
  }
  return 1;
}
