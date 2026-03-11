/*
 * func-name: ?UpdateGroupCmd@Group@GameClient@@QAEXJJABVVector@@@Z_0
 * func-address: 0x101f6ff0
 * callers: 0x10014f24
 * callees: 0x10003bf2, 0x10008170, 0x1000ae2a, 0x1000bf05, 0x1000f1dc, 0x100145c9, 0x10016a4f, 0x10016b58, 0x10019484, 0x1001a159, 0x102c0750, 0x102c8d66, 0x102c9d50, 0x102c9d62, 0x102c9d98
 */

void __thiscall GameClient::Group::UpdateGroupCmd(GameClient::Group *this, int a2, int a3, const struct Vector *a4)
{
  unsigned int v5; // edi
  int i; // ebx
  int v7; // eax
  int v8; // eax
  const wchar_t *v9; // eax
  const char *v10; // eax
  int v11; // eax
  unsigned int v12; // edi
  int j; // ebp
  int v14; // eax
  int v15; // eax
  int v16; // eax
  _DWORD *v17; // eax
  int v18; // eax
  char v19; // bl
  int v20; // eax
  int v21; // eax
  void *v22; // ebp
  int v23; // eax
  int v24; // eax
  int v25; // ebx
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  unsigned int v30; // ebp
  int k; // edi
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // edi
  int v36; // eax
  _DWORD *v37; // eax
  int v38; // eax
  char v39; // bl
  int v40; // eax
  int v41; // eax
  void *v42; // edi
  int v43; // eax
  unsigned int v44; // edi
  int m; // ebx
  int v46; // eax
  int v47; // eax
  const wchar_t *v48; // eax
  const char *v49; // eax
  int v50; // eax
  int v51; // eax
  int v52; // edi
  int v53; // eax
  int v54; // eax
  int v55; // eax
  int v56; // eax
  float v57; // [esp+8h] [ebp-FCh]
  int v58; // [esp+8h] [ebp-FCh]
  float v59; // [esp+8h] [ebp-FCh]
  int v60; // [esp+8h] [ebp-FCh]
  int v61; // [esp+10h] [ebp-F4h]
  int v62; // [esp+14h] [ebp-F0h]
  bool v63; // [esp+26h] [ebp-DEh]
  char v64; // [esp+26h] [ebp-DEh]
  char v65; // [esp+27h] [ebp-DDh]
  float v66; // [esp+28h] [ebp-DCh]
  float v67; // [esp+28h] [ebp-DCh]
  int v68; // [esp+28h] [ebp-DCh]
  int v69; // [esp+28h] [ebp-DCh]
  void *v70; // [esp+30h] [ebp-D4h]
  float v71; // [esp+30h] [ebp-D4h]
  float v72; // [esp+30h] [ebp-D4h]
  void *v73; // [esp+30h] [ebp-D4h]
  _BYTE v74[16]; // [esp+34h] [ebp-D0h] BYREF
  float v75; // [esp+44h] [ebp-C0h]
  float v76; // [esp+58h] [ebp-ACh]
  _BYTE v77[16]; // [esp+5Ch] [ebp-A8h] BYREF
  float v78; // [esp+6Ch] [ebp-98h]
  float v79; // [esp+80h] [ebp-84h]
  _BYTE v80[28]; // [esp+84h] [ebp-80h] BYREF
  _BYTE v81[28]; // [esp+A0h] [ebp-64h] BYREF
  int v82[7]; // [esp+BCh] [ebp-48h] BYREF
  int v83[7]; // [esp+D8h] [ebp-2Ch] BYREF
  int v84; // [esp+100h] [ebp-4h]

  v63 = sub_10016A4F(*((_DWORD *)this + 2)) != 0;
  if ( a3 == 1 )
  {
    if ( a2 != 6 )
    {
      v5 = 0;
      for ( i = 0; ; i += 84 )
      {
        v7 = *((_DWORD *)this + 4);
        if ( !v7 || v5 >= (*((_DWORD *)this + 5) - v7) / 84 )
          goto LABEL_23;
        v8 = *((_DWORD *)this + 4);
        if ( !v8 || v5 >= (*((_DWORD *)this + 5) - v8) / 84 )
          _invalid_parameter_noinfo();
        if ( *(_DWORD *)(i + *((_DWORD *)this + 4)) == *((_DWORD *)this + 2) )
          break;
        ++v5;
      }
      std::string::string(v80);
      v84 = 0;
      switch ( a2 )
      {
        case 0:
          std::string::operator=(v80, &unk_103176C8);
          break;
        case 1:
          std::string::operator=(v80, &unk_103176D0);
          break;
        case 2:
          std::string::operator=(v80, &unk_103176D8);
          break;
        case 3:
          std::string::operator=(v80, &unk_103176E0);
          break;
        case 4:
          std::string::operator=(v80, &unk_103176E8);
          break;
        case 5:
          std::string::operator=(v80, &unk_103176F0);
          break;
        case 6:
          std::string::operator=(v80, &unk_103176F8);
          break;
        default:
          break;
      }
      std::wstring::wstring(v83);
      LOBYTE(v84) = 1;
      sub_1000F1DC();
      LOBYTE(v84) = 2;
      World::GetWorldBBox((World *)dword_103B8134, (struct BBox *)v77);
      v66 = v79 - *((float *)a4 + 2);
      v57 = v66;
      v67 = *(float *)a4 - v78;
      sub_10008170(v67, v57, (int)v83);
      std::string::operator+=(v80, &unk_10317700);
      v9 = (const wchar_t *)std::wstring::c_str(v83);
      v10 = wtoa(v9);
      std::string::operator+=(v80, v10);
      v11 = *((_DWORD *)this + 4);
      if ( !v11 || v5 >= (*((_DWORD *)this + 5) - v11) / 84 )
        _invalid_parameter_noinfo();
      v58 = *((_DWORD *)this + 4) + 84 * v5 + 4;
      GameClient::ChatManager::Instance();
      GameClient::ChatManager::AddMessage(10, v58, (int)v80);
      LOBYTE(v84) = 1;
      sub_102C0750(v77);
      LOBYTE(v84) = 0;
      std::wstring::~wstring(v83);
      v84 = -1;
      std::string::~string(v80);
    }
LABEL_23:
    v12 = 0;
    for ( j = 0; ; j = v68 + 84 )
    {
      while ( 1 )
      {
        v14 = *((_DWORD *)this + 4);
        v68 = j;
        if ( !v14 || v12 >= (*((_DWORD *)this + 5) - v14) / 84 )
          return;
        v15 = *((_DWORD *)this + 4);
        if ( !v15 || v12 >= (*((_DWORD *)this + 5) - v15) / 84 )
          _invalid_parameter_noinfo();
        *(_DWORD *)(*((_DWORD *)this + 4) + j + 64) = a2;
        v16 = *((_DWORD *)this + 4);
        if ( !v16 || v12 >= (*((_DWORD *)this + 5) - v16) / 84 )
          _invalid_parameter_noinfo();
        v17 = (_DWORD *)(*((_DWORD *)this + 4) + j + 68);
        *v17 = *(_DWORD *)a4;
        v17[1] = *((_DWORD *)a4 + 1);
        v17[2] = *((_DWORD *)a4 + 2);
        v18 = *((_DWORD *)this + 4);
        v19 = 0;
        if ( !v18 || v12 >= (*((_DWORD *)this + 5) - v18) / 84 )
          _invalid_parameter_noinfo();
        if ( sub_10016A4F(*(_DWORD *)(*((_DWORD *)this + 4) + j)) )
          v19 = 1;
        if ( a2 == 6 )
          break;
        if ( v19 || (v65 = 0, v63) )
          v65 = 1;
        v24 = *((_DWORD *)this + 4);
        if ( !v24 || v12 >= (*((_DWORD *)this + 5) - v24) / 84 )
          _invalid_parameter_noinfo();
        if ( !*(_DWORD *)(*((_DWORD *)this + 4) + j + 80) )
        {
          if ( !v65 )
            goto LABEL_78;
          v70 = operator new(0x78u);
          v84 = 3;
          if ( v70 )
            v25 = sub_100145C9(v61, v62);
          else
            v25 = 0;
          v26 = *((_DWORD *)this + 4);
          v84 = -1;
          if ( !v26 || v12 >= (*((_DWORD *)this + 5) - v26) / 84 )
            _invalid_parameter_noinfo();
          *(_DWORD *)(*((_DWORD *)this + 4) + j + 80) = v25;
          v27 = *((_DWORD *)this + 4);
          if ( !v27 || v12 >= (*((_DWORD *)this + 5) - v27) / 84 )
            _invalid_parameter_noinfo();
          std::string::operator=(*(_DWORD *)(*((_DWORD *)this + 4) + j + 80), "FX_Command_Normal.reb");
          v28 = *((_DWORD *)this + 4);
          if ( !v28 || v12 >= (*((_DWORD *)this + 5) - v28) / 84 )
            _invalid_parameter_noinfo();
          sub_10019484(dword_103B8134, 0);
        }
        if ( v65 )
        {
          v29 = *((_DWORD *)this + 4);
          if ( !v29 || v12 >= (*((_DWORD *)this + 5) - v29) / 84 )
            _invalid_parameter_noinfo();
          if ( sub_1000BF05() )
            sub_1000AE2A((int)a4);
        }
LABEL_78:
        ++v12;
        j += 84;
      }
      v20 = *((_DWORD *)this + 4);
      if ( !v20 || v12 >= (*((_DWORD *)this + 5) - v20) / 84 )
        _invalid_parameter_noinfo();
      v21 = *((_DWORD *)this + 4);
      if ( !*(_DWORD *)(v21 + j + 80) )
        goto LABEL_78;
      if ( !v21 || v12 >= (*((_DWORD *)this + 5) - v21) / 84 )
        _invalid_parameter_noinfo();
      v22 = *(void **)(*((_DWORD *)this + 4) + j + 80);
      if ( v22 )
      {
        sub_10016B58(v61, v62);
        operator delete(v22);
      }
      v23 = *((_DWORD *)this + 4);
      if ( !v23 || v12 >= (*((_DWORD *)this + 5) - v23) / 84 )
        _invalid_parameter_noinfo();
      ++v12;
      *(_DWORD *)(v68 + *((_DWORD *)this + 4) + 80) = 0;
    }
  }
  v30 = 0;
  for ( k = 0; ; k += 84 )
  {
    v32 = *((_DWORD *)this + 4);
    if ( !v32 || v30 >= (*((_DWORD *)this + 5) - v32) / 84 )
      break;
    v33 = *((_DWORD *)this + 4);
    if ( !v33 || v30 >= (*((_DWORD *)this + 5) - v33) / 84 )
      _invalid_parameter_noinfo();
    if ( *(_DWORD *)(k + *((_DWORD *)this + 4) + 32) == a3 )
    {
      v34 = *((_DWORD *)this + 4);
      if ( !v34 || v30 >= (*((_DWORD *)this + 5) - v34) / 84 )
        _invalid_parameter_noinfo();
      v35 = 84 * v30;
      *(_DWORD *)(*((_DWORD *)this + 4) + 84 * v30 + 64) = a2;
      v36 = *((_DWORD *)this + 4);
      v69 = 84 * v30;
      if ( !v36 || v30 >= (*((_DWORD *)this + 5) - v36) / 84 )
        _invalid_parameter_noinfo();
      v37 = (_DWORD *)(*((_DWORD *)this + 4) + v35 + 68);
      *v37 = *(_DWORD *)a4;
      v37[1] = *((_DWORD *)a4 + 1);
      v37[2] = *((_DWORD *)a4 + 2);
      v38 = *((_DWORD *)this + 4);
      v39 = 0;
      if ( !v38 || v30 >= (*((_DWORD *)this + 5) - v38) / 84 )
        _invalid_parameter_noinfo();
      if ( sub_10016A4F(*(_DWORD *)(*((_DWORD *)this + 4) + 84 * v30)) )
        v39 = 1;
      if ( a2 == 6 )
      {
        v40 = *((_DWORD *)this + 4);
        if ( !v40 || v30 >= (*((_DWORD *)this + 5) - v40) / 84 )
          _invalid_parameter_noinfo();
        v41 = *((_DWORD *)this + 4);
        if ( *(_DWORD *)(v41 + v35 + 80) )
        {
          if ( !v41 || v30 >= (*((_DWORD *)this + 5) - v41) / 84 )
            _invalid_parameter_noinfo();
          v42 = *(void **)(v69 + *((_DWORD *)this + 4) + 80);
          if ( v42 )
          {
            sub_10016B58(v61, v62);
            operator delete(v42);
          }
          v43 = *((_DWORD *)this + 4);
          if ( !v43 || v30 >= (*((_DWORD *)this + 5) - v43) / 84 )
            _invalid_parameter_noinfo();
          *(_DWORD *)(*((_DWORD *)this + 4) + v69 + 80) = 0;
        }
      }
      else
      {
        if ( v39 || v63 )
        {
          v44 = 0;
          v64 = 1;
          for ( m = 0; ; m += 84 )
          {
            v46 = *((_DWORD *)this + 4);
            if ( !v46 || v44 >= (*((_DWORD *)this + 5) - v46) / 84 )
              break;
            v47 = *((_DWORD *)this + 4);
            if ( !v47 || v44 >= (*((_DWORD *)this + 5) - v47) / 84 )
              _invalid_parameter_noinfo();
            if ( *(_DWORD *)(m + *((_DWORD *)this + 4)) == *((_DWORD *)this + 2) )
            {
              std::string::string(v81);
              v84 = 4;
              switch ( a2 )
              {
                case 0:
                  std::string::operator=(v81, &unk_1031771C);
                  break;
                case 1:
                  std::string::operator=(v81, &unk_10317724);
                  break;
                case 2:
                  std::string::operator=(v81, &unk_1031772C);
                  break;
                case 3:
                  std::string::operator=(v81, &unk_10317734);
                  break;
                case 4:
                  std::string::operator=(v81, &unk_1031773C);
                  break;
                case 5:
                  std::string::operator=(v81, &unk_10317744);
                  break;
                case 6:
                  std::string::operator=(v81, &unk_1031774C);
                  break;
                default:
                  break;
              }
              std::wstring::wstring(v82);
              LOBYTE(v84) = 5;
              sub_1000F1DC();
              LOBYTE(v84) = 6;
              World::GetWorldBBox((World *)dword_103B8134, (struct BBox *)v74);
              v71 = v76 - *((float *)a4 + 2);
              v59 = v71;
              v72 = *(float *)a4 - v75;
              sub_10008170(v72, v59, (int)v82);
              std::string::operator+=(v81, &unk_10317754);
              v48 = (const wchar_t *)std::wstring::c_str(v82);
              v49 = wtoa(v48);
              std::string::operator+=(v81, v49);
              v50 = *((_DWORD *)this + 4);
              if ( !v50 || v44 >= (*((_DWORD *)this + 5) - v50) / 84 )
                _invalid_parameter_noinfo();
              v60 = *((_DWORD *)this + 4) + 84 * v44 + 4;
              GameClient::ChatManager::Instance();
              GameClient::ChatManager::AddMessage(10, v60, (int)v81);
              LOBYTE(v84) = 5;
              sub_102C0750(v74);
              LOBYTE(v84) = 4;
              std::wstring::~wstring(v82);
              v84 = -1;
              std::string::~string(v81);
              break;
            }
            ++v44;
          }
        }
        else
        {
          v64 = 0;
        }
        v51 = *((_DWORD *)this + 4);
        if ( !v51 || v30 >= (*((_DWORD *)this + 5) - v51) / 84 )
          _invalid_parameter_noinfo();
        if ( !*(_DWORD *)(*((_DWORD *)this + 4) + v69 + 80) )
        {
          if ( !v64 )
            return;
          v73 = operator new(0x78u);
          v84 = 7;
          if ( v73 )
            v52 = sub_100145C9(v61, v62);
          else
            v52 = 0;
          v53 = *((_DWORD *)this + 4);
          v84 = -1;
          if ( !v53 || v30 >= (*((_DWORD *)this + 5) - v53) / 84 )
            _invalid_parameter_noinfo();
          *(_DWORD *)(*((_DWORD *)this + 4) + v69 + 80) = v52;
          v54 = *((_DWORD *)this + 4);
          if ( !v54 || v30 >= (*((_DWORD *)this + 5) - v54) / 84 )
            _invalid_parameter_noinfo();
          std::string::operator=(*(_DWORD *)(v69 + *((_DWORD *)this + 4) + 80), "FX_Command_Normal.reb");
          v55 = *((_DWORD *)this + 4);
          if ( !v55 || v30 >= (*((_DWORD *)this + 5) - v55) / 84 )
            _invalid_parameter_noinfo();
          sub_10019484(dword_103B8134, 0);
        }
        if ( v64 )
        {
          v56 = *((_DWORD *)this + 4);
          if ( !v56 || v30 >= (*((_DWORD *)this + 5) - v56) / 84 )
            _invalid_parameter_noinfo();
          if ( sub_1000BF05() )
            sub_1000AE2A((int)a4);
        }
      }
      return;
    }
    ++v30;
  }
}
