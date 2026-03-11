/*
 * func-name: sub_1021B1D0
 * func-address: 0x1021b1d0
 * callers: 0x1000bd0c
 * callees: 0x1000169a, 0x100068e8, 0x1000e56b, 0x1000f84e, 0x10011608, 0x10011abd, 0x100147ef, 0x102bdcd0, 0x102bdf50, 0x102c9d62
 */

void __stdcall sub_1021B1D0(Event *a1)
{
  struct BinStream *Stream; // eax
  int v2; // ecx
  int v3; // edx
  char *v4; // ecx
  struct BinStream *v5; // eax
  int v6; // ecx
  const char *v7; // esi
  int v8; // edi
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  const char *v13; // eax
  int v14; // eax
  int v15; // [esp-3Ch] [ebp-F0h]
  int v16; // [esp-38h] [ebp-ECh] BYREF
  int v17; // [esp-34h] [ebp-E8h]
  int v18; // [esp-30h] [ebp-E4h]
  int v19; // [esp-2Ch] [ebp-E0h]
  int v20; // [esp-28h] [ebp-DCh]
  int v21; // [esp-24h] [ebp-D8h]
  int v22; // [esp-20h] [ebp-D4h]
  char v23; // [esp-1Ch] [ebp-D0h] BYREF
  int v24; // [esp-18h] [ebp-CCh]
  int v25; // [esp-14h] [ebp-C8h]
  int v26; // [esp-10h] [ebp-C4h]
  int v27; // [esp-Ch] [ebp-C0h]
  int v28; // [esp-8h] [ebp-BCh]
  const char *v29; // [esp-4h] [ebp-B8h]
  int v30; // [esp+0h] [ebp-B4h]
  int v31; // [esp+4h] [ebp-B0h]
  char *v32; // [esp+10h] [ebp-A4h]
  char *v33; // [esp+14h] [ebp-A0h]
  _BYTE v34[28]; // [esp+18h] [ebp-9Ch] BYREF
  _BYTE v35[28]; // [esp+34h] [ebp-80h] BYREF
  _BYTE v36[28]; // [esp+50h] [ebp-64h] BYREF
  _BYTE v37[28]; // [esp+6Ch] [ebp-48h] BYREF
  _BYTE v38[28]; // [esp+88h] [ebp-2Ch] BYREF
  int v39; // [esp+B0h] [ebp-4h]

  Stream = Event::GetStream(a1);
  v2 = *((_DWORD *)Stream + 3);
  v3 = v2 + 4;
  if ( (unsigned int)(v2 + 4) > *((_DWORD *)Stream + 2) )
  {
    v4 = v32;
  }
  else
  {
    v4 = *(char **)(v2 + *((_DWORD *)Stream + 1));
    *((_DWORD *)Stream + 3) = v3;
  }
  if ( !v4 )
  {
    LogPrintf("Connect login server success.");
    v5 = Event::GetStream(a1);
    v6 = *((_DWORD *)v5 + 3);
    if ( (unsigned int)(v6 + 4) > *((_DWORD *)v5 + 2) )
    {
      v7 = v32;
    }
    else
    {
      v7 = *(const char **)(v6 + *((_DWORD *)v5 + 1));
      *((_DWORD *)v5 + 3) = v6 + 4;
    }
    v29 = v7;
    *(_DWORD *)(sub_100068E8(v30, v31) + 4) = v7;
    sub_1000E56B((int)v29, v30);
    sub_1000169A((int)v29);
    v32 = &v23;
    std::string::string(&v23, "Game.AIUser");
    v33 = (char *)&v16;
    v39 = 0;
    std::string::string(&v16, "AIUserCharacterIDBegin");
    LOBYTE(v39) = 1;
    Engine::Instance(v16);
    v39 = -1;
    v8 = sub_102BDCD0(v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29);
    std::string::string(v36);
    v39 = 2;
    std::string::string(v37);
    v33 = &v23;
    LOBYTE(v39) = 3;
    std::string::string(&v23, "Game.User");
    v32 = (char *)&v16;
    LOBYTE(v39) = 4;
    std::string::string(&v16, "AutoUser");
    LOBYTE(v39) = 5;
    Engine::Instance(v38);
    LOBYTE(v39) = 3;
    sub_102BDF50(v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29);
    LOBYTE(v39) = 6;
    v9 = sub_1000F84E();
    v10 = sub_10011608((int)v34, v8 + *(_DWORD *)(*(_DWORD *)(v9 + 16) + 52));
    LOBYTE(v39) = 7;
    v11 = std::operator+<char>(v35, v38, v10);
    LOBYTE(v39) = 8;
    std::string::operator=(v36, v11);
    LOBYTE(v39) = 7;
    std::string::~string(v35);
    LOBYTE(v39) = 6;
    std::string::~string(v34);
    v12 = std::string::string(v34, "123456");
    LOBYTE(v39) = 9;
    std::string::operator=(v37, v12);
    LOBYTE(v39) = 6;
    std::string::~string(v34);
    v29 = *(const char **)(dword_103B665C + 8);
    sub_10011ABD((int)v36, (int)v37);
    sub_100147EF(v27, v28, (char)v29);
    v29 = (const char *)std::string::c_str(v37);
    v13 = (const char *)std::string::c_str(v36);
    LogPrintf("validate user: %s passworld: %s", v13, v29);
    v14 = sub_1000F84E();
    ++*(_DWORD *)(*(_DWORD *)(v14 + 16) + 52);
    LOBYTE(v39) = 3;
    std::string::~string(v38);
    LOBYTE(v39) = 2;
    std::string::~string(v37);
    v39 = -1;
    std::string::~string(v36);
  }
}
