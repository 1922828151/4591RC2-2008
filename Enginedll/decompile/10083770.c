/*
 * func-name: ?SaveScene@Editor@@QAE_NPBD@Z
 * func-address: 0x10083770
 * callers: none
 * callees: 0x1000a0a0, 0x1000db00, 0x1007bd80, 0x1007bf30, 0x1007dcf0, 0x1007edc0, 0x10097220, 0x1011b780, 0x1017a310, 0x1017aa70, 0x1017b280, 0x101a26a0
 */

char __thiscall Editor::SaveScene(Editor *this, const char *a2)
{
  Editor *v2; // ebp
  int last_of; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  unsigned int i; // esi
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  const CHAR *v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  const CHAR *v17; // eax
  unsigned int j; // edi
  int v19; // esi
  int v20; // ecx
  int v21; // ecx
  unsigned int v22; // edi
  int v24; // esi
  int v25; // ecx
  int v26; // ecx
  char v27; // [esp-20h] [ebp-174h] BYREF
  _DWORD v28[3]; // [esp-1Ch] [ebp-170h] BYREF
  int *v29; // [esp-10h] [ebp-164h]
  int v30; // [esp-Ch] [ebp-160h]
  LPCSTR v31; // [esp-8h] [ebp-15Ch]
  const char *v32; // [esp-4h] [ebp-158h]
  int v33; // [esp+0h] [ebp-154h]
  int v34; // [esp+4h] [ebp-150h]
  char *v35; // [esp+10h] [ebp-144h]
  int v36; // [esp+14h] [ebp-140h] BYREF
  int v37; // [esp+18h] [ebp-13Ch]
  int v38; // [esp+1Ch] [ebp-138h]
  int v39; // [esp+20h] [ebp-134h]
  _BYTE v40[28]; // [esp+24h] [ebp-130h] BYREF
  Editor *v41; // [esp+40h] [ebp-114h]
  _BYTE v42[28]; // [esp+44h] [ebp-110h] BYREF
  _DWORD v43[6]; // [esp+60h] [ebp-F4h] BYREF
  char v44; // [esp+78h] [ebp-DCh]
  char v45; // [esp+79h] [ebp-DBh]
  float v46; // [esp+7Ch] [ebp-D8h]
  float v47; // [esp+80h] [ebp-D4h]
  _BYTE v48[28]; // [esp+84h] [ebp-D0h] BYREF
  _BYTE v49[28]; // [esp+A0h] [ebp-B4h] BYREF
  _BYTE v50[28]; // [esp+BCh] [ebp-98h] BYREF
  _BYTE v51[28]; // [esp+D8h] [ebp-7Ch] BYREF
  _BYTE v52[28]; // [esp+F4h] [ebp-60h] BYREF
  _BYTE v53[28]; // [esp+110h] [ebp-44h] BYREF
  _BYTE v54[28]; // [esp+12Ch] [ebp-28h] BYREF
  int v55; // [esp+150h] [ebp-4h]

  v2 = this;
  *((float *)this + 532) = GSeconds;
  v32 = a2;
  v41 = this;
  *((_BYTE *)this + 2121) = 1;
  std::string::string(v42, v32);
  v46 = 100.0;
  v47 = 100.0;
  v55 = 0;
  v44 = 1;
  v43[4] = 0;
  v43[1] = 0;
  LOWORD(v43[0]) = 0;
  v45 = 0;
  v43[2] = 0;
  v43[5] = 0;
  v43[3] = GetTickCount();
  v32 = (const char *)*((_DWORD *)v2 + 512);
  LOBYTE(v55) = 1;
  v44 = 0;
  sub_1007DCF0(v43, (int)v32);
  if ( std::string::length(v42) )
  {
    sub_1017AA70(v33, v34);
    last_of = std::string::find_last_of(v42, "\\", std::string::npos);
    std::string::substr(v42, v50, 0, last_of + 1);
    v32 = (const char *)(*((_DWORD *)v2 + 512) + 3188);
    LOBYTE(v55) = 2;
    std::string::string(v40, v32);
    LOBYTE(v55) = 3;
    if ( std::string::find(v40, "\\", 0) == -1 )
      FindMedia(v40, "Maps", 0, 0);
    v35 = (char *)v28;
    std::string::string(v28, v40);
    if ( sub_1007BD80(v28[0]) )
    {
      if ( (unsigned __int8)std::operator==<char>(v40, "MAP NOT LOADED") )
      {
        std::string::operator+=(v40, "\\");
      }
      else
      {
        v4 = std::string::find_last_of(v40, "\\", std::string::npos);
        v5 = std::string::substr(v40, v49, 0, v4 + 1);
        LOBYTE(v55) = 4;
        std::string::operator=(v40, v5);
        LOBYTE(v55) = 3;
        std::string::~string(v49);
      }
      if ( std::string::length(v42) && std::string::length(v40) )
      {
        v37 = 0;
        v38 = 0;
        v39 = 0;
        v32 = 0;
        v31 = "*.prt";
        v30 = 2;
        v29 = &v36;
        LOBYTE(v55) = 5;
        v6 = std::string::c_str(v40);
        sub_1017B280(v6, v29, v30, v31, v32);
        for ( i = 0; v37 && i < (v38 - v37) / 28; ++i )
        {
          v8 = sub_1000A0A0(&v36, i);
          v9 = sub_1017A310(v52, v8);
          LOBYTE(v55) = 6;
          std::operator+<char>(v51, v50, v9);
          LOBYTE(v55) = 8;
          std::string::~string(v52);
          v10 = sub_1000A0A0(&v36, i);
          v11 = sub_1017A310(v53, v10);
          LOBYTE(v55) = 9;
          std::operator+<char>(v48, v40, v11);
          LOBYTE(v55) = 11;
          std::string::~string(v53);
          v32 = 0;
          v31 = (LPCSTR)std::string::c_str(v51);
          v12 = (const CHAR *)std::string::c_str(v48);
          CopyFileA(v12, v31, (BOOL)v32);
          LOBYTE(v55) = 8;
          std::string::~string(v48);
          LOBYTE(v55) = 5;
          std::string::~string(v51);
        }
        v32 = ".ini";
        v35 = &v27;
        std::string::string(&v27, v40);
        v13 = sub_1007EDC0((int)v52);
        LOBYTE(v55) = 12;
        v14 = std::operator+<char>(v53, v40, v13);
        LOBYTE(v55) = 13;
        std::operator+<char>(v49, v14, v32);
        LOBYTE(v55) = 15;
        std::string::~string(v53);
        LOBYTE(v55) = 16;
        std::string::~string(v52);
        v32 = ".ini";
        v35 = &v27;
        std::string::string(&v27, v50);
        v15 = sub_1007EDC0((int)v48);
        LOBYTE(v55) = 17;
        v16 = std::operator+<char>(v51, v50, v15);
        LOBYTE(v55) = 18;
        std::operator+<char>(v54, v16, v32);
        LOBYTE(v55) = 20;
        std::string::~string(v51);
        LOBYTE(v55) = 21;
        std::string::~string(v48);
        v32 = 0;
        v31 = (LPCSTR)std::string::c_str(v54);
        v17 = (const CHAR *)std::string::c_str(v49);
        CopyFileA(v17, v31, (BOOL)v32);
        LOBYTE(v55) = 16;
        std::string::~string(v54);
        LOBYTE(v55) = 5;
        std::string::~string(v49);
        LOBYTE(v55) = 3;
        sub_1000DB00(&v36);
        v2 = v41;
      }
    }
    LOBYTE(v55) = 2;
    std::string::~string(v40);
    LOBYTE(v55) = 1;
    std::string::~string(v50);
  }
  else
  {
    std::string::operator=(v42, *((_DWORD *)v2 + 512) + 3188);
    if ( std::string::find(v42, "\\", 0) == -1 )
      FindMedia(v42, "Maps", 0, 0);
  }
  for ( j = 0; ; ++j )
  {
    v19 = *((_DWORD *)v2 + 512);
    v20 = *(_DWORD *)(v19 + 3224);
    if ( !v20 || j >= (*(_DWORD *)(v19 + 3228) - v20) >> 2 )
      break;
    v21 = *(_DWORD *)(*(_DWORD *)(v19 + 3224) + 4 * j);
    (*(void (__thiscall **)(int))(*(_DWORD *)v21 + 16))(v21);
  }
  v32 = (const char *)*((_DWORD *)v2 + 512);
  v35 = &v27;
  std::string::string(&v27, v42);
  LOBYTE(v55) = 22;
  if ( (`Serializer::Instance'::`2'::`local static guard' & 1) != 0 )
  {
    v22 = 0;
  }
  else
  {
    `Serializer::Instance'::`2'::`local static guard' |= 1u;
    v22 = 0;
    dword_1028370C = 0;
    dword_10283710 = 0;
    dword_10283714 = 0;
    atexit(sub_101B8AB0);
    LOBYTE(v55) = 22;
  }
  LOBYTE(v55) = 1;
  if ( (unsigned __int8)Serializer::SaveWorld(v27, v28[0], v28[1], v28[2], v29, v30, v31, v32) )
  {
    std::string::operator=(*((_DWORD *)v2 + 512) + 3188, v42);
    while ( 1 )
    {
      v24 = *((_DWORD *)v2 + 512);
      v25 = *(_DWORD *)(v24 + 3224);
      if ( !v25 || v22 >= (*(_DWORD *)(v24 + 3228) - v25) >> 2 )
        break;
      v26 = *(_DWORD *)(*(_DWORD *)(v24 + 3224) + 4 * v22);
      (*(void (__thiscall **)(int))(*(_DWORD *)v26 + 20))(v26);
      ++v22;
    }
    LOBYTE(v55) = 0;
    nullsub_1();
    v55 = -1;
    std::string::~string(v42);
    return 1;
  }
  else
  {
    LOBYTE(v55) = 0;
    nullsub_1();
    v55 = -1;
    std::string::~string(v42);
    return 0;
  }
}
