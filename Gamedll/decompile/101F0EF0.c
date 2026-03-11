/*
 * func-name: sub_101F0EF0
 * func-address: 0x101f0ef0
 * callers: 0x10010122
 * callees: 0x10002275, 0x10003d82, 0x1001375a, 0x102c8d66, 0x102c8d6c, 0x102c9d62, 0x102ca13e
 */

void __stdcall sub_101F0EF0(Event *a1)
{
  struct BinStream *Stream; // esi
  size_t v2; // edi
  int v3; // eax
  const char *v4; // eax
  const wchar_t *v5; // eax
  const wchar_t *v6; // eax
  const char *v7; // eax
  char v8; // [esp-2Ch] [ebp-C0h] BYREF
  int v9; // [esp-28h] [ebp-BCh]
  int v10; // [esp-24h] [ebp-B8h]
  int v11; // [esp-20h] [ebp-B4h]
  int v12; // [esp-1Ch] [ebp-B0h]
  int v13; // [esp-18h] [ebp-ACh]
  int v14; // [esp-14h] [ebp-A8h]
  int v15; // [esp-10h] [ebp-A4h]
  int v16; // [esp-Ch] [ebp-A0h]
  int v17; // [esp-8h] [ebp-9Ch]
  int v18; // [esp-4h] [ebp-98h]
  float v19; // [esp+0h] [ebp-94h]
  int v20; // [esp+4h] [ebp-90h]
  float v21; // [esp+8h] [ebp-8Ch]
  char *v22; // [esp+Ch] [ebp-88h]
  float v23; // [esp+1Ch] [ebp-78h]
  float v24; // [esp+20h] [ebp-74h]
  float v25; // [esp+24h] [ebp-70h]
  float v26; // [esp+28h] [ebp-6Ch]
  char *v27; // [esp+2Ch] [ebp-68h]
  _BYTE v28[28]; // [esp+30h] [ebp-64h] BYREF
  _BYTE v29[28]; // [esp+4Ch] [ebp-48h] BYREF
  _BYTE v30[28]; // [esp+68h] [ebp-2Ch] BYREF
  int v31; // [esp+90h] [ebp-4h]

  std::string::string(v29);
  v31 = 0;
  Stream = Event::GetStream(a1);
  v2 = sub_10003D82();
  v3 = *((_DWORD *)Stream + 3);
  if ( v3 + v2 <= *((_DWORD *)Stream + 2) )
  {
    memcpy(byte_103B6158, (const void *)(v3 + *((_DWORD *)Stream + 1)), v2);
    v22 = byte_103B6158;
    byte_103B6158[v2] = 0;
    std::string::operator=(v29, v22);
    *((_DWORD *)Stream + 3) += v2;
  }
  v4 = (const char *)std::string::c_str(v29);
  v5 = atow(v4);
  std::wstring::wstring(v28, v5);
  LOBYTE(v31) = 1;
  Precacher::GetText(v30, v28);
  LOBYTE(v31) = 3;
  std::wstring::~wstring(v28);
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
  v6 = (const wchar_t *)std::wstring::c_str(v30);
  v7 = wtoa(v6);
  v27 = &v8;
  std::string::string(&v8, v7);
  LOBYTE(v31) = 4;
  sub_1001375A();
  LOBYTE(v31) = 3;
  sub_10002275(v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, (int)v22);
  LOBYTE(v31) = 0;
  std::wstring::~wstring(v30);
  v31 = -1;
  std::string::~string(v29);
}
