/*
 * func-name: ?OnBegin@UpdateCorpMemberInfoObserver@GameClient@@UAEXAAVEvent@@@Z_0
 * func-address: 0x10204120
 * callers: 0x1000fda8
 * callees: 0x10001406, 0x1000153c, 0x1000260d, 0x10003d82, 0x1000a5a1, 0x1000b8fc, 0x1000de81, 0x10010f82, 0x10014295, 0x1001665d, 0x10016cf2, 0x10017c29, 0x102c9d50, 0x102c9d62, 0x102c9ea8, 0x102c9f53, 0x102ca13e
 */

void __thiscall GameClient::UpdateCorpMemberInfoObserver::OnBegin(
        GameClient::UpdateCorpMemberInfoObserver *this,
        struct Event *a2)
{
  struct BinStream *Stream; // eax
  int v3; // ecx
  int v4; // edx
  unsigned int v5; // ecx
  GameClient::GroupManager *v6; // eax
  CDlgMgr *v7; // eax
  struct CTYDialog *Dialog; // eax
  int v9; // esi
  struct BinStream *v10; // eax
  int v11; // ecx
  _BYTE *v12; // edx
  _DWORD *v13; // ecx
  int v14; // eax
  struct BinStream *v15; // eax
  int v16; // ecx
  struct BinStream *v17; // eax
  int v18; // ecx
  struct BinStream *v19; // eax
  int v20; // ecx
  int v21; // ebx
  struct BinStream *v22; // esi
  int v23; // eax
  size_t v24; // edi
  int v25; // eax
  int v26; // eax
  struct BinStream *v27; // eax
  int v28; // ecx
  int v29; // ecx
  struct BinStream *v30; // eax
  int v31; // ecx
  int v32; // ecx
  int v33; // ecx
  int v34; // ecx
  char *v35; // edx
  void *v36; // edi
  char *v37; // edx
  void *v38; // edi
  char *v39; // esi
  char *v40; // edi
  void *v41; // esi
  char *v42; // edx
  void *v43; // edi
  struct BinStream *v44; // eax
  int v45; // ecx
  int v46; // edx
  int v47; // ecx
  char *v48; // esi
  char *v49; // edi
  int v50; // ebx
  struct BinStream *v51; // esi
  int v52; // eax
  size_t v53; // edi
  int v54; // eax
  int v55; // eax
  struct BinStream *v56; // eax
  int v57; // ecx
  int v58; // ecx
  struct BinStream *v59; // eax
  int v60; // ecx
  int v61; // ecx
  int v62; // ecx
  int v63; // ecx
  char *v64; // esi
  char *v65; // edi
  unsigned int v66; // [esp+0h] [ebp-110h]
  int v67; // [esp+4h] [ebp-10Ch]
  int v68; // [esp+4h] [ebp-10Ch]
  int v69; // [esp+8h] [ebp-108h]
  int v70; // [esp+8h] [ebp-108h]
  int v71; // [esp+18h] [ebp-F8h] BYREF
  int v72; // [esp+1Ch] [ebp-F4h] BYREF
  void *v73; // [esp+20h] [ebp-F0h]
  char *v74; // [esp+24h] [ebp-ECh]
  int v75; // [esp+28h] [ebp-E8h]
  int v76; // [esp+2Ch] [ebp-E4h]
  int v77; // [esp+30h] [ebp-E0h] BYREF
  void *v78; // [esp+34h] [ebp-DCh]
  void *Source; // [esp+38h] [ebp-D8h]
  int v80; // [esp+3Ch] [ebp-D4h]
  int v81; // [esp+40h] [ebp-D0h] BYREF
  void *v82; // [esp+44h] [ebp-CCh]
  void *v83; // [esp+48h] [ebp-C8h]
  int v84; // [esp+4Ch] [ebp-C4h]
  int v85; // [esp+50h] [ebp-C0h] BYREF
  int v86; // [esp+54h] [ebp-BCh]
  int v87; // [esp+58h] [ebp-B8h]
  int v88; // [esp+5Ch] [ebp-B4h] BYREF
  int v89; // [esp+60h] [ebp-B0h] BYREF
  void *v90; // [esp+64h] [ebp-ACh]
  int v91; // [esp+68h] [ebp-A8h]
  int v92; // [esp+6Ch] [ebp-A4h]
  int v93[2]; // [esp+70h] [ebp-A0h] BYREF
  int v94; // [esp+78h] [ebp-98h] BYREF
  int v95; // [esp+80h] [ebp-90h] BYREF
  _BYTE v96[28]; // [esp+84h] [ebp-8Ch] BYREF
  float v97; // [esp+A0h] [ebp-70h]
  float v98; // [esp+A4h] [ebp-6Ch]
  float v99; // [esp+A8h] [ebp-68h]
  float v100; // [esp+ACh] [ebp-64h]
  float v101; // [esp+B0h] [ebp-60h]
  int v102; // [esp+B4h] [ebp-5Ch]
  float v103; // [esp+B8h] [ebp-58h]
  float v104; // [esp+BCh] [ebp-54h]
  float v105; // [esp+C0h] [ebp-50h]
  float v106; // [esp+C4h] [ebp-4Ch]
  _BYTE v107[28]; // [esp+C8h] [ebp-48h] BYREF
  _BYTE v108[28]; // [esp+E4h] [ebp-2Ch] BYREF
  int v109; // [esp+10Ch] [ebp-4h]

  Stream = Event::GetStream(a2);
  v3 = *((_DWORD *)Stream + 3);
  v4 = v3 + 4;
  if ( (unsigned int)(v3 + 4) > *((_DWORD *)Stream + 2) )
  {
    v5 = v76;
  }
  else
  {
    v5 = *(_DWORD *)(v3 + *((_DWORD *)Stream + 1));
    *((_DWORD *)Stream + 3) = v4;
  }
  v66 = v5;
  v6 = GameClient::GroupManager::Instance();
  GameClient::GroupManager::UpdateCommando(v6, v66);
  v7 = (CDlgMgr *)CDlgMgr::Instance();
  Dialog = CDlgMgr::GetDialog(v7);
  v76 = _RTDynamicCast(Dialog, 0, &CTYDialog `RTTI Type Descriptor', &CSelfCorpUI `RTTI Type Descriptor', 0);
  v9 = 0;
  v10 = Event::GetStream(a2);
  v11 = *((_DWORD *)v10 + 3);
  if ( (unsigned int)(v11 + 4) <= *((_DWORD *)v10 + 2) )
  {
    v9 = *(_DWORD *)(v11 + *((_DWORD *)v10 + 1));
    *((_DWORD *)v10 + 3) = v11 + 4;
  }
  v90 = 0;
  v91 = 0;
  v92 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v109 = 2;
  v78 = 0;
  Source = 0;
  v80 = 0;
  v82 = 0;
  v83 = 0;
  v84 = 0;
  if ( v9 > 0 )
  {
    v87 = v9;
    do
    {
      v15 = Event::GetStream(a2);
      v16 = *((_DWORD *)v15 + 3);
      if ( (unsigned int)(v16 + 4) <= *((_DWORD *)v15 + 2) )
      {
        v85 = *(_DWORD *)(v16 + *((_DWORD *)v15 + 1));
        *((_DWORD *)v15 + 3) = v16 + 4;
      }
      if ( v85 != -1 )
      {
        v73 = 0;
        v74 = 0;
        v75 = 0;
        LOBYTE(v109) = 3;
        v17 = Event::GetStream(a2);
        v18 = *((_DWORD *)v17 + 3);
        if ( (unsigned int)(v18 + 4) <= *((_DWORD *)v17 + 2) )
        {
          v88 = *(_DWORD *)(v18 + *((_DWORD *)v17 + 1));
          *((_DWORD *)v17 + 3) = v18 + 4;
        }
        v19 = Event::GetStream(a2);
        v20 = *((_DWORD *)v19 + 3);
        if ( (unsigned int)(v20 + 4) <= *((_DWORD *)v19 + 2) )
        {
          v86 = *(_DWORD *)(v20 + *((_DWORD *)v19 + 1));
          *((_DWORD *)v19 + 3) = v20 + 4;
        }
        if ( v86 > 0 )
        {
          v21 = v86;
          do
          {
            std::string::string(v96);
            v104 = 0.0;
            v105 = 0.0;
            LOBYTE(v109) = 4;
            v106 = 0.0;
            std::wstring::wstring(v107);
            LOBYTE(v109) = 5;
            std::wstring::wstring(v108);
            LOBYTE(v109) = 6;
            v22 = Event::GetStream(a2);
            v23 = *((_DWORD *)v22 + 3);
            if ( (unsigned int)(v23 + 4) <= *((_DWORD *)v22 + 2) )
            {
              v95 = *(_DWORD *)(v23 + *((_DWORD *)v22 + 1));
              *((_DWORD *)v22 + 3) += 4;
            }
            v24 = sub_10003D82();
            v25 = *((_DWORD *)v22 + 3);
            if ( v25 + v24 <= *((_DWORD *)v22 + 2) )
            {
              memcpy(byte_103B6158, (const void *)(v25 + *((_DWORD *)v22 + 1)), v24);
              byte_103B6158[v24] = 0;
              std::string::operator=(v96, byte_103B6158);
              *((_DWORD *)v22 + 3) += v24;
            }
            v26 = *((_DWORD *)v22 + 3);
            if ( (unsigned int)(v26 + 1) <= *((_DWORD *)v22 + 2) )
            {
              LOBYTE(v102) = *(_BYTE *)(v26 + *((_DWORD *)v22 + 1));
              ++*((_DWORD *)v22 + 3);
            }
            if ( (_BYTE)v102 )
            {
              v27 = Event::GetStream(a2);
              v28 = *((_DWORD *)v27 + 3);
              if ( (unsigned int)(v28 + 4) <= *((_DWORD *)v27 + 2) )
              {
                v103 = *(float *)(v28 + *((_DWORD *)v27 + 1));
                *((_DWORD *)v27 + 3) += 4;
              }
              v29 = *((_DWORD *)v27 + 3);
              if ( (unsigned int)(v29 + 4) <= *((_DWORD *)v27 + 2) )
              {
                v97 = *(float *)(v29 + *((_DWORD *)v27 + 1));
                *((_DWORD *)v27 + 3) += 4;
              }
              if ( LODWORD(v97) != -1 )
              {
                v30 = Event::GetStream(a2);
                v31 = *((_DWORD *)v30 + 3);
                if ( (unsigned int)(v31 + 4) <= *((_DWORD *)v30 + 2) )
                {
                  v98 = *(float *)(v31 + *((_DWORD *)v30 + 1));
                  *((_DWORD *)v30 + 3) += 4;
                }
                v32 = *((_DWORD *)v30 + 3);
                if ( (unsigned int)(v32 + 4) <= *((_DWORD *)v30 + 2) )
                {
                  v99 = *(float *)(v32 + *((_DWORD *)v30 + 1));
                  *((_DWORD *)v30 + 3) += 4;
                }
                v33 = *((_DWORD *)v30 + 3);
                if ( (unsigned int)(v33 + 4) <= *((_DWORD *)v30 + 2) )
                {
                  v100 = *(float *)(v33 + *((_DWORD *)v30 + 1));
                  *((_DWORD *)v30 + 3) += 4;
                }
                v34 = *((_DWORD *)v30 + 3);
                if ( (unsigned int)(v34 + 4) <= *((_DWORD *)v30 + 2) )
                {
                  v101 = *(float *)(v34 + *((_DWORD *)v30 + 1));
                  *((_DWORD *)v30 + 3) += 4;
                }
              }
            }
            sub_10010F82((int)&v95);
            LOBYTE(v109) = 8;
            std::wstring::~wstring(v108);
            LOBYTE(v109) = 7;
            std::wstring::~wstring(v107);
            LOBYTE(v109) = 3;
            std::string::~string(v96);
            --v21;
          }
          while ( v21 );
        }
        sub_1000260D(&v89, &v72);
        v35 = (char *)Source;
        if ( v78 && ((_BYTE *)Source - (_BYTE *)v78) >> 2 < (unsigned int)((v80 - (int)v78) >> 2) )
        {
          *(_DWORD *)Source = v85;
          Source = v35 + 4;
        }
        else
        {
          v36 = Source;
          if ( v78 > Source )
            _invalid_parameter_noinfo();
          sub_1000A5A1((int)&v94, (int)&v77, v36, (int)&v85);
        }
        v37 = (char *)v83;
        if ( v82 && ((_BYTE *)v83 - (_BYTE *)v82) >> 2 < (unsigned int)((v84 - (int)v82) >> 2) )
        {
          *(_DWORD *)v83 = v88;
          v83 = v37 + 4;
        }
        else
        {
          v38 = v83;
          if ( v82 > v83 )
            _invalid_parameter_noinfo();
          sub_1000A5A1((int)v93, (int)&v81, v38, (int)&v88);
        }
        v39 = (char *)v73;
        LOBYTE(v109) = 2;
        if ( v73 )
        {
          v40 = v74;
          v71 = (int)v73;
          if ( v73 != v74 )
          {
            do
            {
              LOBYTE(v109) = 10;
              std::wstring::~wstring(v39 + 100);
              LOBYTE(v109) = 9;
              std::wstring::~wstring(v39 + 72);
              LOBYTE(v109) = 2;
              std::string::~string(v39 + 4);
              v39 += 128;
              v71 = (int)v39;
            }
            while ( v39 != v40 );
            v39 = (char *)v73;
          }
          operator delete(v39);
        }
        v73 = 0;
        v74 = 0;
        v75 = 0;
      }
      --v87;
    }
    while ( v87 );
    v14 = v80;
    v13 = Source;
    v12 = v78;
  }
  v71 = 0;
  if ( v12 && ((char *)v13 - v12) >> 2 < (unsigned int)((v14 - (int)v12) >> 2) )
  {
    *v13 = 0;
    Source = v13 + 1;
  }
  else
  {
    v41 = v13;
    if ( v12 > (_BYTE *)v13 )
      _invalid_parameter_noinfo();
    sub_1000A5A1((int)v93, (int)&v77, v41, (int)&v71);
  }
  v42 = (char *)v83;
  v71 = 0;
  if ( v82 && ((_BYTE *)v83 - (_BYTE *)v82) >> 2 < (unsigned int)((v84 - (int)v82) >> 2) )
  {
    *(_DWORD *)v83 = 0;
    v83 = v42 + 4;
  }
  else
  {
    v43 = v83;
    if ( v82 > v83 )
      _invalid_parameter_noinfo();
    sub_1000A5A1((int)v93, (int)&v81, v43, (int)&v71);
  }
  v44 = Event::GetStream(a2);
  v45 = *((_DWORD *)v44 + 3);
  v46 = v45 + 4;
  if ( (unsigned int)(v45 + 4) > *((_DWORD *)v44 + 2) )
  {
    v47 = v76;
  }
  else
  {
    v47 = *(_DWORD *)(v45 + *((_DWORD *)v44 + 1));
    *((_DWORD *)v44 + 3) = v46;
  }
  if ( v47 )
  {
    v73 = 0;
    v74 = 0;
    v75 = 0;
    LOBYTE(v109) = 15;
    if ( v47 > 0 )
    {
      v50 = v47;
      do
      {
        std::string::string(v96);
        v104 = 0.0;
        v105 = 0.0;
        LOBYTE(v109) = 16;
        v106 = 0.0;
        std::wstring::wstring(v107);
        LOBYTE(v109) = 17;
        std::wstring::wstring(v108);
        LOBYTE(v109) = 18;
        v51 = Event::GetStream(a2);
        v52 = *((_DWORD *)v51 + 3);
        if ( (unsigned int)(v52 + 4) <= *((_DWORD *)v51 + 2) )
        {
          v95 = *(_DWORD *)(v52 + *((_DWORD *)v51 + 1));
          *((_DWORD *)v51 + 3) += 4;
        }
        v53 = sub_10003D82();
        v54 = *((_DWORD *)v51 + 3);
        if ( v54 + v53 <= *((_DWORD *)v51 + 2) )
        {
          memcpy(byte_103B6158, (const void *)(v54 + *((_DWORD *)v51 + 1)), v53);
          byte_103B6158[v53] = 0;
          std::string::operator=(v96, byte_103B6158);
          *((_DWORD *)v51 + 3) += v53;
        }
        v55 = *((_DWORD *)v51 + 3);
        if ( (unsigned int)(v55 + 1) <= *((_DWORD *)v51 + 2) )
        {
          LOBYTE(v102) = *(_BYTE *)(v55 + *((_DWORD *)v51 + 1));
          ++*((_DWORD *)v51 + 3);
        }
        if ( (_BYTE)v102 )
        {
          v56 = Event::GetStream(a2);
          v57 = *((_DWORD *)v56 + 3);
          if ( (unsigned int)(v57 + 4) <= *((_DWORD *)v56 + 2) )
          {
            v103 = *(float *)(v57 + *((_DWORD *)v56 + 1));
            *((_DWORD *)v56 + 3) += 4;
          }
          v58 = *((_DWORD *)v56 + 3);
          if ( (unsigned int)(v58 + 4) <= *((_DWORD *)v56 + 2) )
          {
            v97 = *(float *)(v58 + *((_DWORD *)v56 + 1));
            *((_DWORD *)v56 + 3) += 4;
          }
          if ( LODWORD(v97) != -1 )
          {
            v59 = Event::GetStream(a2);
            v60 = *((_DWORD *)v59 + 3);
            if ( (unsigned int)(v60 + 4) <= *((_DWORD *)v59 + 2) )
            {
              v98 = *(float *)(v60 + *((_DWORD *)v59 + 1));
              *((_DWORD *)v59 + 3) += 4;
            }
            v61 = *((_DWORD *)v59 + 3);
            if ( (unsigned int)(v61 + 4) <= *((_DWORD *)v59 + 2) )
            {
              v99 = *(float *)(v61 + *((_DWORD *)v59 + 1));
              *((_DWORD *)v59 + 3) += 4;
            }
            v62 = *((_DWORD *)v59 + 3);
            if ( (unsigned int)(v62 + 4) <= *((_DWORD *)v59 + 2) )
            {
              v100 = *(float *)(v62 + *((_DWORD *)v59 + 1));
              *((_DWORD *)v59 + 3) += 4;
            }
            v63 = *((_DWORD *)v59 + 3);
            if ( (unsigned int)(v63 + 4) <= *((_DWORD *)v59 + 2) )
            {
              v101 = *(float *)(v63 + *((_DWORD *)v59 + 1));
              *((_DWORD *)v59 + 3) += 4;
            }
          }
        }
        sub_10010F82((int)&v95);
        LOBYTE(v109) = 20;
        std::wstring::~wstring(v108);
        LOBYTE(v109) = 19;
        std::wstring::~wstring(v107);
        LOBYTE(v109) = 15;
        std::string::~string(v96);
        --v50;
      }
      while ( v50 );
    }
    sub_1000260D(&v89, &v72);
    v64 = (char *)v73;
    LOBYTE(v109) = 2;
    if ( v73 )
    {
      v65 = v74;
      v71 = (int)v73;
      if ( v73 != v74 )
      {
        do
        {
          LOBYTE(v109) = 22;
          std::wstring::~wstring(v64 + 100);
          LOBYTE(v109) = 21;
          std::wstring::~wstring(v64 + 72);
          LOBYTE(v109) = 2;
          std::string::~string(v64 + 4);
          v64 += 128;
          v71 = (int)v64;
        }
        while ( v64 != v65 );
        v64 = (char *)v73;
      }
      operator delete(v64);
    }
    v73 = 0;
    v74 = 0;
    v75 = 0;
  }
  else
  {
    sub_1000DE81(v67, v69);
    v73 = 0;
    v74 = 0;
    v75 = 0;
    LOBYTE(v109) = 12;
    sub_1000260D(&v89, &v72);
    v48 = (char *)v73;
    if ( v73 )
    {
      v49 = v74;
      v71 = (int)v73;
      if ( v73 != v74 )
      {
        do
        {
          LOBYTE(v109) = 14;
          std::wstring::~wstring(v48 + 100);
          LOBYTE(v109) = 13;
          std::wstring::~wstring(v48 + 72);
          LOBYTE(v109) = 11;
          std::string::~string(v48 + 4);
          v48 += 128;
          v71 = (int)v48;
        }
        while ( v48 != v49 );
        v48 = (char *)v73;
      }
      operator delete(v48);
    }
    v73 = 0;
    v74 = 0;
    v75 = 0;
    LOBYTE(v109) = 2;
    sub_10016CF2(v68, v70);
  }
  if ( v76 )
    sub_1000B8FC((int)&v77, (int)&v81, (int)&v89);
  if ( (`GameClient::GroupManager::Instance'::`2'::`local static guard' & 1) == 0 )
  {
    `GameClient::GroupManager::Instance'::`2'::`local static guard' |= 1u;
    LOBYTE(v109) = 23;
    GameClient::GroupManager::GroupManager((GameClient::GroupManager *)&`GameClient::GroupManager::Instance'::`2'::gm);
    atexit(sub_1000D373);
    LOBYTE(v109) = 2;
  }
  GameClient::GroupManager::UpdateCorpMemberInfo((int)&v89);
  if ( v82 )
    operator delete(v82);
  v82 = 0;
  v83 = 0;
  v84 = 0;
  if ( v78 )
    operator delete(v78);
  v78 = 0;
  Source = 0;
  v80 = 0;
  v109 = -1;
  if ( v90 )
  {
    sub_1000153C((int)v90, v91);
    operator delete(v90);
  }
}
