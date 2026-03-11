/*
 * func-name: ?OnEstabStateChange@CStatusUI@@QAEXXZ_0
 * func-address: 0x1028ea10
 * callers: 0x10017413
 * callees: 0x1000290a, 0x10007d8d, 0x1000b5be, 0x1000c07c, 0x1000d6f7, 0x1000dafd, 0x1000f673, 0x10017c88, 0x10018ac5, 0x102c7190, 0x102c8d6c, 0x102c9d98, 0x102c9f53
 */

void __thiscall CStatusUI::OnEstabStateChange(CStatusUI *this)
{
  void *v2; // edi
  char *v3; // esi
  void *v4; // ebx
  int v5; // eax
  unsigned int i; // edi
  unsigned int v7; // ecx
  void *v8; // ebx
  void *v9; // edi
  unsigned int j; // edi
  int v11; // ecx
  const void *v12; // ebx
  void *v13; // edi
  int v14; // eax
  const void *v15; // ebx
  void *v16; // edi
  int v17; // eax
  char *v18; // edi
  char *v19; // esi
  int v20; // eax
  char *v21; // ebx
  unsigned int k; // esi
  int v23; // ecx
  char *v24; // edi
  char *v25; // esi
  int v26; // eax
  char *v27; // ebx
  unsigned int m; // esi
  int v29; // ecx
  char *v30; // edi
  char *v31; // esi
  int v32; // eax
  char *v33; // ebx
  GameClient::Establishment *Establishment; // esi
  const char *v35; // eax
  const wchar_t *v36; // eax
  struct GameClient::Seat *Seat; // eax
  struct GameClient::Seat *v38; // ecx
  int v39; // eax
  int v40; // esi
  int v41; // eax
  struct GameClient::Seat *v42; // esi
  int v43; // ecx
  CControlBox *v44; // eax
  CControlBox *v45; // esi
  void (__thiscall *v46)(CControlBox *, unsigned int, int); // edx
  CPictureLabel *v47; // eax
  struct CREControl *v48; // edi
  void (__thiscall *v49)(struct CREControl *, int, int); // edx
  struct CREControl *v50; // edi
  void (__thiscall *v51)(struct CREControl *, int, int); // eax
  CPictureLabel *v52; // eax
  struct CREControl *v53; // edi
  int v54; // eax
  CProgressBar *v55; // eax
  struct CREControl *v56; // edi
  void (__thiscall *v57)(struct CREControl *, int, int); // eax
  int v58; // eax
  CPictureLabel *v59; // eax
  struct CREControl *v60; // edi
  void (__thiscall *v61)(struct CREControl *, int, int); // eax
  CPictureLabel *v62; // eax
  struct CREControl *v63; // edi
  void (__thiscall *v64)(struct CREControl *, int, int); // eax
  unsigned int v65; // eax
  unsigned int v66; // edx
  CControlBox **v67; // eax
  void *v68; // esi
  int v69; // eax
  int v70; // edi
  int v71; // esi
  int v72; // eax
  int v73; // esi
  int v74; // eax
  int v75; // eax
  struct GameClient::Seat *v76; // ebx
  CControlBox *v77; // eax
  CControlBox *v78; // esi
  void (__thiscall *v79)(CControlBox *, unsigned int, struct GameClient::Seat *); // eax
  CPictureLabel *v80; // eax
  struct CREControl *v81; // edi
  void (__thiscall *v82)(struct CREControl *, int, int); // eax
  CPictureLabel *v83; // eax
  struct CREControl *v84; // edi
  void (__thiscall *v85)(struct CREControl *, int, int); // eax
  int v86; // eax
  CREStatic *v87; // eax
  struct CREControl *v88; // edi
  void (__thiscall *v89)(struct CREControl *, int, int); // edx
  unsigned int v90; // eax
  unsigned int v91; // edx
  CControlBox **v92; // eax
  void *v93; // esi
  int v94; // [esp+19Ch] [ebp-ACh] BYREF
  int v95; // [esp+1A0h] [ebp-A8h]
  int v96; // [esp+1A4h] [ebp-A4h]
  int v97; // [esp+1A8h] [ebp-A0h]
  int v98; // [esp+1ACh] [ebp-9Ch]
  int v99; // [esp+1B0h] [ebp-98h]
  int v100; // [esp+1B4h] [ebp-94h]
  int p_rc; // [esp+1B8h] [ebp-90h]
  unsigned int v102; // [esp+1D0h] [ebp-78h]
  GameClient::Establishment *v103; // [esp+1D4h] [ebp-74h]
  struct GameClient::Seat *v104; // [esp+1D8h] [ebp-70h]
  unsigned int v105; // [esp+1DCh] [ebp-6Ch]
  signed int v106; // [esp+1E0h] [ebp-68h]
  unsigned int v107; // [esp+1E4h] [ebp-64h]
  int v108; // [esp+1E8h] [ebp-60h] BYREF
  int v109; // [esp+1ECh] [ebp-5Ch] BYREF
  int v110[2]; // [esp+1F0h] [ebp-58h] BYREF
  struct tagRECT v111; // [esp+1F8h] [ebp-50h] BYREF
  struct tagRECT rc; // [esp+208h] [ebp-40h] BYREF
  struct tagRECT v113; // [esp+218h] [ebp-30h] BYREF
  struct tagRECT v114; // [esp+228h] [ebp-20h] BYREF
  int v115; // [esp+244h] [ebp-4h]

  v2 = (void *)*((_DWORD *)this + 1002);
  v3 = (char *)this + 4000;
  if ( *((_DWORD *)this + 1001) > (unsigned int)v2 )
    _invalid_parameter_noinfo();
  v4 = (void *)*((_DWORD *)v3 + 1);
  if ( (unsigned int)v4 > *((_DWORD *)v3 + 2) )
    _invalid_parameter_noinfo();
  sub_10007D8D((int)v110, (int)v3, v4, (int)v3, v2);
  v5 = *((_DWORD *)this + 1004);
  if ( v5 )
  {
    v105 = *(_DWORD *)(v5 + 280);
    if ( v105 == -1 )
    {
      CStatusUI::OnSystemPartChanged(this);
    }
    else
    {
      for ( i = 0; ; ++i )
      {
        v7 = *((_DWORD *)this + 977);
        if ( !v7 || i >= (int)(*((_DWORD *)this + 978) - v7) >> 2 )
          break;
        CREDialog::RemoveControl(this, *(struct CREControl **)(*((_DWORD *)this + 977) + 4 * i));
      }
      v8 = (void *)*((_DWORD *)this + 978);
      if ( v7 > (unsigned int)v8 )
        _invalid_parameter_noinfo();
      v9 = (void *)*((_DWORD *)this + 977);
      if ( (unsigned int)v9 > *((_DWORD *)this + 978) )
        _invalid_parameter_noinfo();
      sub_1000D6F7((int)v110, (int)this + 3904, v9, (int)this + 3904, v8);
      for ( j = 0; ; ++j )
      {
        v11 = *((_DWORD *)this + 981);
        if ( !v11 || j >= (*((_DWORD *)this + 982) - v11) >> 2 )
          break;
        CREDialog::RemoveControl(this, *(struct CREControl **)(*((_DWORD *)this + 981) + 4 * j));
      }
      v12 = (const void *)*((_DWORD *)this + 982);
      if ( *((_DWORD *)this + 981) > (unsigned int)v12 )
        _invalid_parameter_noinfo();
      v13 = (void *)*((_DWORD *)this + 981);
      if ( (unsigned int)v13 > *((_DWORD *)this + 982) )
        _invalid_parameter_noinfo();
      if ( v13 != v12 )
      {
        v14 = (*((_DWORD *)this + 982) - (int)v12) >> 2;
        v106 = (signed int)v13 + 4 * v14;
        if ( v14 > 0 )
          memmove_s(v13, 4 * v14, v12, 4 * v14);
        *((_DWORD *)this + 982) = v106;
      }
      v15 = (const void *)*((_DWORD *)this + 978);
      if ( *((_DWORD *)this + 977) > (unsigned int)v15 )
        _invalid_parameter_noinfo();
      v16 = (void *)*((_DWORD *)this + 977);
      if ( (unsigned int)v16 > *((_DWORD *)this + 978) )
        _invalid_parameter_noinfo();
      if ( v16 != v15 )
      {
        v17 = (*((_DWORD *)this + 978) - (int)v15) >> 2;
        v106 = (signed int)v16 + 4 * v17;
        if ( v17 > 0 )
          memmove_s(v16, 4 * v17, v15, 4 * v17);
        *((_DWORD *)this + 978) = v106;
      }
      v18 = (char *)*((_DWORD *)this + 986);
      if ( *((_DWORD *)this + 985) > (unsigned int)v18 )
        _invalid_parameter_noinfo();
      v19 = (char *)*((_DWORD *)this + 985);
      if ( (unsigned int)v19 > *((_DWORD *)this + 986) )
        _invalid_parameter_noinfo();
      if ( v19 != v18 )
      {
        v20 = (*((_DWORD *)this + 986) - (int)v18) >> 2;
        v21 = &v19[4 * v20];
        if ( v20 > 0 )
          memmove_s(v19, 4 * v20, v18, 4 * v20);
        *((_DWORD *)this + 986) = v21;
      }
      for ( k = 0; ; ++k )
      {
        v23 = *((_DWORD *)this + 969);
        if ( !v23 || k >= (*((_DWORD *)this + 970) - v23) >> 2 )
          break;
        CREDialog::RemoveControl(this, *(struct CREControl **)(*((_DWORD *)this + 969) + 4 * k));
      }
      v24 = (char *)*((_DWORD *)this + 970);
      if ( *((_DWORD *)this + 969) > (unsigned int)v24 )
        _invalid_parameter_noinfo();
      v25 = (char *)*((_DWORD *)this + 969);
      if ( (unsigned int)v25 > *((_DWORD *)this + 970) )
        _invalid_parameter_noinfo();
      if ( v25 != v24 )
      {
        v26 = (*((_DWORD *)this + 970) - (int)v24) >> 2;
        v27 = &v25[4 * v26];
        if ( v26 > 0 )
          memmove_s(v25, 4 * v26, v24, 4 * v26);
        *((_DWORD *)this + 970) = v27;
      }
      for ( m = 0; ; ++m )
      {
        v29 = *((_DWORD *)this + 973);
        if ( !v29 || m >= (*((_DWORD *)this + 974) - v29) >> 2 )
          break;
        CREDialog::RemoveControl(this, *(struct CREControl **)(*((_DWORD *)this + 973) + 4 * m));
      }
      v30 = (char *)*((_DWORD *)this + 974);
      if ( *((_DWORD *)this + 973) > (unsigned int)v30 )
        _invalid_parameter_noinfo();
      v31 = (char *)*((_DWORD *)this + 973);
      if ( (unsigned int)v31 > *((_DWORD *)this + 974) )
        _invalid_parameter_noinfo();
      if ( v31 != v30 )
      {
        v32 = (*((_DWORD *)this + 974) - (int)v30) >> 2;
        v33 = &v31[4 * v32];
        if ( v32 > 0 )
          memmove_s(v31, 4 * v32, v30, 4 * v32);
        *((_DWORD *)this + 974) = v33;
      }
      (*(void (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)this + 1010) + 136))(*((_DWORD *)this + 1010), 0);
      (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 1009) + 136))(*((_DWORD *)this + 1009), 1);
      if ( (`GameClient::EstabManager::Instance'::`2'::`local static guard' & 1) == 0 )
      {
        `GameClient::EstabManager::Instance'::`2'::`local static guard' |= 1u;
        v115 = 0;
        GameClient::EstabManager::EstabManager((GameClient::EstabManager *)&`GameClient::EstabManager::Instance'::`2'::em);
        atexit(sub_100071A3);
        v115 = -1;
      }
      Establishment = GameClient::EstabManager::GetEstablishment(
                        (GameClient::EstabManager *)&`GameClient::EstabManager::Instance'::`2'::em,
                        v105);
      v103 = Establishment;
      if ( Establishment )
      {
        SetRect(&rc, 0, 0, 71, 91);
        p_rc = (int)&rc;
        v35 = (const char *)std::string::c_str(*((_DWORD *)Establishment + 2) + 168);
        v36 = atow(v35);
        v109 = (int)&v94;
        std::wstring::wstring(&v94, v36);
        CPictureLabel::ChangeTexture(*((_DWORD *)this + 1009), v94, v95, v96, v97, v98, v99, v100, p_rc);
        Seat = GameClient::Establishment::GetSeat(Establishment, *(_DWORD *)(*((_DWORD *)this + 1004) + 284));
        v38 = Seat;
        v104 = Seat;
        if ( Seat )
        {
          v39 = *((_DWORD *)Seat + 8);
          if ( v39 )
            v40 = (*((_DWORD *)v38 + 9) - v39) >> 2;
          else
            v40 = 0;
          v41 = *((_DWORD *)this + 175);
          v106 = v40;
          v107 = v41 - 267;
          SetRect(&v111, 8, 29, 116, 69);
          SetRect(&v113, 0, 0, 106, 31);
          v102 = 0;
          if ( v40 > 0 )
          {
            do
            {
              v42 = v104;
              v43 = *((_DWORD *)v104 + 8);
              if ( !v43 || v102 >= (*((_DWORD *)v104 + 9) - v43) >> 2 )
                _invalid_parameter_noinfo();
              v105 = *(_DWORD *)(*((_DWORD *)v42 + 8) + 4 * v102);
              if ( v105 )
              {
                v44 = (CControlBox *)operator new(0x230u);
                v45 = v44;
                v109 = (int)v44;
                v115 = 1;
                if ( v44 )
                {
                  CControlBox::CControlBox(v44, this);
                  *(_DWORD *)v45 = &CControlBox::`vftable';
                }
                else
                {
                  v45 = 0;
                }
                v46 = *(void (__thiscall **)(CControlBox *, unsigned int, int))(*(_DWORD *)v45 + 156);
                p_rc = *((_DWORD *)this + 176) - 40;
                v115 = -1;
                v108 = (int)v45;
                v46(v45, v107, p_rc);
                (*(void (__thiscall **)(CControlBox *, int, int))(*(_DWORD *)v45 + 160))(v45, 108, 40);
                v47 = (CPictureLabel *)operator new(0x40Cu);
                v48 = v47;
                v109 = (int)v47;
                v115 = 2;
                if ( v47 )
                {
                  CPictureLabel::CPictureLabel(v47, this, D3DBLEND_SRCALPHA, D3DBLEND_INVSRCALPHA);
                  *(_DWORD *)v48 = &CPictureLabel::`vftable';
                }
                else
                {
                  v48 = 0;
                }
                v49 = *(void (__thiscall **)(struct CREControl *, int, int))(*(_DWORD *)v48 + 160);
                v115 = -1;
                v49(v48, 108, 40);
                p_rc = (int)&v111;
                v109 = (int)&v94;
                std::wstring::wstring(&v94, L"gui.dds");
                CPictureLabel::ChangeTexture(v48, v94, v95, v96, v97, v98, v99, v100, p_rc);
                CControlBox::AddControl(v45, v48, 0, 0);
                v109 = (int)operator new(0x410u);
                v115 = 3;
                if ( v109 )
                  v50 = (struct CREControl *)sub_1000C07C((int)this);
                else
                  v50 = 0;
                v51 = *(void (__thiscall **)(struct CREControl *, int, int))(*(_DWORD *)v50 + 160);
                v115 = -1;
                v51(v50, 12, 12);
                sub_10017C88(v102 + 1);
                CControlBox::AddControl(v45, v50, 3, 2);
                v52 = (CPictureLabel *)operator new(0x40Cu);
                v53 = v52;
                v109 = (int)v52;
                v115 = 4;
                if ( v52 )
                {
                  CPictureLabel::CPictureLabel(v52, this, D3DBLEND_SRCALPHA, D3DBLEND_INVSRCALPHA);
                  *(_DWORD *)v53 = &CPictureLabel::`vftable';
                }
                else
                {
                  v53 = 0;
                }
                v54 = *(_DWORD *)(v105 + 8);
                p_rc = (int)&v113;
                v109 = (int)&v94;
                v115 = -1;
                sub_102C7190(&v94, v54 + 168);
                CPictureLabel::ChangeTexture(v53, v94, v95, v96, v97, v98, v99, v100, p_rc);
                (*(void (__thiscall **)(struct CREControl *, int, int))(*(_DWORD *)v53 + 160))(v53, 106, 31);
                CControlBox::AddControl(v45, v53, 1, 8);
                if ( *(int *)(*(_DWORD *)(v105 + 8) + 320) > 0 )
                {
                  v55 = (CProgressBar *)operator new(0x300u);
                  v56 = v55;
                  v109 = (int)v55;
                  v115 = 5;
                  if ( v55 )
                  {
                    CProgressBar::CProgressBar(v55, this);
                    *(_DWORD *)v56 = &CProgressBar::`vftable';
                  }
                  else
                  {
                    v56 = 0;
                  }
                  v57 = *(void (__thiscall **)(struct CREControl *, int, int))(*(_DWORD *)v56 + 160);
                  *((float *)v56 + 177) = 1.0;
                  p_rc = 2;
                  v100 = 83;
                  *((float *)v56 + 178) = 0.0;
                  v115 = -1;
                  *((_DWORD *)v56 + 188) = 4;
                  *((_DWORD *)v56 + 190) = -7209298;
                  *((_BYTE *)v56 + 748) = 1;
                  v57(v56, v100, p_rc);
                  CControlBox::AddControl(v45, v56, 20, 5);
                }
                v58 = *(_DWORD *)(v105 + 8);
                if ( !*(_DWORD *)(v58 + 316) && !*(_BYTE *)(v58 + 2404) )
                {
                  v59 = (CPictureLabel *)operator new(0x40Cu);
                  v60 = v59;
                  v109 = (int)v59;
                  v115 = 6;
                  if ( v59 )
                  {
                    CPictureLabel::CPictureLabel(v59, this, D3DBLEND_SRCALPHA, D3DBLEND_INVSRCALPHA);
                    *(_DWORD *)v60 = &CPictureLabel::`vftable';
                  }
                  else
                  {
                    v60 = 0;
                  }
                  v61 = *(void (__thiscall **)(struct CREControl *, int, int))(*(_DWORD *)v60 + 160);
                  v115 = -1;
                  v61(v60, 32, 32);
                  p_rc = 0;
                  v109 = (int)&v94;
                  std::wstring::wstring(&v94, L"HUD_Icon_Pattern1.dds");
                  CPictureLabel::ChangeTexture(v60, v94, v95, v96, v97, v98, v99, v100, p_rc);
                  CControlBox::AddControl(v45, v60, 0, 0);
                  v62 = (CPictureLabel *)operator new(0x40Cu);
                  v63 = v62;
                  v109 = (int)v62;
                  v115 = 7;
                  if ( v62 )
                  {
                    CPictureLabel::CPictureLabel(v62, this, D3DBLEND_SRCALPHA, D3DBLEND_INVSRCALPHA);
                    *(_DWORD *)v63 = &CPictureLabel::`vftable';
                  }
                  else
                  {
                    v63 = 0;
                  }
                  v64 = *(void (__thiscall **)(struct CREControl *, int, int))(*(_DWORD *)v63 + 160);
                  v115 = -1;
                  v64(v63, 32, 32);
                  p_rc = 0;
                  v109 = (int)&v94;
                  std::wstring::wstring(&v94, L"HUD_Icon_Pattern2.dds");
                  CPictureLabel::ChangeTexture(v63, v94, v95, v96, v97, v98, v99, v100, p_rc);
                  CControlBox::AddControl(v45, v63, 0, 0);
                }
                CControlBox::InitAllControl(v45, this);
                CREDialog::AddControl(this, v45);
                v65 = *((_DWORD *)this + 969);
                if ( v65 )
                  v66 = (int)(*((_DWORD *)this + 970) - v65) >> 2;
                else
                  v66 = 0;
                if ( v65 && v66 < (int)(*((_DWORD *)this + 971) - v65) >> 2 )
                {
                  v67 = (CControlBox **)*((_DWORD *)this + 970);
                  *v67 = v45;
                  *((_DWORD *)this + 970) = v67 + 1;
                }
                else
                {
                  v68 = (void *)*((_DWORD *)this + 970);
                  if ( v65 > (unsigned int)v68 )
                    _invalid_parameter_noinfo();
                  sub_1000B5BE((int)v110, (int)this + 3872, v68, (int)&v108);
                }
              }
              ++v102;
            }
            while ( (int)v102 < v106 );
          }
          Establishment = v103;
        }
        v69 = *((_DWORD *)Establishment + 49);
        if ( v69 )
          v70 = (*((_DWORD *)v103 + 50) - v69) >> 2;
        else
          v70 = 0;
        v71 = *((_DWORD *)this + 175);
        v106 = v70;
        v72 = *((_DWORD *)this + 176) - 52;
        v73 = -95 * (v70 % 2) - 97 * (v70 / 2) + v71 - 267;
        v102 = v73;
        v104 = (struct GameClient::Seat *)v72;
        if ( v70 == 1 )
        {
          v104 = (struct GameClient::Seat *)((char *)v104 + 27);
        }
        else
        {
          v73 -= 2 * (v70 % 2);
          v102 = v73;
        }
        SetRect(&v114, 14, 990, 109, 1015);
        v74 = (v70 + 1) / 2;
        v107 = v73;
        v108 = v74;
        v105 = 0;
        if ( v70 > 0 )
        {
          while ( 1 )
          {
            if ( v70 != 1 && v105 == v74 )
            {
              v75 = *((_DWORD *)this + 176);
              v102 = v107;
              v104 = (struct GameClient::Seat *)(v75 - 25);
            }
            v76 = GameClient::Establishment::GetSeat(v103, v105);
            v77 = (CControlBox *)operator new(0x230u);
            v78 = v77;
            v109 = (int)v77;
            v115 = 8;
            if ( v77 )
            {
              CControlBox::CControlBox(v77, this);
              *(_DWORD *)v78 = &CControlBox::`vftable';
            }
            else
            {
              v78 = 0;
            }
            v79 = *(void (__thiscall **)(CControlBox *, unsigned int, struct GameClient::Seat *))(*(_DWORD *)v78 + 156);
            v115 = -1;
            v109 = (int)v78;
            v79(v78, v102, v104);
            (*(void (__thiscall **)(CControlBox *, int, int))(*(_DWORD *)v78 + 160))(v78, 95, 25);
            v80 = (CPictureLabel *)operator new(0x40Cu);
            v81 = v80;
            v110[0] = (int)v80;
            v115 = 9;
            if ( v80 )
            {
              CPictureLabel::CPictureLabel(v80, this, D3DBLEND_SRCALPHA, D3DBLEND_INVSRCALPHA);
              *(_DWORD *)v81 = &CPictureLabel::`vftable';
            }
            else
            {
              v81 = 0;
            }
            v82 = *(void (__thiscall **)(struct CREControl *, int, int))(*(_DWORD *)v81 + 160);
            v115 = -1;
            v82(v81, 95, 25);
            p_rc = (int)&v114;
            v110[0] = (int)&v94;
            std::wstring::wstring(&v94, L"gui.dds");
            CPictureLabel::ChangeTexture(v81, v94, v95, v96, v97, v98, v99, v100, p_rc);
            CControlBox::AddControl(v78, v81, 0, 0);
            v83 = (CPictureLabel *)operator new(0x40Cu);
            v84 = v83;
            v110[0] = (int)v83;
            v115 = 10;
            if ( v83 )
            {
              CPictureLabel::CPictureLabel(v83, this, D3DBLEND_SRCALPHA, D3DBLEND_INVSRCALPHA);
              *(_DWORD *)v84 = &CPictureLabel::`vftable';
            }
            else
            {
              v84 = 0;
            }
            v85 = *(void (__thiscall **)(struct CREControl *, int, int))(*(_DWORD *)v84 + 160);
            v115 = -1;
            v85(v84, 18, 18);
            v86 = *(_DWORD *)(*((_DWORD *)v76 + 2) + 172);
            p_rc = 0;
            v110[0] = (int)&v94;
            std::wstring::wstring(&v94, (char *)&unk_103B7D3C + 28 * v86);
            CPictureLabel::ChangeTexture(v84, v94, v95, v96, v97, v98, v99, v100, p_rc);
            CControlBox::AddControl(v78, v84, 4, 4);
            v87 = (CREStatic *)operator new(0x2B8u);
            v88 = v87;
            v110[0] = (int)v87;
            v115 = 11;
            if ( v87 )
            {
              CREStatic::CREStatic(v87, this);
              *(_DWORD *)v88 = &CREStatic::`vftable';
            }
            else
            {
              v88 = 0;
            }
            v89 = *(void (__thiscall **)(struct CREControl *, int, int))(*(_DWORD *)v88 + 160);
            v115 = -1;
            v89(v88, 70, 25);
            (*(void (__thiscall **)(struct CREControl *, int))(*(_DWORD *)v88 + 188))(v88, 4);
            CControlBox::AddControl(v78, v88, 24, 0);
            CControlBox::InitAllControl(v78, this);
            CREDialog::AddControl(this, v78);
            v90 = *((_DWORD *)this + 973);
            v91 = v90 ? (int)(*((_DWORD *)this + 974) - v90) >> 2 : 0;
            if ( v90 && v91 < (int)(*((_DWORD *)this + 975) - v90) >> 2 )
            {
              v92 = (CControlBox **)*((_DWORD *)this + 974);
              *v92 = v78;
              *((_DWORD *)this + 974) = v92 + 1;
            }
            else
            {
              v93 = (void *)*((_DWORD *)this + 974);
              if ( v90 > (unsigned int)v93 )
                _invalid_parameter_noinfo();
              sub_1000B5BE((int)&v111, (int)this + 3888, v93, (int)&v109);
            }
            v102 += 97;
            if ( (int)++v105 >= v106 )
              break;
            v74 = v108;
            v70 = v106;
          }
        }
      }
    }
  }
}
