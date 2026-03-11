/*
 * func-name: sub_1000F1F0
 * func-address: 0x1000f1f0
 * callers: none
 * callees: 0x1000a570, 0x1000ecb0, 0x1000ede0, 0x10012870, 0x100132c0, 0x100134b0, 0x10013690, 0x100232f7, 0x100234ce
 */

int __thiscall sub_1000F1F0(__int16 *this)
{
  int v1; // ebx
  Outpop::Utility::Lock *v2; // edi
  Outpop::Utility::Logger *v3; // eax
  wchar_t *log_buffer; // esi
  Outpop::Utility::Logger *v5; // eax
  Outpop::Utility::Logger *v6; // eax
  wchar_t *dt; // eax
  int v8; // eax
  Outpop::Utility::Logger *v9; // eax
  _DWORD *v10; // esi
  struct Outpop::IONetwork::Asynch_Result *v11; // esi
  Outpop::Utility::Lock *v12; // ebx
  Outpop::Utility::Logger *v13; // eax
  wchar_t *v14; // edi
  int v15; // eax
  int v16; // esi
  Outpop::Utility::Logger *v17; // eax
  Outpop::Utility::Logger *v18; // eax
  wchar_t *v19; // eax
  int v20; // esi
  Outpop::Utility::Logger *v21; // eax
  Outpop::Utility::Logger *v23; // eax
  int v24; // eax
  int v25; // esi
  Outpop::Utility::Logger *v26; // eax
  Outpop::Utility::Logger *v27; // eax
  wchar_t *v28; // eax
  int v29; // esi
  int v30; // ebx
  char *host_addr; // eax
  int v32; // ebp
  _DWORD *v33; // esi
  struct Outpop::IONetwork::Asynch_Result *v34; // esi
  Outpop::Utility::Logger *v35; // eax
  Outpop::Utility::Logger *v36; // eax
  Outpop::Utility::Lock *v37; // edi
  Outpop::Utility::Logger *v38; // eax
  wchar_t *v39; // esi
  Outpop::Utility::Logger *v40; // eax
  Outpop::Utility::Logger *v41; // eax
  wchar_t *v42; // eax
  int v43; // eax
  Outpop::Utility::Logger *v44; // eax
  Outpop::Utility::Lock *v45; // edi
  Outpop::Utility::Logger *v46; // eax
  wchar_t *v47; // esi
  Outpop::Utility::Logger *v48; // eax
  Outpop::Utility::Logger *v49; // eax
  wchar_t *v50; // eax
  int v51; // eax
  Outpop::Utility::Logger *v52; // eax
  Outpop::Utility::Lock *v53; // edi
  Outpop::Utility::Logger *v54; // eax
  wchar_t *v55; // esi
  Outpop::Utility::Logger *v56; // eax
  Outpop::Utility::Logger *v57; // eax
  wchar_t *v58; // eax
  int v59; // eax
  Outpop::Utility::Logger *v60; // eax
  __int16 *v61; // ebp
  Outpop::Utility::Lock *v62; // edi
  Outpop::Utility::Logger *v63; // eax
  wchar_t *v64; // esi
  Outpop::Utility::Logger *v65; // eax
  Outpop::Utility::Logger *v66; // eax
  wchar_t *v67; // eax
  int v68; // eax
  Outpop::Utility::Logger *v69; // eax
  int v70; // ebx
  int v71; // eax
  Outpop::Utility::Lock *v72; // edi
  Outpop::Utility::Logger *v73; // eax
  wchar_t *v74; // esi
  Outpop::Utility::Logger *v75; // eax
  Outpop::Utility::Logger *v76; // eax
  wchar_t *v77; // eax
  int v78; // eax
  Outpop::Utility::Logger *v79; // eax
  Outpop::Utility::Lock *v80; // edi
  Outpop::Utility::Logger *v81; // eax
  wchar_t *v82; // esi
  Outpop::Utility::Logger *v83; // eax
  Outpop::Utility::Logger *v84; // eax
  wchar_t *v85; // eax
  int v86; // eax
  Outpop::Utility::Logger *v87; // eax
  Outpop::Utility::Lock *v88; // ebx
  Outpop::IONetwork::INET_Addr *v89; // edi
  Outpop::Utility::Lock *v90; // ebx
  Outpop::Utility::Logger *v91; // eax
  wchar_t *v92; // esi
  Outpop::Utility::Logger *v93; // eax
  Outpop::Utility::Logger *v94; // eax
  wchar_t *v95; // eax
  int v96; // ebp
  const char *v97; // eax
  int v98; // edi
  const char *v99; // eax
  int v100; // eax
  int v101; // edi
  int v102; // eax
  Outpop::Utility::Logger *v103; // eax
  _DWORD *v104; // esi
  int v105; // ebp
  struct Outpop::IONetwork::Asynch_Result *v106; // esi
  char *v107; // eax
  _DWORD *v108; // esi
  __int16 *v109; // ebx
  struct Outpop::IONetwork::Asynch_Result *v110; // esi
  __int16 *v111; // esi
  int v112; // eax
  int v113; // ebx
  Outpop::Utility::Lock *v114; // ebp
  Outpop::Utility::Logger *v115; // eax
  wchar_t *v116; // edi
  int v117; // esi
  Outpop::Utility::Logger *v118; // eax
  Outpop::Utility::Logger *v119; // eax
  wchar_t *v120; // eax
  int v121; // eax
  Outpop::Utility::Logger *v122; // eax
  __int16 v123; // ax
  Outpop::Utility::Lock *v124; // ebx
  Outpop::Utility::Logger *v125; // eax
  wchar_t *v126; // edi
  int v127; // esi
  Outpop::Utility::Logger *v128; // eax
  Outpop::Utility::Logger *v129; // eax
  wchar_t *v130; // eax
  int v131; // eax
  Outpop::Utility::Logger *v132; // eax
  Outpop::Utility::Lock *v133; // ebx
  Outpop::Utility::Logger *v134; // eax
  wchar_t *v135; // edi
  int v136; // esi
  Outpop::Utility::Logger *v137; // eax
  Outpop::Utility::Logger *v138; // eax
  wchar_t *v139; // eax
  int v140; // eax
  Outpop::Utility::Logger *v141; // eax
  _DWORD *v142; // edi
  struct Outpop::IONetwork::Asynch_Result *v143; // edi
  Outpop::Utility::Lock *v144; // ebx
  Outpop::Utility::Logger *v145; // eax
  wchar_t *v146; // edi
  int v147; // esi
  Outpop::Utility::Logger *v148; // eax
  Outpop::Utility::Logger *v149; // eax
  wchar_t *v150; // eax
  int v151; // eax
  Outpop::Utility::Logger *v152; // eax
  Outpop::Utility::Lock *v153; // ebx
  Outpop::Utility::Logger *v154; // eax
  wchar_t *v155; // edi
  int v156; // esi
  Outpop::Utility::Logger *v157; // eax
  Outpop::Utility::Logger *v158; // eax
  wchar_t *v159; // eax
  int v160; // eax
  Outpop::Utility::Logger *v161; // eax
  _DWORD *v162; // edi
  char *v163; // ebx
  struct Outpop::IONetwork::Asynch_Result *v164; // edi
  Outpop::Utility::Lock *v165; // ebx
  Outpop::Utility::Logger *v166; // eax
  wchar_t *v167; // edi
  int v168; // esi
  Outpop::Utility::Logger *v169; // eax
  Outpop::Utility::Logger *v170; // eax
  wchar_t *v171; // eax
  int v172; // eax
  Outpop::Utility::Logger *v173; // eax
  Outpop::Utility::Lock *v174; // ebx
  Outpop::Utility::Logger *v175; // eax
  wchar_t *v176; // edi
  int v177; // esi
  Outpop::Utility::Logger *v178; // eax
  Outpop::Utility::Logger *v179; // eax
  wchar_t *v180; // eax
  int v181; // eax
  Outpop::Utility::Logger *v182; // eax
  Outpop::Utility::Lock *v183; // ebx
  Outpop::Utility::Logger *v184; // eax
  wchar_t *v185; // edi
  Outpop::Utility::Logger *v186; // eax
  Outpop::Utility::Logger *v187; // eax
  wchar_t *v188; // eax
  int v189; // eax
  Outpop::Utility::Logger *v190; // eax
  Outpop::Utility::Lock *v191; // ebx
  Outpop::Utility::Logger *v192; // eax
  wchar_t *v193; // edi
  int v194; // esi
  Outpop::Utility::Logger *v195; // eax
  Outpop::Utility::Logger *v196; // eax
  wchar_t *v197; // eax
  int v198; // esi
  Outpop::Utility::Logger *v199; // eax
  Outpop::Utility::Logger *v200; // eax
  int v201; // esi
  Outpop::Utility::Logger *v202; // eax
  Outpop::Utility::Logger *v203; // eax
  wchar_t *v204; // eax
  int v205; // esi
  wchar_t *v206; // [esp+18h] [ebp-C8h]
  wchar_t *v207; // [esp+18h] [ebp-C8h]
  wchar_t *v208; // [esp+18h] [ebp-C8h]
  wchar_t *v209; // [esp+18h] [ebp-C8h]
  wchar_t *v210; // [esp+18h] [ebp-C8h]
  wchar_t *v211; // [esp+18h] [ebp-C8h]
  wchar_t *v212; // [esp+18h] [ebp-C8h]
  wchar_t *v213; // [esp+18h] [ebp-C8h]
  wchar_t *v214; // [esp+18h] [ebp-C8h]
  wchar_t *v215; // [esp+18h] [ebp-C8h]
  wchar_t *v216; // [esp+18h] [ebp-C8h]
  DWORD CurrentProcessId; // [esp+1Ch] [ebp-C4h]
  DWORD v218; // [esp+1Ch] [ebp-C4h]
  DWORD v219; // [esp+1Ch] [ebp-C4h]
  DWORD v220; // [esp+1Ch] [ebp-C4h]
  DWORD v221; // [esp+1Ch] [ebp-C4h]
  DWORD v222; // [esp+1Ch] [ebp-C4h]
  DWORD v223; // [esp+1Ch] [ebp-C4h]
  DWORD v224; // [esp+1Ch] [ebp-C4h]
  DWORD v225; // [esp+1Ch] [ebp-C4h]
  DWORD v226; // [esp+1Ch] [ebp-C4h]
  DWORD v227; // [esp+1Ch] [ebp-C4h]
  DWORD CurrentThreadId; // [esp+20h] [ebp-C0h]
  DWORD v229; // [esp+20h] [ebp-C0h]
  DWORD v230; // [esp+20h] [ebp-C0h]
  DWORD v231; // [esp+20h] [ebp-C0h]
  DWORD v232; // [esp+20h] [ebp-C0h]
  DWORD v233; // [esp+20h] [ebp-C0h]
  DWORD v234; // [esp+20h] [ebp-C0h]
  DWORD v235; // [esp+20h] [ebp-C0h]
  DWORD v236; // [esp+20h] [ebp-C0h]
  DWORD v237; // [esp+20h] [ebp-C0h]
  DWORD v238; // [esp+20h] [ebp-C0h]
  DWORD LastError; // [esp+24h] [ebp-BCh]
  DWORD v240; // [esp+24h] [ebp-BCh]
  DWORD v241; // [esp+24h] [ebp-BCh]
  DWORD v242; // [esp+24h] [ebp-BCh]
  DWORD v243; // [esp+24h] [ebp-BCh]
  DWORD v244; // [esp+24h] [ebp-BCh]
  DWORD v245; // [esp+24h] [ebp-BCh]
  DWORD v246; // [esp+24h] [ebp-BCh]
  DWORD v247; // [esp+24h] [ebp-BCh]
  DWORD v248; // [esp+24h] [ebp-BCh]
  DWORD v249; // [esp+24h] [ebp-BCh]
  wchar_t *tm; // [esp+2Ch] [ebp-B4h]
  int v251; // [esp+2Ch] [ebp-B4h]
  int v252; // [esp+2Ch] [ebp-B4h]
  wchar_t *v253; // [esp+2Ch] [ebp-B4h]
  wchar_t *v254; // [esp+2Ch] [ebp-B4h]
  wchar_t *v255; // [esp+2Ch] [ebp-B4h]
  wchar_t *v256; // [esp+2Ch] [ebp-B4h]
  wchar_t *v257; // [esp+2Ch] [ebp-B4h]
  wchar_t *v258; // [esp+2Ch] [ebp-B4h]
  wchar_t *v259; // [esp+2Ch] [ebp-B4h]
  wchar_t *v260; // [esp+2Ch] [ebp-B4h]
  unsigned int ip_address; // [esp+44h] [ebp-9Ch]
  _DWORD *v262; // [esp+44h] [ebp-9Ch]
  int v263; // [esp+48h] [ebp-98h]
  __int16 *v264; // [esp+4Ch] [ebp-94h] BYREF
  int v265; // [esp+50h] [ebp-90h] BYREF
  __int16 *v266; // [esp+54h] [ebp-8Ch]
  Outpop::Utility::Lock *v267; // [esp+58h] [ebp-88h] BYREF
  _BYTE v268[28]; // [esp+5Ch] [ebp-84h] BYREF
  _BYTE v269[28]; // [esp+78h] [ebp-68h] BYREF
  _DWORD v270[7]; // [esp+94h] [ebp-4Ch] BYREF
  char Destination[32]; // [esp+B0h] [ebp-30h] BYREF
  int v272; // [esp+DCh] [ebp-4h]

  v1 = (int)this;
  v266 = this;
  v263 = 0;
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
  {
    v2 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v2);
    v272 = 0;
    v3 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    log_buffer = Outpop::Utility::Logger::get_log_buffer(v3);
    v5 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    tm = Outpop::Utility::Logger::make_tm(v5);
    v6 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    dt = Outpop::Utility::Logger::make_dt(v6);
    v8 = sub_1000A570(0xFFFFu, log_buffer, L"\nLOGINFO %s:%s Message:", dt, tm);
    sub_1000A570(0xFFFF - v8, &log_buffer[v8], L"UPNP find device...");
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", log_buffer);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v9 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v9);
    }
    v272 = -1;
    Outpop::Utility::Lock::unlock(v2);
  }
  v10 = operator new(0x24u);
  v272 = 1;
  if ( v10 )
  {
    v265 = v1;
    if ( v1 )
      Outpop::Utility::Ref_Object::addref((Outpop::Utility::Ref_Object *)(v1 + 76));
    LOBYTE(v272) = 2;
    v263 = 1;
    v11 = (struct Outpop::IONetwork::Asynch_Result *)sub_1000ECB0(1, v10, &v265);
  }
  else
  {
    v1 = v265;
    v11 = 0;
  }
  v272 = -1;
  if ( (v263 & 1) != 0 )
  {
    v263 &= ~1u;
    if ( v1 )
      Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)(v1 + 76));
  }
  if ( !v11 )
  {
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 142) == 1 )
    {
      v12 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      Outpop::Utility::Lock::lock(v12);
      v272 = 4;
      v13 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v14 = Outpop::Utility::Logger::get_log_buffer(v13);
      v15 = sub_1000A570(0xFFFFu, v14, L"\n%s", L"LOG_FATAL");
      v251 = 114;
LABEL_22:
      v16 = v15;
      LastError = GetLastError();
      CurrentThreadId = GetCurrentThreadId();
      CurrentProcessId = GetCurrentProcessId();
      v17 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v206 = Outpop::Utility::Logger::make_tm(v17);
      v18 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v19 = Outpop::Utility::Logger::make_dt(v18);
      v20 = sub_1000A570(
              0xFFFF - v16,
              &v14[v16],
              L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
              v19,
              v206,
              CurrentProcessId,
              CurrentThreadId,
              LastError,
              L"D:\\R3\\OutpopGameProject\\P2PNetwork\\UPNP_Network.cpp",
              v251)
          + v16;
      sub_1000A570(0xFFFF - v20, &v14[v20], L"UPNP_Network create object memory failed");
LABEL_23:
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", v14);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v21 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v21);
      }
      v272 = -1;
      Outpop::Utility::Lock::unlock(v12);
      return -1;
    }
    return -1;
  }
  if ( Outpop::IONetwork::WIN32_IoCompletionPort::post(
         (Outpop::IONetwork::WIN32_IoCompletionPort *)(dword_10030AA4 + 20),
         v11,
         0) == -1 )
  {
    (**(void (__thiscall ***)(struct Outpop::IONetwork::Asynch_Result *, int))v11)(v11, 1);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) != 1
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) != 1
      || *(_BYTE *)(Outpop::Utility::Logger::instance() + 142) != 1 )
    {
      return -1;
    }
    v12 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v12);
    v272 = 5;
    v23 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v14 = Outpop::Utility::Logger::get_log_buffer(v23);
    v24 = sub_1000A570(0xFFFFu, v14, L"\n%s", L"LOG_FATAL");
    v252 = 114;
LABEL_34:
    v25 = v24;
    v240 = GetLastError();
    v229 = GetCurrentThreadId();
    v218 = GetCurrentProcessId();
    v26 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v207 = Outpop::Utility::Logger::make_tm(v26);
    v27 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v28 = Outpop::Utility::Logger::make_dt(v27);
    v29 = sub_1000A570(
            0xFFFF - v25,
            &v14[v25],
            L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
            v28,
            v207,
            v218,
            v229,
            v240,
            L"D:\\R3\\OutpopGameProject\\P2PNetwork\\UPNP_Network.cpp",
            v252)
        + v25;
    sub_1000A570(0xFFFF - v29, &v14[v29], L"UPNP_Network post iocp result!");
    goto LABEL_23;
  }
  v30 = (int)v266;
  host_addr = (char *)Outpop::IONetwork::INET_Addr::get_host_addr((Outpop::IONetwork::INET_Addr *)(v266 + 52));
  v32 = sub_10012870(host_addr);
  if ( v32 )
  {
    v33 = operator new(0x24u);
    v272 = 6;
    if ( v33 )
    {
      v265 = v30;
      if ( v30 )
        Outpop::Utility::Ref_Object::addref((Outpop::Utility::Ref_Object *)(v30 + 76));
      LOBYTE(v272) = 7;
      LOBYTE(v263) = v263 | 2;
      v34 = (struct Outpop::IONetwork::Asynch_Result *)sub_1000ECB0(3, v33, &v265);
    }
    else
    {
      v30 = v265;
      v34 = 0;
    }
    v272 = -1;
    if ( (v263 & 2) != 0 && v30 )
      Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)(v30 + 76));
    if ( !v34 )
    {
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 142) == 1 )
      {
        v12 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        Outpop::Utility::Lock::lock(v12);
        v272 = 9;
        v35 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v14 = Outpop::Utility::Logger::get_log_buffer(v35);
        v15 = sub_1000A570(0xFFFFu, v14, L"\n%s", L"LOG_FATAL");
        v251 = 118;
        goto LABEL_22;
      }
      return -1;
    }
    if ( Outpop::IONetwork::WIN32_IoCompletionPort::post(
           (Outpop::IONetwork::WIN32_IoCompletionPort *)(dword_10030AA4 + 20),
           v34,
           0) == -1 )
    {
      (**(void (__thiscall ***)(struct Outpop::IONetwork::Asynch_Result *, int))v34)(v34, 1);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) != 1
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) != 1
        || *(_BYTE *)(Outpop::Utility::Logger::instance() + 142) != 1 )
      {
        return -1;
      }
      v12 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      Outpop::Utility::Lock::lock(v12);
      v272 = 10;
      v36 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v14 = Outpop::Utility::Logger::get_log_buffer(v36);
      v24 = sub_1000A570(0xFFFFu, v14, L"\n%s", L"LOG_FATAL");
      v252 = 118;
      goto LABEL_34;
    }
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
    {
      v37 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      Outpop::Utility::Lock::lock(v37);
      v272 = 11;
      v38 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v39 = Outpop::Utility::Logger::get_log_buffer(v38);
      v40 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v253 = Outpop::Utility::Logger::make_tm(v40);
      v41 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v42 = Outpop::Utility::Logger::make_dt(v41);
      v43 = sub_1000A570(0xFFFFu, v39, L"\nLOGINFO %s:%s Message:", v42, v253);
      sub_1000A570(0xFFFF - v43, &v39[v43], L"UPNP upnp discover device failed %d!", v32);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", v39);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v44 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v44);
      }
      v272 = -1;
      Outpop::Utility::Lock::unlock(v37);
    }
    return 0;
  }
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
  {
    v45 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v45);
    v272 = 12;
    v46 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v47 = Outpop::Utility::Logger::get_log_buffer(v46);
    v48 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v254 = Outpop::Utility::Logger::make_tm(v48);
    v49 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v50 = Outpop::Utility::Logger::make_dt(v49);
    v51 = sub_1000A570(0xFFFFu, v47, L"\nLOGINFO %s:%s Message:", v50, v254);
    sub_1000A570(0xFFFF - v51, &v47[v51], L"UPNP find device....");
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", v47);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v52 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v52);
    }
    v272 = -1;
    Outpop::Utility::Lock::unlock(v45);
  }
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
  {
    v53 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v53);
    v272 = 13;
    v54 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v55 = Outpop::Utility::Logger::get_log_buffer(v54);
    v56 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v255 = Outpop::Utility::Logger::make_tm(v56);
    v57 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v58 = Outpop::Utility::Logger::make_dt(v57);
    v59 = sub_1000A570(0xFFFFu, v55, L"\nLOGINFO %s:%s Message:", v58, v255);
    sub_1000A570(0xFFFF - v59, &v55[v59], L"UPNP maping port %d", (unsigned __int16)v266[80]);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", v55);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v60 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v60);
    }
    v272 = -1;
    Outpop::Utility::Lock::unlock(v53);
  }
  v61 = (__int16 *)&unk_10030B60;
  v265 = 0;
  v264 = (__int16 *)&unk_10030B60;
  while ( !*(_DWORD *)v61 )
  {
LABEL_133:
    ++v265;
    v61 += 4;
    v264 = v61;
    if ( (int)v61 >= (int)word_10030BC0 )
    {
      v108 = operator new(0x24u);
      v272 = 37;
      if ( v108 )
      {
        v109 = v266;
        v264 = v266;
        if ( v266 )
          Outpop::Utility::Ref_Object::addref((Outpop::Utility::Ref_Object *)(v266 + 38));
        LOBYTE(v272) = 38;
        LOBYTE(v263) = v263 | 0x20;
        v110 = (struct Outpop::IONetwork::Asynch_Result *)sub_1000ECB0(3, v108, (int *)&v264);
      }
      else
      {
        v109 = v264;
        v110 = 0;
      }
      v272 = -1;
      if ( (v263 & 0x20) != 0 && v109 )
        Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)(v109 + 38));
      if ( v110 )
      {
        if ( Outpop::IONetwork::WIN32_IoCompletionPort::post(
               (Outpop::IONetwork::WIN32_IoCompletionPort *)(dword_10030AA4 + 20),
               v110,
               0) != -1 )
          return 0;
        (**(void (__thiscall ***)(struct Outpop::IONetwork::Asynch_Result *, int))v110)(v110, 1);
        if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
           || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
          && *(_BYTE *)(Outpop::Utility::Logger::instance() + 142) == 1 )
        {
          v191 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
          Outpop::Utility::Lock::lock(v191);
          v272 = 41;
          v200 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v193 = Outpop::Utility::Logger::get_log_buffer(v200);
          v201 = sub_1000A570(0xFFFFu, v193, L"\n%s", L"LOG_FATAL");
          v249 = GetLastError();
          v238 = GetCurrentThreadId();
          v227 = GetCurrentProcessId();
          v202 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v216 = Outpop::Utility::Logger::make_tm(v202);
          v203 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v204 = Outpop::Utility::Logger::make_dt(v203);
          v205 = sub_1000A570(
                   0xFFFF - v201,
                   &v193[v201],
                   L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                   v204,
                   v216,
                   v227,
                   v238,
                   v249,
                   L"D:\\R3\\OutpopGameProject\\P2PNetwork\\UPNP_Network.cpp",
                   247)
               + v201;
          sub_1000A570(0xFFFF - v205, &v193[v205], L"UPNP_Network post iocp result!");
          goto LABEL_243;
        }
      }
      else if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
              || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
             && *(_BYTE *)(Outpop::Utility::Logger::instance() + 142) == 1 )
      {
        v191 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        Outpop::Utility::Lock::lock(v191);
        v272 = 40;
        v192 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v193 = Outpop::Utility::Logger::get_log_buffer(v192);
        v194 = sub_1000A570(0xFFFFu, v193, L"\n%s", L"LOG_FATAL");
        v248 = GetLastError();
        v237 = GetCurrentThreadId();
        v226 = GetCurrentProcessId();
        v195 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v215 = Outpop::Utility::Logger::make_tm(v195);
        v196 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v197 = Outpop::Utility::Logger::make_dt(v196);
        v198 = sub_1000A570(
                 0xFFFF - v194,
                 &v193[v194],
                 L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                 v197,
                 v215,
                 v226,
                 v237,
                 v248,
                 L"D:\\R3\\OutpopGameProject\\P2PNetwork\\UPNP_Network.cpp",
                 247)
             + v194;
        sub_1000A570(0xFFFF - v198, &v193[v198], L"UPNP_Network create object memory failed");
LABEL_243:
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", v193);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          v199 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v199);
        }
        v272 = -1;
        Outpop::Utility::Lock::unlock(v191);
      }
      return -1;
    }
  }
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
  {
    v62 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v62);
    v272 = 14;
    v63 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v64 = Outpop::Utility::Logger::get_log_buffer(v63);
    v65 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v256 = Outpop::Utility::Logger::make_tm(v65);
    v66 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v67 = Outpop::Utility::Logger::make_dt(v66);
    v68 = sub_1000A570(0xFFFFu, v64, L"\nLOGINFO %s:%s Message:", v67, v256);
    sub_1000A570(0xFFFF - v68, &v64[v68], L"UPNP Find Device url %S,service %S,", *(_DWORD *)v61, *((_DWORD *)v61 + 1));
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", v64);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v69 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v69);
    }
    v272 = -1;
    Outpop::Utility::Lock::unlock(v62);
  }
  v70 = sub_100132C0(Destination);
  v71 = Outpop::Utility::Logger::instance();
  if ( v70 )
  {
    if ( (*(_BYTE *)(v71 + 136) == 1 || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
    {
      v72 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      Outpop::Utility::Lock::lock(v72);
      v272 = 15;
      v73 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v74 = Outpop::Utility::Logger::get_log_buffer(v73);
      v75 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v257 = Outpop::Utility::Logger::make_tm(v75);
      v76 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v77 = Outpop::Utility::Logger::make_dt(v76);
      v78 = sub_1000A570(0xFFFFu, v74, L"\nLOGINFO %s:%s Message:", v77, v257);
      sub_1000A570(0xFFFF - v78, &v74[v78], L"UPNP get public ip error %d", v70);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", v74);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v79 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v79);
      }
      v272 = -1;
      Outpop::Utility::Lock::unlock(v72);
    }
    goto LABEL_133;
  }
  if ( (*(_BYTE *)(v71 + 136) == 1 || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
  {
    v80 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v80);
    v272 = 16;
    v81 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v82 = Outpop::Utility::Logger::get_log_buffer(v81);
    v83 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v258 = Outpop::Utility::Logger::make_tm(v83);
    v84 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v85 = Outpop::Utility::Logger::make_dt(v84);
    v86 = sub_1000A570(0xFFFFu, v82, L"\nLOGINFO %s:%s Message:", v85, v258);
    sub_1000A570(0xFFFF - v86, &v82[v86], L"UPNP Get Public IP: %S.\n", Destination);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", v82);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v87 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v87);
    }
    v272 = -1;
    Outpop::Utility::Lock::unlock(v80);
  }
  Outpop::IONetwork::INET_Addr::INET_Addr((Outpop::IONetwork::INET_Addr *)v270, 0, Destination);
  v88 = (Outpop::Utility::Lock *)v266;
  v272 = 17;
  v89 = (Outpop::IONetwork::INET_Addr *)(v266 + 66);
  ip_address = Outpop::IONetwork::INET_Addr::get_ip_address((Outpop::IONetwork::INET_Addr *)(v266 + 66));
  if ( Outpop::IONetwork::INET_Addr::get_ip_address((Outpop::IONetwork::INET_Addr *)v270) != ip_address )
  {
    v272 = -1;
    Outpop::IONetwork::INET_Addr::~INET_Addr((Outpop::IONetwork::INET_Addr *)v270);
    goto LABEL_133;
  }
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
  {
    v90 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v90);
    LOBYTE(v272) = 18;
    v91 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v92 = Outpop::Utility::Logger::get_log_buffer(v91);
    v93 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v259 = Outpop::Utility::Logger::make_tm(v93);
    v94 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v95 = Outpop::Utility::Logger::make_dt(v94);
    v96 = sub_1000A570(0xFFFFu, v92, L"\nLOGINFO %s:%s Message:", v95, v259);
    v97 = Outpop::IONetwork::INET_Addr::get_host_addr(v89);
    v98 = std::string::string(v268, v97);
    LOBYTE(v272) = 19;
    v99 = Outpop::IONetwork::INET_Addr::get_host_addr((Outpop::IONetwork::INET_Addr *)v270);
    v100 = std::string::string(v269, v99);
    if ( *(_DWORD *)(v98 + 24) < 0x10u )
      v101 = v98 + 4;
    else
      v101 = *(_DWORD *)(v98 + 4);
    if ( *(_DWORD *)(v100 + 24) < 0x10u )
      v102 = v100 + 4;
    else
      v102 = *(_DWORD *)(v100 + 4);
    sub_1000A570(0xFFFF - v96, &v92[v96], L"UPNP find device that public ip %S == external ip %S", v102, v101);
    std::string::~string(v269);
    LOBYTE(v272) = 18;
    std::string::~string(v268);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", v92);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v103 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v103);
    }
    LOBYTE(v272) = 17;
    Outpop::Utility::Lock::unlock(v90);
    v88 = (Outpop::Utility::Lock *)v266;
  }
  v104 = operator new(0x24u);
  LOBYTE(v272) = 20;
  if ( v104 )
  {
    v105 = (int)v88;
    v267 = v88;
    if ( v88 )
      Outpop::Utility::Ref_Object::addref((Outpop::Utility::Lock *)((char *)v88 + 76));
    LOBYTE(v272) = 21;
    v263 |= 4u;
    v106 = (struct Outpop::IONetwork::Asynch_Result *)sub_1000ECB0(2, v104, (int *)&v267);
  }
  else
  {
    v105 = (int)v267;
    v106 = 0;
  }
  v272 = 17;
  if ( (v263 & 4) != 0 )
  {
    v263 &= ~4u;
    if ( v105 )
      Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)(v105 + 76));
  }
  if ( !v106 )
  {
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 142) == 1 )
    {
      v124 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      Outpop::Utility::Lock::lock(v124);
      LOBYTE(v272) = 23;
      v125 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v126 = Outpop::Utility::Logger::get_log_buffer(v125);
      v127 = sub_1000A570(0xFFFFu, v126, L"\n%s", L"LOG_FATAL");
      v242 = GetLastError();
      v231 = GetCurrentThreadId();
      v220 = GetCurrentProcessId();
      v128 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v209 = Outpop::Utility::Logger::make_tm(v128);
      v129 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v130 = Outpop::Utility::Logger::make_dt(v129);
      v131 = sub_1000A570(
               0xFFFF - v127,
               &v126[v127],
               L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
               v130,
               v209,
               v220,
               v231,
               v242,
               L"D:\\R3\\OutpopGameProject\\P2PNetwork\\UPNP_Network.cpp",
               151);
      sub_1000A570(0xFFFF - (v131 + v127), &v126[v131 + v127], L"UPNP_Network create object memory failed");
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", v126);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v132 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v132);
      }
      LOBYTE(v272) = 17;
      Outpop::Utility::Lock::unlock(v124);
    }
    goto LABEL_160;
  }
  if ( Outpop::IONetwork::WIN32_IoCompletionPort::post(
         (Outpop::IONetwork::WIN32_IoCompletionPort *)(dword_10030AA4 + 20),
         v106,
         0) == -1 )
  {
    (**(void (__thiscall ***)(struct Outpop::IONetwork::Asynch_Result *, int))v106)(v106, 1);
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 142) == 1 )
    {
      v133 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      Outpop::Utility::Lock::lock(v133);
      LOBYTE(v272) = 24;
      v134 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v135 = Outpop::Utility::Logger::get_log_buffer(v134);
      v136 = sub_1000A570(0xFFFFu, v135, L"\n%s", L"LOG_FATAL");
      v243 = GetLastError();
      v232 = GetCurrentThreadId();
      v221 = GetCurrentProcessId();
      v137 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v210 = Outpop::Utility::Logger::make_tm(v137);
      v138 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v139 = Outpop::Utility::Logger::make_dt(v138);
      v140 = sub_1000A570(
               0xFFFF - v136,
               &v135[v136],
               L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
               v139,
               v210,
               v221,
               v232,
               v243,
               L"D:\\R3\\OutpopGameProject\\P2PNetwork\\UPNP_Network.cpp",
               151);
      sub_1000A570(0xFFFF - (v140 + v136), &v135[v140 + v136], L"UPNP_Network post iocp result!");
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", v135);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v141 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v141);
      }
      LOBYTE(v272) = 17;
      Outpop::Utility::Lock::unlock(v133);
    }
LABEL_160:
    v272 = -1;
    Outpop::IONetwork::INET_Addr::~INET_Addr((Outpop::IONetwork::INET_Addr *)v270);
    return -1;
  }
  v107 = (char *)*((_DWORD *)v88 + 25);
  if ( (int)v107 <= 0 )
  {
    v272 = -1;
    Outpop::IONetwork::INET_Addr::~INET_Addr((Outpop::IONetwork::INET_Addr *)v270);
    v61 = v264;
    goto LABEL_133;
  }
  v262 = (_DWORD *)((char *)&unk_10030B60 + 8 * v265);
  while ( 1 )
  {
    v111 = v266;
    v264 = (__int16 *)(v107 - 1);
    v112 = *((_DWORD *)v88 + 42);
    if ( v112 )
    {
      v113 = sub_10013690(v112, v266[81]);
      if ( v113 )
      {
        if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
           || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
          && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
        {
          v114 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
          v267 = v114;
          Outpop::Utility::Lock::lock(v114);
          LOBYTE(v272) = 25;
          v115 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v116 = Outpop::Utility::Logger::get_log_buffer(v115);
          v117 = sub_1000A570(0xFFFFu, v116, L"\n%s", L"LOG_ERROR");
          v241 = GetLastError();
          v230 = GetCurrentThreadId();
          v219 = GetCurrentProcessId();
          v118 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v208 = Outpop::Utility::Logger::make_tm(v118);
          v119 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v120 = Outpop::Utility::Logger::make_dt(v119);
          v121 = sub_1000A570(
                   0xFFFF - v117,
                   &v116[v117],
                   L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                   v120,
                   v208,
                   v219,
                   v230,
                   v241,
                   L"D:\\R3\\OutpopGameProject\\P2PNetwork\\UPNP_Network.cpp",
                   196);
          sub_1000A570(0xFFFF - (v121 + v117), &v116[v121 + v117], L"UPNPNetwork remove map port error %d", v113);
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
            wprintf(L"%s", v116);
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
          {
            v122 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
            Outpop::Utility::Logger::write_file(v122);
          }
          LOBYTE(v272) = 17;
          Outpop::Utility::Lock::unlock(v114);
          v111 = v266;
        }
      }
    }
    v123 = v111[80];
    *((_DWORD *)v111 + 42) = 0;
    v111[81] = v123;
    if ( !sub_100134B0(v262, v123) )
      break;
    if ( (int)v264 <= 0 )
    {
      v142 = operator new(0x24u);
      LOBYTE(v272) = 26;
      if ( v142 )
      {
        v264 = v111;
        Outpop::Utility::Ref_Object::addref((Outpop::Utility::Ref_Object *)(v111 + 38));
        LOBYTE(v272) = 27;
        LOBYTE(v263) = v263 | 8;
        v143 = (struct Outpop::IONetwork::Asynch_Result *)sub_1000ECB0(5, v142, (int *)&v264);
      }
      else
      {
        v111 = v264;
        v143 = 0;
      }
      v272 = 17;
      if ( (v263 & 8) != 0 && v111 )
        Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)(v111 + 38));
      if ( !v143 )
      {
        if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
           || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
          && *(_BYTE *)(Outpop::Utility::Logger::instance() + 142) == 1 )
        {
          v144 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
          Outpop::Utility::Lock::lock(v144);
          LOBYTE(v272) = 29;
          v145 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v146 = Outpop::Utility::Logger::get_log_buffer(v145);
          v147 = sub_1000A570(0xFFFFu, v146, L"\n%s", L"LOG_FATAL");
          v244 = GetLastError();
          v233 = GetCurrentThreadId();
          v222 = GetCurrentProcessId();
          v148 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v211 = Outpop::Utility::Logger::make_tm(v148);
          v149 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v150 = Outpop::Utility::Logger::make_dt(v149);
          v151 = sub_1000A570(
                   0xFFFF - v147,
                   &v146[v147],
                   L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                   v150,
                   v211,
                   v222,
                   v233,
                   v244,
                   L"D:\\R3\\OutpopGameProject\\P2PNetwork\\UPNP_Network.cpp",
                   216);
          sub_1000A570(0xFFFF - (v151 + v147), &v146[v151 + v147], L"UPNP_Network create object memory failed");
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
            wprintf(L"%s", v146);
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
          {
            v152 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
            Outpop::Utility::Logger::write_file(v152);
          }
          LOBYTE(v272) = 17;
          Outpop::Utility::Lock::unlock(v144);
        }
        goto LABEL_224;
      }
      if ( Outpop::IONetwork::WIN32_IoCompletionPort::post(
             (Outpop::IONetwork::WIN32_IoCompletionPort *)(dword_10030AA4 + 20),
             v143,
             0) == -1 )
      {
        (**(void (__thiscall ***)(struct Outpop::IONetwork::Asynch_Result *, int))v143)(v143, 1);
        if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
           || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
          && *(_BYTE *)(Outpop::Utility::Logger::instance() + 142) == 1 )
        {
          v153 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
          Outpop::Utility::Lock::lock(v153);
          LOBYTE(v272) = 30;
          v154 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v155 = Outpop::Utility::Logger::get_log_buffer(v154);
          v156 = sub_1000A570(0xFFFFu, v155, L"\n%s", L"LOG_FATAL");
          v245 = GetLastError();
          v234 = GetCurrentThreadId();
          v223 = GetCurrentProcessId();
          v157 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v212 = Outpop::Utility::Logger::make_tm(v157);
          v158 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v159 = Outpop::Utility::Logger::make_dt(v158);
          v160 = sub_1000A570(
                   0xFFFF - v156,
                   &v155[v156],
                   L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                   v159,
                   v212,
                   v223,
                   v234,
                   v245,
                   L"D:\\R3\\OutpopGameProject\\P2PNetwork\\UPNP_Network.cpp",
                   216);
          sub_1000A570(0xFFFF - (v160 + v156), &v155[v160 + v156], L"UPNP_Network post iocp result!");
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
            wprintf(L"%s", v155);
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
          {
            v161 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
            Outpop::Utility::Logger::write_file(v161);
          }
          LOBYTE(v272) = 17;
          Outpop::Utility::Lock::unlock(v153);
        }
        goto LABEL_224;
      }
      v272 = -1;
LABEL_197:
      Outpop::IONetwork::INET_Addr::~INET_Addr((Outpop::IONetwork::INET_Addr *)v270);
      return 0;
    }
    Sleep(0x3E8u);
    v107 = (char *)v264;
    v88 = (Outpop::Utility::Lock *)v266;
  }
  *((_DWORD *)v111 + 42) = v262;
  v162 = operator new(0x28u);
  LOBYTE(v272) = 31;
  if ( v162 )
  {
    v163 = (char *)v111;
    v264 = v111;
    Outpop::Utility::Ref_Object::addref((Outpop::Utility::Ref_Object *)(v111 + 38));
    LOBYTE(v272) = 32;
    LOBYTE(v263) = v263 | 0x10;
    v164 = (struct Outpop::IONetwork::Asynch_Result *)sub_1000EDE0(v162, (int *)&v264);
  }
  else
  {
    v163 = (char *)v264;
    v164 = 0;
  }
  v272 = 17;
  if ( (v263 & 0x10) != 0 && v163 )
    Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)(v163 + 76));
  if ( v164 )
  {
    if ( Outpop::IONetwork::WIN32_IoCompletionPort::post(
           (Outpop::IONetwork::WIN32_IoCompletionPort *)(dword_10030AA4 + 20),
           v164,
           0) != -1 )
    {
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
      {
        v183 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        Outpop::Utility::Lock::lock(v183);
        LOBYTE(v272) = 36;
        v184 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v185 = Outpop::Utility::Logger::get_log_buffer(v184);
        v186 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v260 = Outpop::Utility::Logger::make_tm(v186);
        v187 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v188 = Outpop::Utility::Logger::make_dt(v187);
        v189 = sub_1000A570(0xFFFFu, v185, L"\nLOGINFO %s:%s Message:", v188, v260);
        sub_1000A570(
          0xFFFF - v189,
          &v185[v189],
          L"Port Mapping In Gate %S Successful On Port %d.\n",
          *v262,
          (unsigned __int16)v111[80]);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", v185);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          v190 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v190);
        }
        LOBYTE(v272) = 17;
        Outpop::Utility::Lock::unlock(v183);
      }
      v272 = -1;
      goto LABEL_197;
    }
    (**(void (__thiscall ***)(struct Outpop::IONetwork::Asynch_Result *, int))v164)(v164, 1);
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 142) == 1 )
    {
      v174 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      Outpop::Utility::Lock::lock(v174);
      LOBYTE(v272) = 35;
      v175 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v176 = Outpop::Utility::Logger::get_log_buffer(v175);
      v177 = sub_1000A570(0xFFFFu, v176, L"\n%s", L"LOG_FATAL");
      v247 = GetLastError();
      v236 = GetCurrentThreadId();
      v225 = GetCurrentProcessId();
      v178 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v214 = Outpop::Utility::Logger::make_tm(v178);
      v179 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v180 = Outpop::Utility::Logger::make_dt(v179);
      v181 = sub_1000A570(
               0xFFFF - v177,
               &v176[v177],
               L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
               v180,
               v214,
               v225,
               v236,
               v247,
               L"D:\\R3\\OutpopGameProject\\P2PNetwork\\UPNP_Network.cpp",
               237);
      sub_1000A570(0xFFFF - (v181 + v177), &v176[v181 + v177], L"UPNP_Network post iocp result!");
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", v176);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v182 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v182);
      }
      LOBYTE(v272) = 17;
      Outpop::Utility::Lock::unlock(v174);
    }
  }
  else if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
          || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
         && *(_BYTE *)(Outpop::Utility::Logger::instance() + 142) == 1 )
  {
    v165 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v165);
    LOBYTE(v272) = 34;
    v166 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v167 = Outpop::Utility::Logger::get_log_buffer(v166);
    v168 = sub_1000A570(0xFFFFu, v167, L"\n%s", L"LOG_FATAL");
    v246 = GetLastError();
    v235 = GetCurrentThreadId();
    v224 = GetCurrentProcessId();
    v169 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v213 = Outpop::Utility::Logger::make_tm(v169);
    v170 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v171 = Outpop::Utility::Logger::make_dt(v170);
    v172 = sub_1000A570(
             0xFFFF - v168,
             &v167[v168],
             L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
             v171,
             v213,
             v224,
             v235,
             v246,
             L"D:\\R3\\OutpopGameProject\\P2PNetwork\\UPNP_Network.cpp",
             231);
    sub_1000A570(0xFFFF - (v172 + v168), &v167[v172 + v168], L"UPNP_Network create object memory failed");
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", v167);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v173 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v173);
    }
    LOBYTE(v272) = 17;
    Outpop::Utility::Lock::unlock(v165);
  }
LABEL_224:
  v272 = -1;
  Outpop::IONetwork::INET_Addr::~INET_Addr((Outpop::IONetwork::INET_Addr *)v270);
  return -1;
}
