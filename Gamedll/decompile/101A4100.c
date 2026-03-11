/*
 * func-name: ?OnBegin@EstabOccupyObserver@GameClient@@UAEXAAVEvent@@@Z_0
 * func-address: 0x101a4100
 * callers: 0x100191af
 * callees: 0x10002275, 0x10003d82, 0x10011a4f, 0x1001375a, 0x102c8d66, 0x102c8d6c, 0x102c9d62, 0x102ca13e
 */

void __thiscall GameClient::EstabOccupyObserver::OnBegin(GameClient::EstabOccupyObserver *this, struct Event *a2)
{
  struct BinStream *Stream; // esi
  size_t v3; // edi
  int v4; // eax
  const char *v5; // eax
  size_t v6; // eax
  const char *v7; // eax
  char v8; // [esp-2Ch] [ebp-250h] BYREF
  int v9; // [esp-28h] [ebp-24Ch]
  int v10; // [esp-24h] [ebp-248h]
  int v11; // [esp-20h] [ebp-244h]
  int v12; // [esp-1Ch] [ebp-240h]
  int v13; // [esp-18h] [ebp-23Ch]
  int v14; // [esp-14h] [ebp-238h]
  int v15; // [esp-10h] [ebp-234h]
  int v16; // [esp-Ch] [ebp-230h]
  int v17; // [esp-8h] [ebp-22Ch]
  int v18; // [esp-4h] [ebp-228h]
  float v19; // [esp+0h] [ebp-224h]
  int v20; // [esp+4h] [ebp-220h]
  float v21; // [esp+8h] [ebp-21Ch]
  char *v22; // [esp+Ch] [ebp-218h]
  float v23; // [esp+1Ch] [ebp-208h]
  float v24; // [esp+20h] [ebp-204h]
  float v25; // [esp+24h] [ebp-200h]
  float v26; // [esp+28h] [ebp-1FCh]
  char *v27; // [esp+2Ch] [ebp-1F8h]
  _BYTE v28[28]; // [esp+30h] [ebp-1F4h] BYREF
  _BYTE v29[28]; // [esp+4Ch] [ebp-1D8h] BYREF
  _BYTE v30[28]; // [esp+68h] [ebp-1BCh] BYREF
  wchar_t Buffer[200]; // [esp+84h] [ebp-1A0h] BYREF
  int v32; // [esp+220h] [ebp-4h]

  std::string::string(v29);
  v32 = 0;
  Stream = Event::GetStream(a2);
  v3 = sub_10003D82();
  v4 = *((_DWORD *)Stream + 3);
  if ( v4 + v3 <= *((_DWORD *)Stream + 2) )
  {
    memcpy(byte_103B6158, (const void *)(v4 + *((_DWORD *)Stream + 1)), v3);
    v22 = byte_103B6158;
    byte_103B6158[v3] = 0;
    std::string::operator=(v29, v22);
    *((_DWORD *)Stream + 3) += v3;
  }
  std::wstring::wstring(v28, L"ESTAB_OCCUPYED");
  LOBYTE(v32) = 1;
  Precacher::GetText(v30, v28);
  LOBYTE(v32) = 3;
  std::wstring::~wstring(v28);
  v5 = (const char *)std::string::c_str(v29);
  LOWORD(v22) = (unsigned __int16)atow(v5);
  v6 = std::wstring::c_str(v30);
  sub_10011A4F(Buffer, v6, (wchar_t)v22);
  v22 = 0;
  v21 = 0.0;
  v20 = 0;
  v19 = 3.0;
  v23 = 1.0;
  v26 = 1.0;
  *(float *)&v15 = 1.0;
  v24 = 0.0;
  *(float *)&v16 = 0.0;
  v25 = 0.0;
  *(float *)&v17 = 0.0;
  *(float *)&v18 = 1.0;
  v7 = wtoa(Buffer);
  v27 = &v8;
  std::string::string(&v8, v7);
  LOBYTE(v32) = 4;
  sub_1001375A();
  LOBYTE(v32) = 3;
  sub_10002275(v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, (int)v22);
  LOBYTE(v32) = 0;
  std::wstring::~wstring(v30);
  v32 = -1;
  std::string::~string(v29);
}
