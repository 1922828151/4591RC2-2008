/*
 * func-name: ?CacheTextureTMP@Precacher@@SAPAVTexture@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
 * func-address: 0x1010b910
 * callers: 0x1010bf60, 0x1010cb00
 * callees: 0x1010fd40, 0x10114f50, 0x10136290, 0x10136530, 0x1017a2d0, 0x1017a310, 0x1017a610, 0x101a2534
 */

Texture *__cdecl Precacher::CacheTextureTMP(char a1)
{
  int v1; // eax
  int v2; // eax
  void *v3; // esi
  Texture *v4; // eax
  Texture *v5; // esi
  int v6; // eax
  char v8; // [esp-20h] [ebp-8Ch] BYREF
  int v9; // [esp-1Ch] [ebp-88h]
  int v10; // [esp-18h] [ebp-84h]
  int v11; // [esp-14h] [ebp-80h]
  int v12; // [esp-10h] [ebp-7Ch]
  int v13; // [esp-Ch] [ebp-78h]
  int v14; // [esp-8h] [ebp-74h]
  int v15; // [esp-4h] [ebp-70h]
  float v16; // [esp+0h] [ebp-6Ch]
  float v17; // [esp+4h] [ebp-68h]
  float v18; // [esp+8h] [ebp-64h]
  float v19; // [esp+Ch] [ebp-60h]
  float v20; // [esp+10h] [ebp-5Ch]
  int v21; // [esp+14h] [ebp-58h]
  _DWORD v22[2]; // [esp+20h] [ebp-4Ch] BYREF
  _BYTE v23[28]; // [esp+28h] [ebp-44h] BYREF
  _BYTE v24[28]; // [esp+44h] [ebp-28h] BYREF
  int v25; // [esp+68h] [ebp-4h]

  v25 = 0;
  std::string::string(v23);
  LOBYTE(v25) = 1;
  v1 = sub_1017A2D0(v24, &a1);
  LOBYTE(v25) = 2;
  std::string::operator=(v23, v1);
  LOBYTE(v25) = 1;
  std::string::~string(v24);
  v2 = sub_1017A310(v24, v23);
  LOBYTE(v25) = 3;
  std::string::operator=(v23, v2);
  LOBYTE(v25) = 1;
  std::string::~string(v24);
  sub_1017A610(v23);
  sub_1010FD40(v22, v23);
  v3 = dword_1124151C;
  if ( !v22[0] || (_UNKNOWN *)v22[0] != &unk_11241518 )
    invalid_parameter_noinfo();
  if ( (void *)v22[1] == v3 )
  {
    v4 = (Texture *)operator new(0x9Cu);
    v22[0] = v4;
    LOBYTE(v25) = 4;
    if ( v4 )
      v5 = Texture::Texture(v4);
    else
      v5 = 0;
    v21 = 0;
    v20 = 0.0;
    v19 = 1.0;
    LOBYTE(v25) = 1;
    v18 = 1.0;
    v17 = 0.0;
    v16 = 0.0;
    v15 = 0;
    v6 = std::string::c_str(&a1);
    v22[0] = &v8;
    std::string::string(&v8, v6);
    Texture::Load(v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21);
    *(_DWORD *)sub_10114F50(v23) = v5;
    LOBYTE(v25) = 0;
    std::string::~string(v23);
    v25 = -1;
    std::string::~string(&a1);
    return v5;
  }
  else
  {
    LOBYTE(v25) = 0;
    std::string::~string(v23);
    v25 = -1;
    std::string::~string(&a1);
    return 0;
  }
}
