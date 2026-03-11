/*
 * func-name: sub_1017C8D0
 * func-address: 0x1017c8d0
 * callers: 0x10068c50
 * callees: 0x1017a7e0, 0x1017c4e0, 0x101a2c8e
 */

int __thiscall sub_1017C8D0(
        _DWORD *this,
        char a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        char a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15)
{
  _BYTE *v16; // eax
  char v17; // bl
  int v18; // esi
  int v19; // eax
  _BYTE *v20; // esi
  _BYTE *v21; // ebx
  const char *v22; // eax
  int v23; // edi
  const char *v24; // eax
  int v25; // esi
  const char *v26; // eax
  int v27; // edi
  const char *v28; // eax
  int v29; // esi
  int v31[5]; // [esp-38h] [ebp-F0h] BYREF
  int v32; // [esp-24h] [ebp-DCh] BYREF
  int v33; // [esp-20h] [ebp-D8h] BYREF
  int v34; // [esp-1Ch] [ebp-D4h] BYREF
  int v35; // [esp-18h] [ebp-D0h]
  int v36; // [esp-14h] [ebp-CCh]
  int v37; // [esp-10h] [ebp-C8h]
  int v38; // [esp-Ch] [ebp-C4h]
  int v39; // [esp-8h] [ebp-C0h]
  int v40; // [esp-4h] [ebp-BCh]
  int *v41; // [esp+14h] [ebp-A4h]
  int *v42; // [esp+18h] [ebp-A0h]
  _BYTE v43[28]; // [esp+1Ch] [ebp-9Ch] BYREF
  _BYTE v44[28]; // [esp+38h] [ebp-80h] BYREF
  _BYTE v45[28]; // [esp+54h] [ebp-64h] BYREF
  _BYTE v46[28]; // [esp+70h] [ebp-48h] BYREF
  _BYTE v47[28]; // [esp+8Ch] [ebp-2Ch] BYREF
  int v48; // [esp+B4h] [ebp-4h]

  v41 = &v34;
  v48 = 1;
  std::string::string(&v34, &a9);
  v42 = v31;
  LOBYTE(v48) = 2;
  std::string::string(v31, &a2);
  LOBYTE(v48) = 1;
  sub_1017C4E0(this, (int)v47, v31[0], v31[1], v31[2], v31[3], v31[4], v32, v33, v34, v35, v36, v37, v38, v39, v40);
  v40 = (int)"RGBA";
  v39 = 0;
  v41 = &v32;
  LOBYTE(v48) = 3;
  std::string::string(&v32, v47);
  v16 = sub_1017A7E0(v43, v32, v33, v34, v35, v36, v37, v38, v39);
  LOBYTE(v48) = 4;
  v17 = std::operator!=<char>(v16, v40);
  LOBYTE(v48) = 3;
  std::string::~string(v43);
  if ( v17 )
  {
    v18 = *(_DWORD *)dword_11249F38;
    v40 = std::string::c_str(v47);
    v19 = std::string::c_str(&a2);
    (*(void (__cdecl **)(void *, const char *, int))(v18 + 4))(
      dword_11249F38,
      "ConfigFile::GetColor: request for invalid key/value pair: '%s=%s'. Check your config file.\n"
      "Color lines should be in correct format. Example: color = RGBA 100 200 100 155",
      v19);
  }
  v40 = 4;
  v41 = &v33;
  std::string::string(&v33, v47);
  v20 = sub_1017A7E0(v46, v33, v34, v35, v36, v37, v38, v39, v40);
  v40 = 1;
  v41 = &v33;
  LOBYTE(v48) = 5;
  std::string::string(&v33, v47);
  v21 = sub_1017A7E0(v45, v33, v34, v35, v36, v37, v38, v39, v40);
  v40 = 2;
  v41 = &v33;
  LOBYTE(v48) = 6;
  std::string::string(&v33, v47);
  v42 = (int *)sub_1017A7E0(v44, v33, v34, v35, v36, v37, v38, v39, v40);
  v40 = 3;
  v41 = &v33;
  LOBYTE(v48) = 7;
  std::string::string(&v33, v47);
  v41 = (int *)sub_1017A7E0(v43, v33, v34, v35, v36, v37, v38, v39, v40);
  LOBYTE(v48) = 8;
  v22 = (const char *)std::string::c_str(v20);
  v23 = atoi(v22) << 8;
  v24 = (const char *)std::string::c_str(v21);
  v25 = (v23 | atoi(v24)) << 8;
  v26 = (const char *)std::string::c_str(v42);
  v27 = (v25 | atoi(v26)) << 8;
  v28 = (const char *)std::string::c_str(v41);
  v29 = v27 | atoi(v28);
  LOBYTE(v48) = 7;
  std::string::~string(v43);
  LOBYTE(v48) = 6;
  std::string::~string(v44);
  LOBYTE(v48) = 5;
  std::string::~string(v45);
  LOBYTE(v48) = 3;
  std::string::~string(v46);
  LOBYTE(v48) = 1;
  std::string::~string(v47);
  LOBYTE(v48) = 0;
  std::string::~string(&a2);
  v48 = -1;
  std::string::~string(&a9);
  return v29;
}
