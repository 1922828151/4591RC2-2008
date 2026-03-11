/*
 * func-name: ?handle_read_stream@Stream_Channel@IONetwork@Outpop@@QAEXPAVAsynch_IO_Result@23@@Z
 * func-address: 0x100117b0
 * callers: 0x10014b80
 * callees: 0x10005b30, 0x10005b50, 0x10007400, 0x100093b0, 0x1000ac30, 0x1000b180, 0x1000b1b0, 0x1000b200, 0x1000ce40, 0x1000ee60, 0x10011620, 0x10013cb0, 0x100155b0, 0x10022840, 0x10035660, 0x10035680, 0x1003ba70, 0x1004a7f0
 */

void __thiscall Outpop::IONetwork::Stream_Channel::handle_read_stream(
        Outpop::IONetwork::Stream_Channel *this,
        struct Outpop::IONetwork::Asynch_IO_Result *a2)
{
  Outpop::Utility::Ref_Object *v2; // edi
  Outpop::Utility::Logger *v3; // eax
  int v4; // esi
  DWORD (__stdcall *v5)(); // ebx
  Outpop::Utility::Logger *v6; // eax
  Outpop::Utility::Logger *v7; // eax
  wchar_t *dt; // eax
  Outpop::Utility::Logger *v9; // eax
  void (__thiscall *v10)(Outpop::Utility::Lock *__hidden); // esi
  int v11; // ecx
  Outpop::Utility::Logger *v12; // eax
  wchar_t *v13; // esi
  int v14; // edi
  Outpop::Utility::Logger *v15; // eax
  Outpop::Utility::Logger *v16; // eax
  wchar_t *v17; // eax
  int v18; // eax
  Outpop::Utility::Logger *v19; // eax
  int v20; // eax
  Outpop::Utility::Logger *v21; // eax
  int v22; // esi
  Outpop::Utility::Logger *v23; // eax
  Outpop::Utility::Logger *v24; // eax
  wchar_t *v25; // eax
  wchar_t *v26; // ebx
  int v27; // eax
  Outpop::Utility::Logger *v28; // eax
  Outpop::Utility::Logger *v29; // eax
  int v30; // esi
  Outpop::Utility::Logger *v31; // eax
  Outpop::Utility::Logger *v32; // eax
  wchar_t *v33; // eax
  int v34; // esi
  int readable; // eax
  Outpop::Utility::Logger *v36; // eax
  Outpop::Utility::Logger *v37; // eax
  wchar_t *v38; // edi
  int v39; // esi
  Outpop::Utility::Logger *v40; // eax
  Outpop::Utility::Logger *v41; // eax
  wchar_t *v42; // eax
  int v43; // eax
  Outpop::Utility::Logger *v44; // eax
  Outpop::Utility::Logger *v45; // eax
  int v46; // esi
  Outpop::Utility::Logger *v47; // eax
  Outpop::Utility::Logger *v48; // eax
  wchar_t *v49; // eax
  wchar_t *v50; // ebx
  int v51; // eax
  Outpop::Utility::Logger *v52; // eax
  int v53; // eax
  Outpop::Utility::Logger *v54; // eax
  int v55; // esi
  Outpop::Utility::Logger *v56; // eax
  Outpop::Utility::Logger *v57; // eax
  wchar_t *v58; // eax
  wchar_t *v59; // esi
  Outpop::Utility::Logger *v60; // eax
  Outpop::Utility::Logger *v61; // eax
  wchar_t *v62; // esi
  Outpop::Utility::Logger *v63; // eax
  Outpop::Utility::Logger *v64; // eax
  wchar_t *v65; // eax
  int v66; // eax
  Outpop::Utility::Logger *v67; // eax
  int v68; // eax
  Outpop::Utility::Ref_Object *v69; // esi
  Outpop::Utility::Thread_Mutex *v70; // edi
  Outpop::Utility::Stream_Base **v71; // eax
  Outpop::Utility::Logger *v72; // eax
  wchar_t *v73; // edi
  int v74; // esi
  Outpop::Utility::Logger *v75; // eax
  Outpop::Utility::Logger *v76; // eax
  wchar_t *v77; // eax
  int v78; // eax
  Outpop::Utility::Logger *v79; // eax
  Outpop::Utility::Logger *v80; // eax
  wchar_t *v81; // esi
  Outpop::Utility::Logger *v82; // eax
  Outpop::Utility::Logger *v83; // eax
  wchar_t *v84; // eax
  wchar_t *v85; // esi
  Outpop::Utility::Logger *v86; // eax
  Outpop::Utility::Logger *v87; // eax
  wchar_t *v88; // esi
  Outpop::Utility::Logger *v89; // eax
  Outpop::Utility::Logger *v90; // eax
  wchar_t *v91; // eax
  wchar_t *v92; // esi
  Outpop::Utility::Logger *v93; // eax
  _DWORD *v94; // eax
  int v95; // eax
  Outpop::Utility::Ref_Object *v96; // esi
  int v97; // eax
  Outpop::Utility::Logger *v98; // eax
  int v99; // esi
  Outpop::Utility::Logger *v100; // eax
  Outpop::Utility::Logger *v101; // eax
  wchar_t *v102; // eax
  wchar_t *v103; // ebx
  int v104; // eax
  Outpop::Utility::Logger *v105; // eax
  Outpop::Utility::Logger *v106; // eax
  int v107; // esi
  Outpop::Utility::Logger *v108; // eax
  Outpop::Utility::Logger *v109; // eax
  wchar_t *v110; // eax
  wchar_t *v111; // ebx
  int v112; // eax
  Outpop::Utility::Logger *v113; // eax
  int v114; // eax
  Outpop::Utility::Logger *v115; // eax
  int v116; // esi
  Outpop::Utility::Logger *v117; // eax
  Outpop::Utility::Logger *v118; // eax
  wchar_t *v119; // eax
  wchar_t *v120; // ebx
  int v121; // eax
  Outpop::Utility::Logger *v122; // eax
  int space; // eax
  Outpop::Utility::Logger *v124; // eax
  int v125; // esi
  Outpop::Utility::Logger *v126; // eax
  Outpop::Utility::Logger *v127; // eax
  wchar_t *v128; // eax
  wchar_t *v129; // ebx
  int v130; // eax
  Outpop::Utility::Logger *v131; // eax
  wchar_t *v132; // [esp-34h] [ebp-138h]
  wchar_t *v133; // [esp-30h] [ebp-134h]
  wchar_t *v134; // [esp-30h] [ebp-134h]
  wchar_t *v135; // [esp-30h] [ebp-134h]
  DWORD v136; // [esp-30h] [ebp-134h]
  DWORD v137; // [esp-2Ch] [ebp-130h]
  DWORD v138; // [esp-2Ch] [ebp-130h]
  DWORD v139; // [esp-2Ch] [ebp-130h]
  DWORD v140; // [esp-2Ch] [ebp-130h]
  wchar_t *v141; // [esp-28h] [ebp-12Ch]
  DWORD v142; // [esp-28h] [ebp-12Ch]
  DWORD v143; // [esp-28h] [ebp-12Ch]
  DWORD v144; // [esp-28h] [ebp-12Ch]
  DWORD v145; // [esp-28h] [ebp-12Ch]
  wchar_t *v146; // [esp-24h] [ebp-128h]
  DWORD v147; // [esp-24h] [ebp-128h]
  DWORD v148; // [esp-24h] [ebp-128h]
  DWORD v149; // [esp-24h] [ebp-128h]
  DWORD v150; // [esp-24h] [ebp-128h]
  wchar_t *v151; // [esp-20h] [ebp-124h]
  DWORD v152; // [esp-20h] [ebp-124h]
  wchar_t *v153; // [esp-20h] [ebp-124h]
  wchar_t *v154; // [esp-20h] [ebp-124h]
  DWORD v155; // [esp-20h] [ebp-124h]
  wchar_t *v156; // [esp-20h] [ebp-124h]
  wchar_t *v157; // [esp-1Ch] [ebp-120h]
  wchar_t *v158; // [esp-1Ch] [ebp-120h]
  DWORD v159; // [esp-1Ch] [ebp-120h]
  DWORD v160; // [esp-1Ch] [ebp-120h]
  DWORD v161; // [esp-1Ch] [ebp-120h]
  DWORD v162; // [esp-1Ch] [ebp-120h]
  DWORD v163; // [esp-1Ch] [ebp-120h]
  DWORD v164; // [esp-1Ch] [ebp-120h]
  wchar_t *v165; // [esp-1Ch] [ebp-120h]
  wchar_t *v166; // [esp-18h] [ebp-11Ch]
  wchar_t *tm; // [esp-18h] [ebp-11Ch]
  DWORD v168; // [esp-18h] [ebp-11Ch]
  DWORD v169; // [esp-18h] [ebp-11Ch]
  DWORD v170; // [esp-18h] [ebp-11Ch]
  DWORD v171; // [esp-18h] [ebp-11Ch]
  DWORD v172; // [esp-18h] [ebp-11Ch]
  DWORD v173; // [esp-18h] [ebp-11Ch]
  int v174; // [esp-18h] [ebp-11Ch]
  DWORD v175; // [esp-18h] [ebp-11Ch]
  wchar_t *v176; // [esp-18h] [ebp-11Ch]
  wchar_t *v177; // [esp-14h] [ebp-118h]
  DWORD CurrentProcessId; // [esp-14h] [ebp-118h]
  DWORD v179; // [esp-14h] [ebp-118h]
  DWORD v180; // [esp-14h] [ebp-118h]
  DWORD v181; // [esp-14h] [ebp-118h]
  DWORD v182; // [esp-14h] [ebp-118h]
  DWORD v183; // [esp-14h] [ebp-118h]
  int v184; // [esp-14h] [ebp-118h]
  int v185; // [esp-14h] [ebp-118h]
  int v186; // [esp-14h] [ebp-118h]
  wchar_t *v187; // [esp-14h] [ebp-118h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-114h]
  DWORD v189; // [esp-10h] [ebp-114h]
  DWORD v190; // [esp-10h] [ebp-114h]
  wchar_t *v191; // [esp-10h] [ebp-114h]
  wchar_t *v192; // [esp-10h] [ebp-114h]
  int v193; // [esp-10h] [ebp-114h]
  int v194; // [esp-10h] [ebp-114h]
  int v195; // [esp-10h] [ebp-114h]
  DWORD LastError; // [esp-Ch] [ebp-110h]
  wchar_t *v197; // [esp-Ch] [ebp-110h]
  int v198; // [esp-Ch] [ebp-110h]
  int v199; // [esp-Ch] [ebp-110h]
  int v200; // [esp-8h] [ebp-10Ch]
  int v201; // [esp-8h] [ebp-10Ch]
  wchar_t *v202; // [esp-4h] [ebp-108h]
  int v203; // [esp+0h] [ebp-104h] BYREF
  int v205; // [esp+1Ch] [ebp-E8h]
  wchar_t *v206; // [esp+20h] [ebp-E4h]
  char *v207; // [esp+24h] [ebp-E0h]
  int v208; // [esp+2Ch] [ebp-D8h]
  int v209; // [esp+30h] [ebp-D4h]
  int v210; // [esp+34h] [ebp-D0h]
  LONG v211; // [esp+38h] [ebp-CCh]
  struct Outpop::IONetwork::Asynch_IO_Result *v212; // [esp+3Ch] [ebp-C8h]
  Outpop::Utility::Ref_Object *v213; // [esp+40h] [ebp-C4h]
  int v214; // [esp+44h] [ebp-C0h]
  int v215; // [esp+48h] [ebp-BCh]
  int v216; // [esp+50h] [ebp-B4h]
  Outpop::Utility::Stream_Base *v217; // [esp+58h] [ebp-ACh]
  int v218; // [esp+60h] [ebp-A4h]
  int v219; // [esp+68h] [ebp-9Ch]
  DWORD v220; // [esp+6Ch] [ebp-98h] BYREF
  int v221; // [esp+70h] [ebp-94h]
  Outpop::Utility::Thread_Mutex *v222[2]; // [esp+74h] [ebp-90h] BYREF
  int v223; // [esp+7Ch] [ebp-88h]
  Outpop::Utility::Lock *v224; // [esp+80h] [ebp-84h]
  Outpop::Utility::Lock *v225; // [esp+84h] [ebp-80h]
  Outpop::Utility::Lock *v226; // [esp+88h] [ebp-7Ch]
  Outpop::Utility::Lock *v227; // [esp+8Ch] [ebp-78h]
  Outpop::Utility::Lock *v228; // [esp+90h] [ebp-74h]
  wchar_t *v229; // [esp+94h] [ebp-70h]
  Outpop::Utility::Lock *v230; // [esp+98h] [ebp-6Ch]
  int v231; // [esp+9Ch] [ebp-68h]
  Outpop::Utility::Lock *v232; // [esp+A0h] [ebp-64h]
  DWORD v233; // [esp+A4h] [ebp-60h]
  DWORD v234; // [esp+A8h] [ebp-5Ch]
  wchar_t *v235; // [esp+ACh] [ebp-58h]
  Outpop::Utility::Lock *v236; // [esp+B0h] [ebp-54h]
  Outpop::Utility::Lock *v237; // [esp+B4h] [ebp-50h]
  DWORD v238; // [esp+B8h] [ebp-4Ch]
  int v239; // [esp+BCh] [ebp-48h]
  Outpop::Utility::Lock *v240; // [esp+C0h] [ebp-44h]
  int v241; // [esp+C4h] [ebp-40h]
  Outpop::Utility::Lock *v242; // [esp+C8h] [ebp-3Ch]
  Outpop::Utility::Lock *v243; // [esp+CCh] [ebp-38h]
  DWORD v244; // [esp+D0h] [ebp-34h]
  Outpop::Utility::Lock *v245; // [esp+D4h] [ebp-30h]
  Outpop::Utility::Lock *v246; // [esp+D8h] [ebp-2Ch]
  DWORD v247; // [esp+DCh] [ebp-28h]
  Outpop::Utility::Lock *v248; // [esp+E0h] [ebp-24h]
  _DWORD v249[5]; // [esp+E4h] [ebp-20h] BYREF
  int v250; // [esp+100h] [ebp-4h]
  Outpop::Utility::Thread_Mutex *v251[2]; // [esp+104h] [ebp+0h] BYREF
  wchar_t *v252; // [esp+10Ch] [ebp+8h]
  int v253; // [esp+110h] [ebp+Ch] BYREF
  int length; // [esp+114h] [ebp+10h]
  signed int v255; // [esp+118h] [ebp+14h]
  Outpop::Utility::Ref_Object *v256; // [esp+11Ch] [ebp+18h] BYREF
  _DWORD v257[2]; // [esp+120h] [ebp+1Ch] BYREF
  wchar_t *v258; // [esp+128h] [ebp+24h]
  _DWORD v259[2]; // [esp+12Ch] [ebp+28h] BYREF
  wchar_t *v260; // [esp+134h] [ebp+30h]
  char v261; // [esp+13Bh] [ebp+37h] BYREF
  wchar_t *v262; // [esp+13Ch] [ebp+38h]
  wchar_t *v263; // [esp+140h] [ebp+3Ch]
  wchar_t *v265; // [esp+148h] [ebp+44h]
  wchar_t *v266; // [esp+14Ch] [ebp+48h]
  char v267[4]; // [esp+150h] [ebp+4Ch] BYREF
  int v268; // [esp+154h] [ebp+50h]
  int v269; // [esp+158h] [ebp+54h]
  int v270; // [esp+15Ch] [ebp+58h]
  LONG v271; // [esp+160h] [ebp+5Ch]
  wchar_t *v272; // [esp+164h] [ebp+60h]
  wchar_t *log_buffer; // [esp+168h] [ebp+64h]
  Outpop::Utility::Ref_Object *v274; // [esp+16Ch] [ebp+68h]
  Outpop::Utility::Stream_Base *v275; // [esp+170h] [ebp+6Ch] BYREF
  unsigned int v276; // [esp+17Ch] [ebp+78h]
  int v277; // [esp+17Ch] [ebp+78h]
  char v278; // [esp+17Fh] [ebp+7Bh]

  v249[4] = &v203;
  v2 = this;
  v274 = this;
  v250 = 0;
  v212 = a2;
  sub_10022840(a2, &v275);
  LOBYTE(v250) = 1;
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
  {
    v214 = Outpop::Utility::Logger::instance();
    v227 = (Outpop::Utility::Lock *)(v214 + 144);
    Outpop::Utility::Lock::lock((Outpop::Utility::Lock *)(v214 + 144));
    LOBYTE(v250) = 2;
    v3 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    log_buffer = Outpop::Utility::Logger::get_log_buffer(v3);
    v4 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_DEBUG");
    v5 = GetLastError;
    LastError = GetLastError();
    CurrentThreadId = GetCurrentThreadId();
    CurrentProcessId = GetCurrentProcessId();
    v6 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    tm = Outpop::Utility::Logger::make_tm(v6);
    v7 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    dt = Outpop::Utility::Logger::make_dt(v7);
    v219 = sub_10007400(
             0xFFFF - v4,
             &log_buffer[v4],
             L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
             dt,
             tm,
             CurrentProcessId,
             CurrentThreadId,
             LastError,
             L"D:\\R3\\OutpopGameProject\\IONetwork\\Channel_Base.cpp",
             460)
         + v4;
    v210 = *((_DWORD *)a2 + 6);
    sub_10007400(
      0xFFFF - v219,
      &log_buffer[v219],
      L"Stream_Channel::handle_read_stream, result  bytes_to_transmit() is %d,channel id is  %d ",
      v210,
      *((_DWORD *)v2 + 28));
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", log_buffer);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v202 = log_buffer;
      v9 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v9);
    }
    LOBYTE(v250) = 1;
    Outpop::Utility::Lock::unlock(v227);
  }
  else
  {
    v5 = GetLastError;
  }
  v10 = Outpop::Utility::Lock::lock;
  v11 = *((_DWORD *)a2 + 11);
  v208 = v11;
  if ( v11 )
  {
    if ( !*((_DWORD *)a2 + 10) )
    {
      *((_DWORD *)v2 + 27) = v11;
      Outpop::IONetwork::Stream_Channel::interiorclose(v2);
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
      {
        v228 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        Outpop::Utility::Lock::lock(v228);
        LOBYTE(v250) = 3;
        v12 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v13 = Outpop::Utility::Logger::get_log_buffer(v12);
        v14 = sub_10007400(0xFFFFu, v13, L"\n%s", L"LOG_DEBUG");
        v189 = v5();
        v179 = GetCurrentThreadId();
        v168 = GetCurrentProcessId();
        v15 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v157 = Outpop::Utility::Logger::make_tm(v15);
        v16 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v17 = Outpop::Utility::Logger::make_dt(v16);
        v18 = sub_10007400(
                0xFFFF - v14,
                &v13[v14],
                L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                v17,
                v157,
                v168,
                v179,
                v189,
                L"D:\\R3\\OutpopGameProject\\IONetwork\\Channel_Base.cpp",
                465);
        sub_10007400(
          0xFFFF - (v18 + v14),
          &v13[v18 + v14],
          L"Stream_Channel::handle_read_stream  result.error() is %d:",
          *((_DWORD *)a2 + 11));
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", v13);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          v19 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v19);
        }
        LOBYTE(v250) = 1;
        Outpop::Utility::Lock::unlock(v228);
      }
      goto LABEL_20;
    }
  }
  v20 = *((_DWORD *)a2 + 6);
  v205 = v20;
  if ( !v20 )
  {
    *((_DWORD *)v2 + 27) = v5();
    Outpop::IONetwork::Stream_Channel::interiorclose(v2);
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
    {
      v226 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      Outpop::Utility::Lock::lock(v226);
      LOBYTE(v250) = 4;
      v21 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v263 = Outpop::Utility::Logger::get_log_buffer(v21);
      v22 = sub_10007400(0xFFFFu, v263, L"\n%s", L"LOG_DEBUG");
      v190 = v5();
      v180 = GetCurrentThreadId();
      v169 = GetCurrentProcessId();
      v23 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v158 = Outpop::Utility::Logger::make_tm(v23);
      v24 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v25 = Outpop::Utility::Logger::make_dt(v24);
      v26 = v263;
      v27 = sub_10007400(
              0xFFFF - v22,
              &v263[v22],
              L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
              v25,
              v158,
              v169,
              v180,
              v190,
              L"D:\\R3\\OutpopGameProject\\IONetwork\\Channel_Base.cpp",
              472);
      sub_10007400(
        0xFFFF - (v27 + v22),
        &v26[v27 + v22],
        L"Stream_Channel::handle_read_stream  result->bytes_to_transmit() == 0 is %d:",
        *((_DWORD *)v2 + 27));
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", v26);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v28 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v28);
      }
      LOBYTE(v250) = 1;
      Outpop::Utility::Lock::unlock(v226);
    }
    goto LABEL_175;
  }
  v218 = v20;
  Outpop::Utility::Stream_Base::move_write_pos(v275, v20);
  v211 = *((_DWORD *)a2 + 6);
  v271 = InterlockedExchangeAdd((volatile LONG *)v2 + 43, v211);
  v217 = v275;
  if ( (int)Outpop::Utility::Stream_Base::get_readable(v275) < 5 )
  {
    v220 = 0;
    sub_10005B30((Outpop::Utility::Ref_Object *)((char *)v2 + 132), v222);
    LOBYTE(v250) = 5;
    if ( v222[1] != (Outpop::Utility::Thread_Mutex *)-1 )
    {
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
      {
        v224 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        Outpop::Utility::Lock::lock(v224);
        LOBYTE(v250) = 6;
        v29 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v272 = Outpop::Utility::Logger::get_log_buffer(v29);
        v30 = sub_10007400(0xFFFFu, v272, L"\n%s", L"LOG_DEBUG");
        v181 = v5();
        v170 = GetCurrentThreadId();
        v159 = GetCurrentProcessId();
        v31 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v151 = Outpop::Utility::Logger::make_tm(v31);
        v32 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v33 = Outpop::Utility::Logger::make_dt(v32);
        v34 = sub_10007400(
                0xFFFF - v30,
                &v272[v30],
                L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                v33,
                v151,
                v159,
                v170,
                v181,
                L"D:\\R3\\OutpopGameProject\\IONetwork\\Channel_Base.cpp",
                487)
            + v30;
        readable = Outpop::Utility::Stream_Base::get_readable(v275);
        sub_10007400(
          0xFFFF - v34,
          &v272[v34],
          L"channe id  %d  is   asynch_receive  10240 - stream->get_readable(),receive size is %d",
          *((_DWORD *)v2 + 28),
          10240 - readable);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", v272);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          v36 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v36);
        }
        LOBYTE(v250) = 5;
        Outpop::Utility::Lock::unlock(v224);
      }
      if ( v2 )
        Outpop::Utility::Ref_Object::addref(v2);
      LOBYTE(v250) = 7;
      v160 = 10240 - Outpop::Utility::Stream_Base::get_readable(v275);
      LOBYTE(v250) = 5;
      if ( sub_100155B0((char *)v2 + 196, &v275, v160, &v220, v2, 0) == -1 )
      {
        *((_DWORD *)v2 + 27) = v5();
        Outpop::IONetwork::Stream_Channel::interiorclose(v2);
        v233 = v5();
        if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
           || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
          && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
        {
          v230 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
          Outpop::Utility::Lock::lock(v230);
          LOBYTE(v250) = 8;
          v37 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v38 = Outpop::Utility::Logger::get_log_buffer(v37);
          v39 = sub_10007400(0xFFFFu, v38, L"\n%s", L"LOG_ERROR");
          v171 = v5();
          v161 = GetCurrentThreadId();
          v152 = GetCurrentProcessId();
          v40 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v146 = Outpop::Utility::Logger::make_tm(v40);
          v41 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v42 = Outpop::Utility::Logger::make_dt(v41);
          v43 = sub_10007400(
                  0xFFFF - v39,
                  &v38[v39],
                  L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                  v42,
                  v146,
                  v152,
                  v161,
                  v171);
          sub_10007400(
            0xFFFF - (v43 + v39),
            &v38[v43 + v39],
            L"Stream_Channel::handle_read_stream  asynch_receive Error:%d",
            v233);
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
            wprintf(L"%s", v38);
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
          {
            v44 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
            Outpop::Utility::Logger::write_file(v44);
          }
          LOBYTE(v250) = 5;
          Outpop::Utility::Lock::unlock(v230);
        }
      }
      LOBYTE(v250) = 1;
      sub_10005B50((int)v222);
      goto LABEL_175;
    }
    LOBYTE(v250) = 1;
    sub_10005B50((int)v222);
LABEL_20:
    LOBYTE(v250) = 0;
    if ( v275 )
      Outpop::Utility::Ref_Object::release(v275);
    return;
  }
  v207 = &v261;
  v268 = 0;
  v269 = 0;
  v270 = 0;
  LOBYTE(v250) = 9;
  if ( !(unsigned __int8)Outpop::IONetwork::Stream_Channel::parse_stream_head(&v275, v267) )
  {
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
    {
      v245 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      Outpop::Utility::Lock::lock(v245);
      LOBYTE(v250) = 10;
      v45 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v260 = Outpop::Utility::Logger::get_log_buffer(v45);
      v46 = sub_10007400(0xFFFFu, v260, L"\n%s", L"LOG_ERROR");
      v182 = v5();
      v172 = GetCurrentThreadId();
      v162 = GetCurrentProcessId();
      v47 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v153 = Outpop::Utility::Logger::make_tm(v47);
      v48 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v49 = Outpop::Utility::Logger::make_dt(v48);
      v50 = v260;
      v51 = sub_10007400(
              0xFFFF - v46,
              &v260[v46],
              L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
              v49,
              v153,
              v162,
              v172,
              v182,
              L"D:\\R3\\OutpopGameProject\\IONetwork\\Channel_Base.cpp",
              502);
      sub_10007400(0xFFFF - (v51 + v46), &v50[v51 + v46], L"parse_stream_head  error  id is  %d", *((_DWORD *)v2 + 28));
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", v50);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v197 = v260;
        v52 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v52);
      }
      LOBYTE(v250) = 9;
      Outpop::Utility::Lock::unlock(v245);
    }
    Outpop::IONetwork::Stream_Channel::interiorclose(v2);
    LOBYTE(v250) = 1;
    sub_1003BA70(v197, v200, v202, v203);
    goto LABEL_20;
  }
  v53 = *((_DWORD *)v2 + 45);
  if ( v53 && *(_BYTE *)(v53 + 120) )
  {
    sub_10005B30((Outpop::Utility::Ref_Object *)((char *)v2 + 132), v251);
    LOBYTE(v250) = 11;
    if ( v251[1] != (Outpop::Utility::Thread_Mutex *)-1 )
    {
      v216 = *((_DWORD *)a2 + 6);
      v271 += v216;
      Outpop::Utility::Time_Value::gettimeofday(v259);
      LOBYTE(v250) = 12;
      v276 = Outpop::Utility::Time_Value::msec((Outpop::Utility::Ref_Object *)((char *)v2 + 164));
      v231 = Outpop::Utility::Time_Value::msec((Outpop::Utility::Time_Value *)v259) - v276;
      *((_DWORD *)v2 + 44) += sub_1000B200((int)v267);
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
      {
        v209 = Outpop::Utility::Logger::instance();
        v243 = (Outpop::Utility::Lock *)(v209 + 144);
        Outpop::Utility::Lock::lock((Outpop::Utility::Lock *)(v209 + 144));
        LOBYTE(v250) = 13;
        v54 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v252 = Outpop::Utility::Logger::get_log_buffer(v54);
        v55 = sub_10007400(0xFFFFu, v252, L"\n%s", L"LOG_DEBUG");
        v183 = v5();
        v173 = GetCurrentThreadId();
        v163 = GetCurrentProcessId();
        v56 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v154 = Outpop::Utility::Logger::make_tm(v56);
        v57 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v58 = Outpop::Utility::Logger::make_dt(v57);
        v223 = sub_10007400(
                 0xFFFF - v55,
                 &v252[v55],
                 L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                 v58,
                 v154,
                 v163,
                 v173,
                 v183,
                 L"D:\\R3\\OutpopGameProject\\IONetwork\\Channel_Base.cpp",
                 520)
             + v55;
        v59 = v252;
        sub_10007400(
          0xFFFF - v223,
          &v252[v223],
          L"Stream_Channel::handle_read_stream  receive_size  is  %d, last_second_receive_packet_size_ is %d",
          v271,
          *((_DWORD *)v2 + 44));
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", v59);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          v197 = v59;
          v60 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v60);
        }
        LOBYTE(v250) = 12;
        Outpop::Utility::Lock::unlock(v243);
      }
      if ( v231 <= 1000 )
        goto LABEL_88;
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
      {
        v215 = Outpop::Utility::Logger::instance();
        v225 = (Outpop::Utility::Lock *)(v215 + 144);
        Outpop::Utility::Lock::lock((Outpop::Utility::Lock *)(v215 + 144));
        LOBYTE(v250) = 14;
        v61 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v62 = Outpop::Utility::Logger::get_log_buffer(v61);
        v206 = v62;
        v63 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v192 = Outpop::Utility::Logger::make_tm(v63);
        v64 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v65 = Outpop::Utility::Logger::make_dt(v64);
        v241 = sub_10007400(0xFFFFu, v62, L"\nLOGINFO %s:%s Message:", v65, v192);
        v193 = Outpop::Utility::Time_Value::usec((Outpop::Utility::Ref_Object *)((char *)v2 + 164));
        v184 = Outpop::Utility::Time_Value::sec((Outpop::Utility::Ref_Object *)((char *)v2 + 164));
        v174 = Outpop::Utility::Time_Value::usec((Outpop::Utility::Time_Value *)v259);
        v66 = Outpop::Utility::Time_Value::sec((Outpop::Utility::Time_Value *)v259);
        sub_10007400(
          0xFFFF - v241,
          &v62[v241],
          L"msec > 1000  tnow  sec is %d,usec is %d, last_receive_stream_time_ sec is %d,usec is %d",
          v66,
          v174,
          v184,
          v193);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", v62);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          v191 = v62;
          v67 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v67);
        }
        LOBYTE(v250) = 12;
        Outpop::Utility::Lock::unlock(v225);
      }
      v68 = *((_DWORD *)v2 + 45);
      if ( v271 <= *(_DWORD *)(v68 + 112) && *((_DWORD *)v2 + 44) <= *(_DWORD *)(v68 + 116) )
      {
        InterlockedExchangeAdd((volatile LONG *)v2 + 43, -*((_DWORD *)v2 + 43));
        *((_DWORD *)v2 + 44) = 0;
        *((_DWORD *)v2 + 41) = v259[0];
        *((_DWORD *)v2 + 42) = v259[1];
LABEL_88:
        LOBYTE(v250) = 11;
        Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)v259);
        LOBYTE(v250) = 9;
        sub_10005B50((int)v251);
        v10 = Outpop::Utility::Lock::lock;
        goto LABEL_89;
      }
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
      {
        v237 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        Outpop::Utility::Lock::lock(v237);
        LOBYTE(v250) = 15;
        v80 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v81 = Outpop::Utility::Logger::get_log_buffer(v80);
        v229 = v81;
        v82 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v187 = Outpop::Utility::Logger::make_tm(v82);
        v83 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v84 = Outpop::Utility::Logger::make_dt(v83);
        v239 = sub_10007400(0xFFFFu, v81, L"\nLOGINFO %s:%s Message:", v84, v187);
        v85 = v229;
        sub_10007400(
          0xFFFF - v239,
          &v229[v239],
          L"Stream_Channel::handle_read_stream  size is  overfllower  channnel  id is %d,last_second_receive_size_ is %d,a"
           "cceptor_   last_second_receive_size_  is %d,",
          *((_DWORD *)v2 + 28),
          *((_DWORD *)v2 + 43),
          *(_DWORD *)(*((_DWORD *)v2 + 45) + 112));
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", v85);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          v177 = v85;
          v86 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v86);
        }
        LOBYTE(v250) = 12;
        Outpop::Utility::Lock::unlock(v237);
      }
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
      {
        v248 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        Outpop::Utility::Lock::lock(v248);
        LOBYTE(v250) = 16;
        v87 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v88 = Outpop::Utility::Logger::get_log_buffer(v87);
        v235 = v88;
        v89 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v176 = Outpop::Utility::Logger::make_tm(v89);
        v90 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v91 = Outpop::Utility::Logger::make_dt(v90);
        v221 = sub_10007400(0xFFFFu, v88, L"\nLOGINFO %s:%s Message:", v91, v176);
        v92 = v235;
        sub_10007400(
          0xFFFF - v221,
          &v235[v221],
          L"Stream_Channel::handle_read_stream  size is  overfllower  channnel  id is %d,last_second_receive_packet_size_ "
           "is %d,acceptor_   last_second_receive_packet_size_  is %d,",
          *((_DWORD *)v2 + 28),
          *((_DWORD *)v2 + 44),
          *(_DWORD *)(*((_DWORD *)v2 + 45) + 116));
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", v92);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          v166 = v92;
          v93 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v93);
        }
        LOBYTE(v250) = 12;
        Outpop::Utility::Lock::unlock(v248);
      }
      Outpop::IONetwork::Stream_Channel::interiorclose(v2);
      LOBYTE(v250) = 11;
      Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)v259);
    }
    LOBYTE(v250) = 9;
    sub_10005B50((int)v251);
    LOBYTE(v250) = 1;
    sub_1003BA70(v166, v177, v191, v197);
    goto LABEL_20;
  }
LABEL_89:
  if ( sub_1000B200((int)v267) )
  {
    memset(&v249[1], 0, 12);
    LOBYTE(v250) = 17;
    sub_10035660(v191, v197);
    while ( 1 )
    {
      sub_10035680();
      if ( !(unsigned __int8)sub_1004A7F0() )
        break;
      v69 = v274;
      if ( *((_BYTE *)v274 + 192) )
      {
        v70 = (Outpop::Utility::Ref_Object *)((char *)v274 + 132);
        Outpop::Utility::Thread_Mutex::acquire((Outpop::Utility::Ref_Object *)((char *)v274 + 132));
        v185 = *((unsigned __int8 *)v69 + 192);
        v175 = *((_DWORD *)v69 + 51);
        v71 = (Outpop::Utility::Stream_Base **)sub_1000B180(v257);
        v278 = Outpop::IONetwork::Security_Processer::unprocess(v71, v175, v185);
        Outpop::Utility::Thread_Mutex::release(v70);
        if ( !v278 )
        {
          v247 = v5();
          if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
             || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
            && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
          {
            v246 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
            Outpop::Utility::Lock::lock(v246);
            LOBYTE(v250) = 18;
            v72 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
            v73 = Outpop::Utility::Logger::get_log_buffer(v72);
            v74 = sub_10007400(0xFFFFu, v73, L"\n%s", L"LOG_ERROR");
            v164 = v5();
            v155 = GetCurrentThreadId();
            v147 = GetCurrentProcessId();
            v75 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
            v141 = Outpop::Utility::Logger::make_tm(v75);
            v76 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
            v77 = Outpop::Utility::Logger::make_dt(v76);
            v78 = sub_10007400(
                    0xFFFF - v74,
                    &v73[v74],
                    L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                    v77,
                    v141,
                    v147,
                    v155,
                    v164,
                    L"D:\\R3\\OutpopGameProject\\IONetwork\\Channel_Base.cpp",
                    557);
            sub_10007400(
              0xFFFF - (v78 + v74),
              &v73[v78 + v74],
              L" Stream_Channel::handle_read_stream  unprocess Error  %d",
              v247);
            if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
              wprintf(L"%s", v73);
            if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
            {
              v177 = v73;
              v79 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
              Outpop::Utility::Logger::write_file(v79);
            }
            LOBYTE(v250) = 17;
            Outpop::Utility::Lock::unlock(v246);
          }
          Outpop::IONetwork::Stream_Channel::interiorclose(v274);
          LOBYTE(v250) = 9;
          sub_1003BA70(v177, v194, v198, v200);
          LOBYTE(v250) = 1;
          sub_1003BA70(v186, v195, v199, v201);
          goto LABEL_20;
        }
      }
      v94 = (_DWORD *)sub_1000B180(v257);
      if ( Outpop::Utility::Binary_Stream::get_packet_type(*v94) )
      {
        sub_1000B180(v257);
      }
      else
      {
        v95 = sub_1000B180(v257);
        sub_1000AC30(v95, v249);
        v5 = GetLastError;
      }
      sub_1000B1B0(v257);
    }
    LOBYTE(v250) = 19;
    v96 = v274;
    v213 = v274;
    Outpop::Utility::Ref_Object::addref(v274);
    LOBYTE(v250) = 20;
    if ( *((_DWORD *)v96 + 29) )
    {
      if ( sub_1000B200((int)v249) )
      {
        v256 = v96;
        Outpop::Utility::Ref_Object::addref(v96);
        LOBYTE(v250) = 21;
        (*(void (__thiscall **)(_DWORD, _DWORD *, Outpop::Utility::Ref_Object **))(**((_DWORD **)v96 + 29) + 4))(
          *((_DWORD *)v96 + 29),
          v249,
          &v256);
        LOBYTE(v250) = 20;
        if ( v256 )
          Outpop::Utility::Ref_Object::release(v256);
      }
    }
    LOBYTE(v250) = 19;
    Outpop::Utility::Ref_Object::release(v96);
    v250 = 9;
    sub_1003BA70(v166, v177, v194, v198);
    v2 = v274;
    v5 = GetLastError;
    v10 = Outpop::Utility::Lock::lock;
  }
  if ( (int)Outpop::Utility::Stream_Base::get_readable(v275) >= 5 )
  {
    v253 = 0;
    length = Outpop::IONetwork::Stream_Protocol_Head_Process::get_length(&v275, &v253);
    if ( !length )
    {
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
      {
        v240 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        v10(v240);
        LOBYTE(v250) = 25;
        v106 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v258 = Outpop::Utility::Logger::get_log_buffer(v106);
        v107 = sub_10007400(0xFFFFu, v258, L"\n%s", L"LOG_ERROR");
        v149 = v5();
        v143 = GetCurrentThreadId();
        v138 = GetCurrentProcessId();
        v108 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v134 = Outpop::Utility::Logger::make_tm(v108);
        v109 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v110 = Outpop::Utility::Logger::make_dt(v109);
        v111 = v258;
        v112 = sub_10007400(
                 0xFFFF - v107,
                 &v258[v107],
                 L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                 v110,
                 v134,
                 v138,
                 v143,
                 v149,
                 L"D:\\R3\\OutpopGameProject\\IONetwork\\Channel_Base.cpp",
                 608);
        sub_10007400(
          0xFFFF - (v112 + v107),
          &v111[v112 + v107],
          L"Stream_Channel::parse_stream_head   data_len error:%d",
          0);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", v111);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          v165 = v258;
          v113 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v113);
        }
        LOBYTE(v250) = 9;
        Outpop::Utility::Lock::unlock(v240);
      }
      goto LABEL_161;
    }
    if ( length + v253 >= 10240 )
    {
      v277 = length + v253;
      v255 = v277 - Outpop::Utility::Stream_Base::get_readable(v275);
      space = Outpop::Utility::Stream_Base::get_space(v275);
      if ( space < v255 + 10 )
        (*(void (__thiscall **)(Outpop::Utility::Stream_Base *, int))(*(_DWORD *)v275 + 16))(v275, length + 2000);
      if ( Outpop::IONetwork::Stream_Channel::asynch_receive((int)v2, &v275, v255, 0) == -1 )
      {
        v234 = v5();
        if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
           || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
          && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
        {
          v232 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
          v10(v232);
          LOBYTE(v250) = 27;
          v124 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v265 = Outpop::Utility::Logger::get_log_buffer(v124);
          v125 = sub_10007400(0xFFFFu, v265, L"\n%s", L"LOG_ERROR");
          v145 = v5();
          v140 = GetCurrentThreadId();
          v136 = GetCurrentProcessId();
          v126 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v132 = Outpop::Utility::Logger::make_tm(v126);
          v127 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v128 = Outpop::Utility::Logger::make_dt(v127);
          v129 = v265;
          v130 = sub_10007400(
                   0xFFFF - v125,
                   &v265[v125],
                   L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                   v128,
                   v132,
                   v136,
                   v140,
                   v145,
                   L"D:\\R3\\OutpopGameProject\\IONetwork\\Channel_Base.cpp",
                   635);
          sub_10007400(
            0xFFFF - (v130 + v125),
            &v129[v130 + v125],
            L"Stream_Channel::parse_stream_head   asynch_receive3   error:%d,channel id is %d",
            v234,
            *((_DWORD *)v2 + 28));
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
            wprintf(L"%s", v129);
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
          {
            v156 = v265;
            v131 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
            Outpop::Utility::Logger::write_file(v131);
          }
          LOBYTE(v250) = 9;
          Outpop::Utility::Lock::unlock(v232);
        }
        Outpop::IONetwork::Stream_Channel::interiorclose(v2);
        LOBYTE(v250) = 1;
        sub_1003BA70(v156, v165, v166, v177);
        goto LABEL_20;
      }
    }
    else
    {
      v114 = Outpop::Utility::Stream_Base::get_readable(v275);
      if ( Outpop::IONetwork::Stream_Channel::asynch_receive((int)v2, &v275, 10240 - v114, 0) == -1 )
      {
        v238 = v5();
        if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
           || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
          && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
        {
          v236 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
          v10(v236);
          LOBYTE(v250) = 26;
          v115 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v266 = Outpop::Utility::Logger::get_log_buffer(v115);
          v116 = sub_10007400(0xFFFFu, v266, L"\n%s", L"LOG_ERROR");
          v150 = v5();
          v144 = GetCurrentThreadId();
          v139 = GetCurrentProcessId();
          v117 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v135 = Outpop::Utility::Logger::make_tm(v117);
          v118 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v119 = Outpop::Utility::Logger::make_dt(v118);
          v120 = v266;
          v121 = sub_10007400(
                   0xFFFF - v116,
                   &v266[v116],
                   L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                   v119,
                   v135,
                   v139,
                   v144,
                   v150,
                   L"D:\\R3\\OutpopGameProject\\IONetwork\\Channel_Base.cpp",
                   618);
          sub_10007400(
            0xFFFF - (v121 + v116),
            &v120[v121 + v116],
            L"Stream_Channel::parse_stream_head   asynch_receive2   error:%d,channel  id  is %d",
            v238,
            *((_DWORD *)v2 + 28));
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
            wprintf(L"%s", v120);
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
          {
            v165 = v266;
            v122 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
            Outpop::Utility::Logger::write_file(v122);
          }
          LOBYTE(v250) = 9;
          Outpop::Utility::Lock::unlock(v236);
        }
        goto LABEL_161;
      }
    }
  }
  else
  {
    v97 = Outpop::Utility::Stream_Base::get_readable(v275);
    if ( Outpop::IONetwork::Stream_Channel::asynch_receive((int)v2, &v275, 10240 - v97, 0) == -1 )
    {
      v244 = v5();
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
      {
        v242 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        v10(v242);
        LOBYTE(v250) = 24;
        v98 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v262 = Outpop::Utility::Logger::get_log_buffer(v98);
        v99 = sub_10007400(0xFFFFu, v262, L"\n%s", L"LOG_ERROR");
        v148 = v5();
        v142 = GetCurrentThreadId();
        v137 = GetCurrentProcessId();
        v100 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v133 = Outpop::Utility::Logger::make_tm(v100);
        v101 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v102 = Outpop::Utility::Logger::make_dt(v101);
        v103 = v262;
        v104 = sub_10007400(
                 0xFFFF - v99,
                 &v262[v99],
                 L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                 v102,
                 v133,
                 v137,
                 v142,
                 v148,
                 L"D:\\R3\\OutpopGameProject\\IONetwork\\Channel_Base.cpp",
                 597);
        sub_10007400(
          0xFFFF - (v104 + v99),
          &v103[v104 + v99],
          L"Stream_Channel::parse_stream_head   asynch_receive1   error:%d,channel id is %d",
          v244,
          *((_DWORD *)v2 + 28));
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", v103);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          v165 = v262;
          v105 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v105);
        }
        LOBYTE(v250) = 9;
        Outpop::Utility::Lock::unlock(v242);
      }
LABEL_161:
      Outpop::IONetwork::Stream_Channel::interiorclose(v2);
      LOBYTE(v250) = 1;
      sub_1003BA70(v165, v166, v177, v191);
      goto LABEL_20;
    }
  }
  LOBYTE(v250) = 1;
  sub_1003BA70(v166, v177, v191, v197);
LABEL_175:
  LOBYTE(v250) = 0;
  if ( v275 )
    Outpop::Utility::Ref_Object::release(v275);
}
