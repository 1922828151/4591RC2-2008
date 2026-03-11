/*
 * func-name: sub_10046860
 * func-address: 0x10046860
 * callers: 0x100440d0
 * callees: 0x10007400, 0x10009930, 0x10009a30, 0x100246d0, 0x100356a0, 0x10035b20, 0x1003da30, 0x100493d0, 0x10049970, 0x1004e870
 */

Outpop::Utility::Binary_Stream **__stdcall sub_10046860(int a1, Outpop::Utility::Binary_Stream **a2, int a3)
{
  int v3; // edi
  int v4; // ebx
  Outpop::Utility::Binary_Stream *v5; // eax
  int *v6; // esi
  bool v7; // al
  Outpop::Utility::Binary_Stream **v8; // ebp
  int v9; // esi
  bool v10; // cc
  unsigned __int16 reliable_id; // ax
  unsigned __int16 *v12; // esi
  unsigned __int16 v13; // ax
  unsigned __int16 v14; // si
  unsigned __int16 v15; // dx
  unsigned __int16 v16; // di
  bool v17; // al
  int v18; // esi
  Outpop::Utility::Lock *v19; // ebx
  Outpop::Utility::Logger *v20; // eax
  wchar_t *v21; // edi
  int v22; // esi
  Outpop::Utility::Logger *v23; // eax
  Outpop::Utility::Logger *v24; // eax
  wchar_t *v25; // eax
  int v26; // esi
  Outpop::Utility::Binary_Stream *v27; // ecx
  unsigned __int16 v28; // ax
  Outpop::Utility::Logger *v29; // eax
  int *v30; // eax
  int v31; // ebp
  int v32; // edi
  int v33; // eax
  Outpop::Utility::Binary_Stream *v34; // esi
  int v35; // ebp
  int *v36; // ebx
  int v37; // esi
  Outpop::Utility::Lock *v38; // ebp
  Outpop::Utility::Logger *v39; // eax
  wchar_t *log_buffer; // esi
  Outpop::Utility::Logger *v41; // eax
  Outpop::Utility::Logger *v42; // eax
  wchar_t *dt; // eax
  int v44; // edi
  Outpop::Utility::Logger *v45; // eax
  Outpop::Utility::Lock *v46; // ebx
  Outpop::Utility::Logger *v47; // eax
  wchar_t *v48; // edi
  int v49; // esi
  Outpop::Utility::Logger *v50; // eax
  Outpop::Utility::Logger *v51; // eax
  wchar_t *v52; // eax
  int v53; // eax
  Outpop::Utility::Logger *v54; // eax
  wchar_t *v56; // [esp-18h] [ebp-B0h]
  wchar_t *v57; // [esp-18h] [ebp-B0h]
  DWORD v58; // [esp-14h] [ebp-ACh]
  DWORD CurrentProcessId; // [esp-14h] [ebp-ACh]
  DWORD v60; // [esp-10h] [ebp-A8h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-A8h]
  DWORD v62; // [esp-Ch] [ebp-A4h]
  DWORD LastError; // [esp-Ch] [ebp-A4h]
  wchar_t *tm; // [esp-4h] [ebp-9Ch]
  char v65; // [esp+1Bh] [ebp-7Dh] BYREF
  int *v66; // [esp+1Ch] [ebp-7Ch]
  Outpop::Utility::Binary_Stream **v67; // [esp+20h] [ebp-78h] BYREF
  int v68; // [esp+24h] [ebp-74h]
  Outpop::Utility::Lock *v69; // [esp+28h] [ebp-70h]
  int i; // [esp+2Ch] [ebp-6Ch]
  Outpop::Utility::Thread_Mutex *v71; // [esp+34h] [ebp-64h]
  int v72; // [esp+38h] [ebp-60h]
  int v73; // [esp+3Ch] [ebp-5Ch] BYREF
  int v74; // [esp+40h] [ebp-58h]
  int v75; // [esp+44h] [ebp-54h] BYREF
  _DWORD v76[2]; // [esp+4Ch] [ebp-4Ch] BYREF
  __int16 v77; // [esp+54h] [ebp-44h]
  _DWORD v78[2]; // [esp+58h] [ebp-40h] BYREF
  __int16 v79; // [esp+60h] [ebp-38h] BYREF
  _DWORD v80[2]; // [esp+64h] [ebp-34h] BYREF
  _BYTE v81[12]; // [esp+6Ch] [ebp-2Ch] BYREF
  int v82; // [esp+78h] [ebp-20h] BYREF
  unsigned int v83; // [esp+7Ch] [ebp-1Ch]
  unsigned __int16 *v84; // [esp+80h] [ebp-18h]
  int v85; // [esp+84h] [ebp-14h]
  int v86; // [esp+94h] [ebp-4h]

  v3 = a3;
  v4 = a1;
  v68 = 0;
  v5 = (Outpop::Utility::Binary_Stream *)Outpop::Utility::Binary_Stream::operator new(0x48u);
  v6 = (int *)v5;
  v67 = (Outpop::Utility::Binary_Stream **)v5;
  v86 = 1;
  if ( v5 )
  {
    Outpop::Utility::Binary_Stream::Binary_Stream(v5, 1000);
    *v6 = (int)&Outpop::Utility::Binary_Stream::`vftable';
  }
  else
  {
    v6 = 0;
  }
  v66 = v6;
  LOBYTE(v86) = 0;
  v65 = 5;
  sub_10009930(v6, &v65);
  v83 = 0;
  v84 = 0;
  v85 = 0;
  v86 = 2;
  v71 = (Outpop::Utility::Thread_Mutex *)(a1 + 52);
  v72 = 0;
  v7 = Outpop::Utility::Thread_Mutex::acquire((Outpop::Utility::Thread_Mutex *)(a1 + 52));
  v72 = v7 - 1;
  LOBYTE(v86) = 3;
  if ( v7 )
  {
    v8 = *(Outpop::Utility::Binary_Stream ***)(a3 + 4);
    if ( (unsigned int)v8 > *(_DWORD *)(a3 + 8) )
      invalid_parameter_noinfo();
    v9 = a3;
    for ( i = a3; ; v9 = i )
    {
      while ( 1 )
      {
        v10 = *(_DWORD *)(v3 + 4) <= *(_DWORD *)(v3 + 8);
        v67 = *(Outpop::Utility::Binary_Stream ***)(v3 + 8);
        if ( !v10 )
          invalid_parameter_noinfo();
        if ( !v9 || v9 != v3 )
          invalid_parameter_noinfo();
        if ( v8 == v67 )
        {
          while ( *(_DWORD *)(v4 + 88) )
          {
            v67 = (Outpop::Utility::Binary_Stream **)(unsigned __int16)(*(_WORD *)(v4 + 148) + 1);
            sub_1003DA30((_DWORD *)(v4 + 76), &v73, &v67);
            v31 = v73;
            v32 = *(_DWORD *)(v4 + 84);
            if ( !v73 || v73 != v4 + 80 )
              invalid_parameter_noinfo();
            v33 = v74;
            if ( v74 == v32 )
              break;
            ++*(_WORD *)(v4 + 148);
            sub_10049970(v76, v31, v33);
          }
          v34 = (Outpop::Utility::Binary_Stream *)v66;
          sub_10035B20((int)&v82, (int)v66);
          if ( *(_DWORD *)(v4 + 88) )
          {
            v35 = a1;
            v36 = **(int ***)(a1 + 84);
            v37 = a1 + 80;
            while ( v36 != *(int **)(v37 + 4) )
            {
              if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
                 || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
                && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
              {
                v38 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
                v69 = v38;
                Outpop::Utility::Lock::lock(v38);
                LOBYTE(v86) = 16;
                v39 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
                log_buffer = Outpop::Utility::Logger::get_log_buffer(v39);
                v41 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
                tm = Outpop::Utility::Logger::make_tm(v41);
                v42 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
                dt = Outpop::Utility::Logger::make_dt(v42);
                v44 = sub_10007400(0xFFFFu, log_buffer, L"\nLOGINFO %s:%s Message:", dt, tm);
                if ( v36 == *(int **)(a1 + 84) )
                  invalid_parameter_noinfo();
                sub_10007400(
                  0xFFFF - v44,
                  &log_buffer[v44],
                  L"reliab_up_stream_hash_map_   have   stream, id  is %d",
                  *((unsigned __int16 *)v36 + 4));
                if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
                  wprintf(L"%s", log_buffer);
                if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
                {
                  v45 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
                  Outpop::Utility::Logger::write_file(v45);
                }
                LOBYTE(v86) = 3;
                Outpop::Utility::Lock::unlock(v38);
                v35 = a1;
              }
              v37 = v35 + 80;
              if ( v36 == *(int **)(v35 + 84) )
                invalid_parameter_noinfo();
              v36 = (int *)*v36;
            }
            v67 = (Outpop::Utility::Binary_Stream **)(unsigned __int16)(*(_WORD *)(v35 + 148) + 1);
            if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
               || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
              && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
            {
              v46 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
              v69 = v46;
              Outpop::Utility::Lock::lock(v46);
              LOBYTE(v86) = 17;
              v47 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
              v48 = Outpop::Utility::Logger::get_log_buffer(v47);
              v49 = sub_10007400(0xFFFFu, v48, L"\n%s", L"LOG_DEBUG");
              LastError = GetLastError();
              CurrentThreadId = GetCurrentThreadId();
              CurrentProcessId = GetCurrentProcessId();
              v50 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
              v57 = Outpop::Utility::Logger::make_tm(v50);
              v51 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
              v52 = Outpop::Utility::Logger::make_dt(v51);
              v53 = sub_10007400(
                      0xFFFF - v49,
                      &v48[v49],
                      L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                      v52,
                      v57,
                      CurrentProcessId,
                      CurrentThreadId,
                      LastError,
                      L"d:\\r3\\outpopgameproject\\ionetwork\\P2PReliable_Container.h",
                      202);
              sub_10007400(
                0xFFFF - (v53 + v49),
                &v48[v53 + v49],
                L"Reliable_Container::make_stream_ack want to requst stream id is %d",
                (unsigned __int16)v67);
              if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
                wprintf(L"%s", v48);
              if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
              {
                v54 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
                Outpop::Utility::Logger::write_file(v54);
              }
              LOBYTE(v86) = 3;
              Outpop::Utility::Lock::unlock(v46);
            }
            v34 = (Outpop::Utility::Binary_Stream *)v66;
            sub_10009A30(v66, (const char *)&v67);
          }
          Outpop::Utility::Binary_Stream::sequence(v34, 2);
          Outpop::Utility::Binary_Stream::set_reliable(v34, 0);
          *a2 = v34;
          if ( v34 )
            Outpop::Utility::Ref_Object::addref(v34);
          v68 = 1;
          LOBYTE(v86) = 2;
          v72 = -1;
          Outpop::Utility::Thread_Mutex::release(v71);
          LOBYTE(v86) = 0;
          if ( v83 )
            operator delete(v83);
          v83 = 0;
          v84 = 0;
          v85 = 0;
          return a2;
        }
        if ( !v9 )
          invalid_parameter_noinfo();
        if ( (unsigned int)v8 >= *(_DWORD *)(v9 + 8) )
          invalid_parameter_noinfo();
        reliable_id = Outpop::Utility::Binary_Stream::get_reliable_id(*v8);
        v12 = v84;
        v67 = (Outpop::Utility::Binary_Stream **)reliable_id;
        if ( v83 && (int)((int)v84 - v83) >> 1 < (unsigned int)((int)(v85 - v83) >> 1) )
        {
          *v84 = reliable_id;
          v84 = v12 + 1;
        }
        else
        {
          if ( v83 > (unsigned int)v84 )
            invalid_parameter_noinfo();
          sub_100356A0((int)&v82, &v75, (int)&v67, (int)&v82, v12);
        }
        if ( (unsigned int)v8 >= *(_DWORD *)(i + 8) )
          invalid_parameter_noinfo();
        v13 = Outpop::Utility::Binary_Stream::get_reliable_id(*v8);
        v14 = *(_WORD *)(v4 + 148);
        v15 = v13 <= v14 ? v14 - v13 : v13 - v14;
        if ( v15 )
          break;
LABEL_35:
        v18 = v14 + 1;
        if ( (unsigned int)v8 >= *(_DWORD *)(i + 8) )
          invalid_parameter_noinfo();
        if ( v18 == (unsigned __int16)Outpop::Utility::Binary_Stream::get_reliable_id(*v8) )
        {
          ++*(_WORD *)(v4 + 148);
        }
        else
        {
          Outpop::Utility::Time_Value::Time_Value((Outpop::Utility::Time_Value *)&v73);
          LOBYTE(v86) = 5;
          if ( (unsigned int)v8 >= *(_DWORD *)(i + 8) )
            invalid_parameter_noinfo();
          v77 = Outpop::Utility::Binary_Stream::get_reliable_id(*v8);
          v78[0] = v73;
          v78[1] = v74;
          v79 = v77;
          v80[0] = v73;
          v80[1] = v74;
          LOBYTE(v86) = 9;
          sub_100493D0(v4 + 76, v81, &v79);
          v67 = (Outpop::Utility::Binary_Stream **)v80;
          LOBYTE(v86) = 7;
          Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)v80);
          v67 = (Outpop::Utility::Binary_Stream **)v78;
          LOBYTE(v86) = 5;
          Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)v78);
          LOBYTE(v86) = 3;
          Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)&v73);
        }
        if ( (unsigned int)v8 >= *(_DWORD *)(i + 8) )
          invalid_parameter_noinfo();
        v9 = i;
        v3 = a3;
        ++v8;
      }
      v16 = *(_WORD *)(v4 + 150);
      if ( v15 <= v16 )
      {
        if ( v15 >= v16 )
          goto LABEL_45;
        v17 = v13 > v14;
      }
      else
      {
        v17 = v13 < v14;
      }
      if ( v17 )
        goto LABEL_35;
LABEL_45:
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
      {
        v19 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        v69 = v19;
        Outpop::Utility::Lock::lock(v19);
        LOBYTE(v86) = 15;
        v20 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v21 = Outpop::Utility::Logger::get_log_buffer(v20);
        v22 = sub_10007400(0xFFFFu, v21, L"\n%s", L"LOG_DEBUG");
        v62 = GetLastError();
        v60 = GetCurrentThreadId();
        v58 = GetCurrentProcessId();
        v23 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v56 = Outpop::Utility::Logger::make_tm(v23);
        v24 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v25 = Outpop::Utility::Logger::make_dt(v24);
        v26 = sub_10007400(
                0xFFFF - v22,
                &v21[v22],
                L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                v25,
                v56,
                v58,
                v60,
                v62,
                L"d:\\r3\\outpopgameproject\\ionetwork\\P2PReliable_Container.h",
                172)
            + v22;
        if ( (unsigned int)v8 >= *(_DWORD *)(i + 8) )
          invalid_parameter_noinfo();
        v27 = *v8;
        v67 = *(Outpop::Utility::Binary_Stream ***)(*(_DWORD *)(a1 + 144) + 112);
        v28 = Outpop::Utility::Binary_Stream::get_reliable_id(v27);
        sub_10007400(
          0xFFFF - v26,
          &v21[v26],
          L"channel   %d  Reliable_Container::make_stream_ack  pakcet is  resend  id  is   %d",
          v67,
          v28);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", v21);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          v29 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v29);
        }
        LOBYTE(v86) = 3;
        Outpop::Utility::Lock::unlock(v19);
        v4 = a1;
      }
      v30 = sub_100246D0(a3, v76, i, v8);
      v8 = (Outpop::Utility::Binary_Stream **)v30[1];
      v3 = a3;
      i = *v30;
    }
  }
  *a2 = 0;
  v68 = 1;
  LOBYTE(v86) = 0;
  if ( v83 )
    operator delete(v83);
  return a2;
}
