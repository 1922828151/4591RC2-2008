/*
 * func-name: sub_1029F060
 * func-address: 0x1029f060
 * callers: 0x10008292
 * callees: 0x1000194c, 0x10001ae1, 0x100064dd, 0x1000c69e, 0x1000cc02, 0x1000e56b, 0x100109fb, 0x100119a5, 0x10011a27, 0x100121f7, 0x10015037, 0x100154d3, 0x100184cb, 0x10018d77, 0x1001a88e, 0x102c9d62, 0x102c9ea8
 */

void __stdcall sub_1029F060(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // ecx
  int v7; // esi
  struct CREControl *Control; // eax
  struct CREControl *v9; // eax
  int v10; // eax
  CREStatic *v11; // ebp
  const wchar_t *v12; // eax
  int v13; // eax
  CREStatic *v14; // esi
  const wchar_t *v15; // eax
  CREStatic *v16; // ebp
  const wchar_t *v17; // eax
  int Text; // eax
  CREStatic *v19; // esi
  const wchar_t *v20; // eax
  int v21; // eax
  _DWORD *v22; // eax
  int v23; // ecx
  int v24; // eax
  struct CREControl *v25; // eax
  _DWORD *v26; // edi
  struct CREControl *v27; // eax
  _DWORD *v28; // eax
  int v29; // ecx
  int v30; // esi
  int v31; // edi
  int v32; // ebx
  int v33; // ebp
  int v34; // eax
  _DWORD *v35; // eax
  int v36; // ecx
  int v37; // eax
  struct CREControl *v38; // eax
  _DWORD *v39; // edi
  struct CREControl *v40; // eax
  _DWORD *v41; // eax
  int v42; // ecx
  int v43; // esi
  int v44; // edi
  int v45; // ebx
  int v46; // ebp
  int v47; // eax
  _DWORD *v48; // eax
  int v49; // ecx
  int v50; // eax
  struct CREControl *v51; // eax
  _DWORD *v52; // edi
  struct CREControl *v53; // eax
  _DWORD *v54; // eax
  int v55; // ecx
  int v56; // esi
  int v57; // edi
  int v58; // ebx
  int v59; // ebp
  int v60; // eax
  struct CREControl *v61; // eax
  struct CREControl *v62; // eax
  struct CREControl *v63; // eax
  int v64; // eax
  int v65; // eax
  _DWORD *v66; // eax
  int v67; // esi
  int v68; // ebx
  int v69; // edi
  int v70; // eax
  int v71; // edi
  int v72; // eax
  struct CREControl *v73; // eax
  int v74; // eax
  Input *v75; // eax
  int v76; // eax
  _DWORD *v77; // eax
  int v78; // esi
  int v79; // ebx
  int v80; // edi
  int v81; // eax
  int v82; // [esp+4h] [ebp-D0h]
  int v83; // [esp+4h] [ebp-D0h]
  int v84; // [esp+4h] [ebp-D0h]
  UINT v85; // [esp+8h] [ebp-CCh]
  float v86; // [esp+10h] [ebp-C4h]
  float v87; // [esp+10h] [ebp-C4h]
  int v88; // [esp+10h] [ebp-C4h]
  int v89; // [esp+10h] [ebp-C4h]
  int v90; // [esp+14h] [ebp-C0h]
  int v91; // [esp+14h] [ebp-C0h]
  int v92; // [esp+18h] [ebp-BCh]
  int v93; // [esp+28h] [ebp-ACh]
  float v94; // [esp+28h] [ebp-ACh]
  int v95; // [esp+28h] [ebp-ACh]
  float v96; // [esp+28h] [ebp-ACh]
  float v97; // [esp+28h] [ebp-ACh]
  int v98; // [esp+28h] [ebp-ACh]
  float v99; // [esp+28h] [ebp-ACh]
  float v100; // [esp+28h] [ebp-ACh]
  float v101; // [esp+28h] [ebp-ACh]
  float v102; // [esp+28h] [ebp-ACh]
  float v103; // [esp+30h] [ebp-A4h]
  float v104; // [esp+30h] [ebp-A4h]
  float v105; // [esp+30h] [ebp-A4h]
  int v106; // [esp+34h] [ebp-A0h]
  float v107; // [esp+34h] [ebp-A0h]
  int v108; // [esp+34h] [ebp-A0h]
  int v109; // [esp+34h] [ebp-A0h]
  _BYTE v110[28]; // [esp+38h] [ebp-9Ch] BYREF
  _BYTE v111[28]; // [esp+54h] [ebp-80h] BYREF
  _BYTE v112[28]; // [esp+70h] [ebp-64h] BYREF
  _BYTE v113[28]; // [esp+8Ch] [ebp-48h] BYREF
  _BYTE v114[28]; // [esp+A8h] [ebp-2Ch] BYREF
  int v115; // [esp+D0h] [ebp-4h]

  v7 = _RTDynamicCast(a1, 0, &CREDialog `RTTI Type Descriptor', &CSystemConfigUI `RTTI Type Descriptor');
  if ( v7 )
  {
    if ( a2 == 24 )
    {
      if ( a5 )
      {
        sub_100121F7(0);
        sub_10018D77(0);
        sub_10001AE1(0);
        sub_1000CC02(0, 0);
        Control = CREDialog::GetControl((CREDialog *)v7, 1);
        (*(void (__thiscall **)(struct CREControl *, _DWORD))(*(_DWORD *)Control + 136))(Control, 0);
        v9 = CREDialog::GetControl((CREDialog *)v7, 2);
        (*(void (__thiscall **)(struct CREControl *, _DWORD))(*(_DWORD *)v9 + 136))(v9, 0);
        sub_1001A88E(v90, v92);
        v10 = sub_1000194C(0);
        if ( v10 )
        {
          if ( *(_DWORD *)(v10 + 244) == -1 )
          {
            std::wstring::wstring(v110, L"SYSTEMCONFIG_BACKTOLOGIN");
            v115 = 5;
            Precacher::GetText(v113, v110);
            LOBYTE(v115) = 7;
            std::wstring::~wstring(v110);
            v16 = CREDialog::GetControl((CREDialog *)v7, 104);
            if ( v16 )
            {
              v17 = (const wchar_t *)std::wstring::c_str(v113);
              CREStatic::SetText(v16, v17);
            }
            std::wstring::wstring(v111, L"SYSTEMCONFIG_BTN_BACKTOLOGIN");
            LOBYTE(v115) = 8;
            Text = Precacher::GetText(v112, v111);
            LOBYTE(v115) = 9;
            std::wstring::operator=(v113, Text);
            LOBYTE(v115) = 8;
            std::wstring::~wstring(v112);
            LOBYTE(v115) = 7;
            std::wstring::~wstring(v111);
            v19 = CREDialog::GetControl((CREDialog *)v7, 3);
            if ( v19 )
            {
              v20 = (const wchar_t *)std::wstring::c_str(v113);
              CREStatic::SetText(v19, v20);
            }
            v115 = -1;
            std::wstring::~wstring(v113);
          }
          else
          {
            std::wstring::wstring(v110, L"SYSTEMCONFIG_BACKTOLOBBY");
            v115 = 0;
            Precacher::GetText(v114, v110);
            LOBYTE(v115) = 2;
            std::wstring::~wstring(v110);
            v11 = CREDialog::GetControl((CREDialog *)v7, 104);
            if ( v11 )
            {
              v12 = (const wchar_t *)std::wstring::c_str(v114);
              CREStatic::SetText(v11, v12);
            }
            std::wstring::wstring(v113, L"SYSTEMCONFIG_BTN_BACKTOLOBBY");
            LOBYTE(v115) = 3;
            v13 = Precacher::GetText(v111, v113);
            LOBYTE(v115) = 4;
            std::wstring::operator=(v114, v13);
            LOBYTE(v115) = 3;
            std::wstring::~wstring(v111);
            LOBYTE(v115) = 2;
            std::wstring::~wstring(v113);
            v14 = CREDialog::GetControl((CREDialog *)v7, 3);
            if ( v14 )
            {
              v15 = (const wchar_t *)std::wstring::c_str(v114);
              CREStatic::SetText(v14, v15);
            }
            v115 = -1;
            std::wstring::~wstring(v114);
          }
        }
      }
      else if ( *(float *)(v7 + 3988) > 0.0 )
      {
        v21 = RenderDevice::Instance(v6);
        (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v21 + 264))(
          v21,
          0,
          *(float *)(v7 + 3996),
          *(float *)(v7 + 3992),
          *(float *)(v7 + 3988));
      }
    }
    else if ( a3 > 302 )
    {
      if ( a3 == 304 )
      {
        if ( a2 == 1281 )
        {
          v77 = (_DWORD *)_RTDynamicCast(a4, 0, &CREControl `RTTI Type Descriptor', &CRESlider `RTTI Type Descriptor');
          if ( v77 )
          {
            v78 = v77[134];
            v79 = v77[135];
            v80 = v77[136];
            v81 = AudioDevice::Instance();
            v102 = (double)(v78 - v79) / (double)(v80 - v79);
            (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v81 + 40))(v81, LODWORD(v102), -1);
          }
        }
      }
      else if ( a3 <= 404 || a3 > 407 )
      {
LABEL_62:
        if ( (unsigned int)(a3 - 409) <= 0x48 && !*(_DWORD *)(v7 + 4000) )
        {
          *(_DWORD *)(v7 + 4000) = a3;
          v73 = CREDialog::GetControl((CREDialog *)v7, a3);
          v74 = _RTDynamicCast(v73, 0, &CREControl `RTTI Type Descriptor', &CREButton `RTTI Type Descriptor');
          if ( v74 )
            *(_BYTE *)(v74 + 778) = 1;
          v75 = (Input *)Input::Instance(v90);
          Input::FlushKeyboardBuffer(v75);
          v76 = Input::Instance(v91);
          (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v76 + 48))(v76, 400, 0);
          flt_103B7DE0 = *(float *)&GSeconds;
        }
      }
      else
      {
        v71 = a3 - 405;
        v72 = *(_DWORD *)(v7 + 3984);
        if ( a3 - 405 != v72 )
        {
          sub_100064DD(v72, 0);
          *(_DWORD *)(v7 + 3984) = v71;
          sub_100064DD(v71, 1);
        }
      }
    }
    else if ( a3 == 302 )
    {
      if ( a2 == 1281 )
      {
        v66 = (_DWORD *)_RTDynamicCast(a4, 0, &CREControl `RTTI Type Descriptor', &CRESlider `RTTI Type Descriptor');
        if ( v66 )
        {
          v67 = v66[134];
          v68 = v66[135];
          v69 = v66[136];
          v70 = OggPlayer::Instance();
          v101 = (double)(v67 - v68) / (double)(v69 - v68);
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v70 + 20))(v70, LODWORD(v101));
        }
      }
    }
    else
    {
      switch ( a3 )
      {
        case 1:
          if ( a2 == 257 )
            sub_1000C69E(1);
          return;
        case 2:
          sub_100121F7(0);
          sub_10018D77(0);
          sub_10001AE1(0);
          sub_1000CC02(0, 0);
          v61 = CREDialog::GetControl((CREDialog *)v7, 1);
          (*(void (__thiscall **)(struct CREControl *, _DWORD))(*(_DWORD *)v61 + 136))(v61, 0);
          v62 = CREDialog::GetControl((CREDialog *)v7, 2);
          (*(void (__thiscall **)(struct CREControl *, _DWORD))(*(_DWORD *)v62 + 136))(v62, 0);
          return;
        case 3:
          sub_100121F7(0);
          sub_10018D77(0);
          sub_10001AE1(0);
          sub_1000CC02(1, 1);
          return;
        case 4:
          sub_100121F7(1);
          sub_10018D77(0);
          sub_10001AE1(0);
          goto LABEL_44;
        case 5:
          sub_100121F7(0);
          sub_10018D77(1);
          sub_10001AE1(0);
          sub_1000CC02(0, 0);
          return;
        case 6:
          sub_100121F7(0);
          sub_10018D77(0);
          sub_10001AE1(1);
          sub_1000CC02(0, 0);
          sub_100119A5(v90, v92);
          return;
        case 7:
          sub_100121F7(0);
          sub_10018D77(0);
          sub_10001AE1(0);
          sub_1000CC02(1, 0);
          return;
        case 8:
          return;
        case 102:
          v63 = CREDialog::GetControl((CREDialog *)v7, 104);
          if ( (*(unsigned __int8 (__thiscall **)(struct CREControl *))(*(_DWORD *)v63 + 140))(v63) )
          {
            v64 = sub_1000194C(0);
            if ( v64 )
            {
              if ( *(_DWORD *)(v64 + 244) == -1 )
              {
                sub_1000E56B(*(_DWORD *)(v64 + 236), v90);
                sub_100154D3(v89);
                sub_100109FB(-1);
                sub_10015037(-1);
              }
              else
              {
                sub_1000E56B(*(_DWORD *)(v64 + 244), v90);
                sub_100154D3(v88);
                sub_100184CB(-1);
                sub_10011A27(-1);
              }
            }
          }
          else
          {
            v65 = Engine::Instance(16);
            SendMessageA(*(HWND *)(v65 + 140), v85, 0, 0);
          }
          return;
        case 103:
LABEL_44:
          sub_1000CC02(0, 0);
          break;
        case 214:
          if ( a2 == 1281 )
          {
            v35 = (_DWORD *)_RTDynamicCast(a4, 0, &CREControl `RTTI Type Descriptor', &CRESlider `RTTI Type Descriptor');
            if ( v35 )
            {
              v36 = v35[135];
              v104 = (double)(v35[134] - v36) / (double)(v35[136] - v36);
              v37 = RenderDevice::Instance(v36);
              if ( v104 != ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v37 + 272))(v37) )
              {
                v38 = CREDialog::GetControl((CREDialog *)v7, 218);
                v39 = (_DWORD *)_RTDynamicCast(
                                  v38,
                                  &CREControl `RTTI Type Descriptor',
                                  &CRESlider `RTTI Type Descriptor',
                                  0);
                v40 = CREDialog::GetControl((CREDialog *)v7, 216);
                v41 = (_DWORD *)_RTDynamicCast(v40, v83, 0, &CREControl `RTTI Type Descriptor');
                if ( v39 )
                {
                  if ( v41 )
                  {
                    v42 = v39[135];
                    v43 = v39[134];
                    v44 = v39[136];
                    v45 = v41[134];
                    v46 = v41[136];
                    v95 = v42;
                    v108 = v41[135];
                    v47 = RenderDevice::Instance(v42);
                    v96 = (double)(v43 - v95) / (double)(v44 - v95);
                    v86 = v96;
                    v97 = (double)(v45 - v108) / (double)(v46 - v108);
                    (*(void (__thiscall **)(int, _DWORD, _DWORD, float, _DWORD))(*(_DWORD *)v47 + 264))(
                      v47,
                      0,
                      LODWORD(v97),
                      COERCE_FLOAT(LODWORD(v104)),
                      LODWORD(v86));
                  }
                }
              }
            }
          }
          break;
        case 216:
          if ( a2 == 1281 )
          {
            v48 = (_DWORD *)_RTDynamicCast(a4, 0, &CREControl `RTTI Type Descriptor', &CRESlider `RTTI Type Descriptor');
            if ( v48 )
            {
              v49 = v48[135];
              v105 = (double)(v48[134] - v49) / (double)(v48[136] - v49);
              v50 = RenderDevice::Instance(v49);
              if ( v105 != ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v50 + 276))(v50) )
              {
                v51 = CREDialog::GetControl((CREDialog *)v7, 214);
                v52 = (_DWORD *)_RTDynamicCast(
                                  v51,
                                  &CREControl `RTTI Type Descriptor',
                                  &CRESlider `RTTI Type Descriptor',
                                  0);
                v53 = CREDialog::GetControl((CREDialog *)v7, 218);
                v54 = (_DWORD *)_RTDynamicCast(v53, v84, 0, &CREControl `RTTI Type Descriptor');
                if ( v52 )
                {
                  if ( v54 )
                  {
                    v55 = v52[135];
                    v56 = v52[134];
                    v57 = v52[136];
                    v58 = v54[134];
                    v59 = v54[136];
                    v109 = v55;
                    v98 = v54[135];
                    v60 = RenderDevice::Instance(v55);
                    v99 = (double)(v58 - v98) / (double)(v59 - v98);
                    v87 = v99;
                    v100 = (double)(v56 - v109) / (double)(v57 - v109);
                    (*(void (__thiscall **)(int, _DWORD, float, _DWORD, _DWORD))(*(_DWORD *)v60 + 264))(
                      v60,
                      0,
                      COERCE_FLOAT(LODWORD(v105)),
                      LODWORD(v100),
                      LODWORD(v87));
                  }
                }
              }
            }
          }
          break;
        case 218:
          if ( a2 == 1281 )
          {
            v22 = (_DWORD *)_RTDynamicCast(a4, 0, &CREControl `RTTI Type Descriptor', &CRESlider `RTTI Type Descriptor');
            if ( v22 )
            {
              v23 = v22[135];
              v103 = (double)(v22[134] - v23) / (double)(v22[136] - v23);
              v24 = RenderDevice::Instance(v23);
              if ( v103 != ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v24 + 268))(v24) )
              {
                v25 = CREDialog::GetControl((CREDialog *)v7, 214);
                v26 = (_DWORD *)_RTDynamicCast(
                                  v25,
                                  &CREControl `RTTI Type Descriptor',
                                  &CRESlider `RTTI Type Descriptor',
                                  0);
                v27 = CREDialog::GetControl((CREDialog *)v7, 216);
                v28 = (_DWORD *)_RTDynamicCast(v27, v82, 0, &CREControl `RTTI Type Descriptor');
                if ( v26 )
                {
                  if ( v28 )
                  {
                    v29 = v26[135];
                    v30 = v26[134];
                    v31 = v26[136];
                    v32 = v28[134];
                    v33 = v28[136];
                    v106 = v29;
                    v93 = v28[135];
                    v34 = RenderDevice::Instance(v29);
                    v107 = (double)(v30 - v106) / (double)(v31 - v106);
                    v94 = (double)(v32 - v93) / (double)(v33 - v93);
                    (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, float))(*(_DWORD *)v34 + 264))(
                      v34,
                      0,
                      LODWORD(v94),
                      LODWORD(v107),
                      COERCE_FLOAT(LODWORD(v103)));
                  }
                }
              }
            }
          }
          break;
        default:
          goto LABEL_62;
      }
    }
  }
}
