/*
 * func-name: ?CacheMaterialTMP@Precacher@@SAPAVMaterial@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
 * func-address: 0x1010bad0
 * callers: 0x1010c090, 0x1010cb00
 * callees: 0x100e42b0, 0x100e6db0, 0x1010fd40, 0x10115190, 0x1017a2d0, 0x1017a310, 0x1017a610, 0x101a2534
 */

Material *__cdecl Precacher::CacheMaterialTMP(char a1)
{
  int v1; // eax
  int v2; // eax
  void *v3; // esi
  Material *v4; // eax
  Material *v5; // esi
  char *v6; // eax
  _DWORD v8[2]; // [esp+8h] [ebp-4Ch] BYREF
  _BYTE v9[28]; // [esp+10h] [ebp-44h] BYREF
  _BYTE v10[28]; // [esp+2Ch] [ebp-28h] BYREF
  int v11; // [esp+50h] [ebp-4h]

  v11 = 0;
  std::string::string(v9);
  LOBYTE(v11) = 1;
  v1 = sub_1017A2D0(v10, &a1);
  LOBYTE(v11) = 2;
  std::string::operator=(v9, v1);
  LOBYTE(v11) = 1;
  std::string::~string(v10);
  v2 = sub_1017A310(v10, v9);
  LOBYTE(v11) = 3;
  std::string::operator=(v9, v2);
  LOBYTE(v11) = 1;
  std::string::~string(v10);
  sub_1017A610(v9);
  sub_1010FD40(v8, v9);
  v3 = dword_112415E4;
  if ( !v8[0] || (_UNKNOWN *)v8[0] != &unk_112415E0 )
    invalid_parameter_noinfo();
  if ( (void *)v8[1] == v3 )
  {
    v4 = (Material *)operator new(0x154u);
    v8[0] = v4;
    LOBYTE(v11) = 4;
    if ( v4 )
      v5 = Material::Material(v4);
    else
      v5 = 0;
    LOBYTE(v11) = 1;
    v6 = (char *)std::string::c_str(&a1);
    Material::Load(v5, v6);
    *(_DWORD *)sub_10115190(v9) = v5;
    LOBYTE(v11) = 0;
    std::string::~string(v9);
    v11 = -1;
    std::string::~string(&a1);
    return v5;
  }
  else
  {
    LOBYTE(v11) = 0;
    std::string::~string(v9);
    v11 = -1;
    std::string::~string(&a1);
    return 0;
  }
}
