/*
 * func-name: ?create_aes_key@Crypto_Aes@IONetwork@Outpop@@QAE_NKPADHH@Z
 * func-address: 0x100068e0
 * callers: 0x1003e800, 0x1003eff0, 0x100407c0, 0x10040f80
 * callees: 0x10007400
 */

char __thiscall Outpop::IONetwork::Crypto_Aes::create_aes_key(
        Outpop::IONetwork::Crypto_Aes *this,
        unsigned int a2,
        BYTE *pbData,
        DWORD dwDataLen,
        int a5)
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
  ALG_ID v29; // eax
  Outpop::Utility::Lock *v30; // ebx
  Outpop::Utility::Logger *v31; // eax
  wchar_t *v32; // edi
  int v33; // esi
  Outpop::Utility::Logger *v34; // eax
  Outpop::Utility::Logger *v35; // eax
  wchar_t *v36; // eax
  int v37; // eax
  Outpop::Utility::Logger *v38; // eax
  Outpop::Utility::Logger *v39; // eax
  int v40; // esi
  Outpop::Utility::Logger *v41; // eax
  Outpop::Utility::Logger *v42; // eax
  wchar_t *v43; // eax
  int v44; // eax
  Outpop::Utility::Lock *v45; // ebx
  Outpop::Utility::Logger *v46; // eax
  wchar_t *v47; // edi
  int v48; // esi
  Outpop::Utility::Logger *v49; // eax
  Outpop::Utility::Logger *v50; // eax
  wchar_t *v51; // eax
  int v52; // eax
  Outpop::Utility::Logger *v53; // eax
  wchar_t *tm; // [esp-18h] [ebp-3Ch]
  wchar_t *v55; // [esp-18h] [ebp-3Ch]
  wchar_t *v56; // [esp-18h] [ebp-3Ch]
  wchar_t *v57; // [esp-18h] [ebp-3Ch]
  wchar_t *v58; // [esp-18h] [ebp-3Ch]
  wchar_t *v59; // [esp-18h] [ebp-3Ch]
  DWORD CurrentProcessId; // [esp-14h] [ebp-38h]
  DWORD v61; // [esp-14h] [ebp-38h]
  DWORD v62; // [esp-14h] [ebp-38h]
  DWORD v63; // [esp-14h] [ebp-38h]
  DWORD v64; // [esp-14h] [ebp-38h]
  DWORD v65; // [esp-14h] [ebp-38h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-34h]
  DWORD v67; // [esp-10h] [ebp-34h]
  DWORD v68; // [esp-10h] [ebp-34h]
  DWORD v69; // [esp-10h] [ebp-34h]
  DWORD v70; // [esp-10h] [ebp-34h]
  DWORD v71; // [esp-10h] [ebp-34h]
  DWORD LastError; // [esp-Ch] [ebp-30h]
  DWORD v73; // [esp-Ch] [ebp-30h]
  DWORD v74; // [esp-Ch] [ebp-30h]
  DWORD v75; // [esp-Ch] [ebp-30h]
  DWORD v76; // [esp-Ch] [ebp-30h]
  DWORD v77; // [esp-Ch] [ebp-30h]
  HCRYPTHASH phHash; // [esp+14h] [ebp-10h] BYREF
  int v79; // [esp+20h] [ebp-4h]
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
        v79 = 0;
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
                123);
        sub_10007400(&log_buffer[v14 + v10], L"Crypto_Aes::create_aes_key  CryptDestroyKey Error is %d", dwDataLena);
LABEL_7:
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", log_buffer);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          v15 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v15);
        }
        v79 = -1;
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
      v79 = 1;
      v17 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      log_buffer = Outpop::Utility::Logger::get_log_buffer(v17);
      v18 = sub_10007400(log_buffer, L"\n%s", L"LOG_ERROR");
      v73 = GetLastError();
      v67 = GetCurrentThreadId();
      v61 = GetCurrentProcessId();
      v19 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v55 = Outpop::Utility::Logger::make_tm(v19);
      v20 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v21 = Outpop::Utility::Logger::make_dt(v20);
      v22 = sub_10007400(
              &log_buffer[v18],
              L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
              v21,
              v55,
              v61,
              v67,
              v73,
              L"D:\\R3\\OutpopGameProject\\IONetwork\\Crypto_Aes.cpp",
              133);
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
      v79 = 2;
      v23 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      log_buffer = Outpop::Utility::Logger::get_log_buffer(v23);
      v24 = sub_10007400(log_buffer, L"\n%s", L"LOG_ERROR");
      v74 = GetLastError();
      v68 = GetCurrentThreadId();
      v62 = GetCurrentProcessId();
      v25 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v56 = Outpop::Utility::Logger::make_tm(v25);
      v26 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v27 = Outpop::Utility::Logger::make_dt(v26);
      v28 = sub_10007400(
              &log_buffer[v24],
              L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
              v27,
              v56,
              v62,
              v68,
              v74,
              L"D:\\R3\\OutpopGameProject\\IONetwork\\Crypto_Aes.cpp",
              140);
      sub_10007400(
        &log_buffer[v28 + v24],
        L"Crypto_Aes::create_aes_key  CryptHashData(hHash,(BYTE *),len,0) Error is %d",
        dwDataLenc);
      goto LABEL_7;
    }
    return 0;
  }
  v29 = 26113;
  switch ( a5 )
  {
    case 24:
      v29 = 26115;
      break;
    case 16:
      v29 = 26121;
      break;
    case 128:
      v29 = 26126;
      break;
    case 192:
      v29 = 26127;
      break;
    case 256:
      v29 = 26128;
      break;
  }
  if ( !CryptDeriveKey(*(_DWORD *)this, v29, phHash, 0, v6) )
  {
    dwDataLend = GetLastError();
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
    {
      v30 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      Outpop::Utility::Lock::lock(v30);
      v79 = 3;
      v31 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v32 = Outpop::Utility::Logger::get_log_buffer(v31);
      v33 = sub_10007400(v32, L"\n%s", L"LOG_ERROR");
      v75 = GetLastError();
      v69 = GetCurrentThreadId();
      v63 = GetCurrentProcessId();
      v34 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v57 = Outpop::Utility::Logger::make_tm(v34);
      v35 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v36 = Outpop::Utility::Logger::make_dt(v35);
      v37 = sub_10007400(
              &v32[v33],
              L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
              v36,
              v57,
              v63,
              v69,
              v75,
              L"D:\\R3\\OutpopGameProject\\IONetwork\\Crypto_Aes.cpp",
              168);
      sub_10007400(&v32[v37 + v33], L"Crypto_Aes::create_aes_key  CryptDeriveKey  Error is %d", dwDataLend);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", v32);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v38 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v38);
      }
      v79 = -1;
      Outpop::Utility::Lock::unlock(v30);
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
    v79 = 4;
    v39 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    log_buffer = Outpop::Utility::Logger::get_log_buffer(v39);
    v40 = sub_10007400(log_buffer, L"\n%s", L"LOG_ERROR");
    v76 = GetLastError();
    v70 = GetCurrentThreadId();
    v64 = GetCurrentProcessId();
    v41 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v58 = Outpop::Utility::Logger::make_tm(v41);
    v42 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v43 = Outpop::Utility::Logger::make_dt(v42);
    v44 = sub_10007400(
            &log_buffer[v40],
            L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
            v43,
            v58,
            v64,
            v70,
            v76,
            L"D:\\R3\\OutpopGameProject\\IONetwork\\Crypto_Aes.cpp",
            174);
    sub_10007400(&log_buffer[v44 + v40], L"Crypto_Aes::create_aes_key  CryptDestroyHash first  Error is %d", dwDataLene);
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
        v45 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        Outpop::Utility::Lock::lock(v45);
        v79 = 5;
        v46 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v47 = Outpop::Utility::Logger::get_log_buffer(v46);
        v48 = sub_10007400(v47, L"\n%s", L"LOG_ERROR");
        v77 = GetLastError();
        v71 = GetCurrentThreadId();
        v65 = GetCurrentProcessId();
        v49 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v59 = Outpop::Utility::Logger::make_tm(v49);
        v50 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v51 = Outpop::Utility::Logger::make_dt(v50);
        v52 = sub_10007400(
                &v47[v48],
                L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                v51,
                v59,
                v65,
                v71,
                v77,
                L"D:\\R3\\OutpopGameProject\\IONetwork\\Crypto_Aes.cpp",
                186);
        sub_10007400(&v47[v52 + v48], L"Crypto_Aes::create_aes_key  CryptDestroyHash seconed  Error is %d", dwDataLenf);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", v47);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          v53 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v53);
        }
        v79 = -1;
        Outpop::Utility::Lock::unlock(v45);
      }
    }
  }
  return 1;
}
