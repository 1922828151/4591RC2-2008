/*
 * func-name: ?CacheMaterial@Precacher@@SAPAVMaterial@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
 * func-address: 0x1010c090
 * callers: none
 * callees: 0x100e42b0, 0x100e4420, 0x100e6db0, 0x100f5b70, 0x1010bad0, 0x1010eef0, 0x101a2500, 0x101a2534
 */

Material *__cdecl Precacher::CacheMaterial(char a1, int a2, int a3, int a4, int a5, int a6, int a7, char *a8)
{
  Material *v8; // eax
  Material *v9; // esi
  Material *v10; // ebp
  char *v11; // eax
  _DWORD *v12; // edi
  _DWORD *v13; // esi
  char v15[28]; // [esp-20h] [ebp-38h] BYREF
  char *v16; // [esp-4h] [ebp-1Ch]
  int v17; // [esp+14h] [ebp-4h]

  v16 = a8;
  a8 = v15;
  v17 = 0;
  std::string::string(v15, &a1);
  Precacher::CacheMaterialTMP(v15[0]);
  v8 = (Material *)operator new(0x154u);
  a8 = (char *)v8;
  LOBYTE(v17) = 1;
  if ( v8 )
    v9 = Material::Material(v8);
  else
    v9 = 0;
  v10 = v9;
  LOBYTE(v17) = 0;
  a8 = (char *)v9;
  v11 = (char *)std::string::c_str(&a1);
  Material::Load(v9, v11);
  if ( *((_BYTE *)v9 + 16) )
  {
    v12 = (_DWORD *)(dword_112414DC + 4);
    v13 = sub_100F5B70(dword_112414DC, *(_DWORD *)(dword_112414DC + 4), &a8);
    sub_1010EEF0(1);
    *v12 = v13;
    *(_DWORD *)v13[1] = v13;
  }
  else
  {
    Material::~Material(v9);
    operator delete(v9);
    v10 = 0;
  }
  v17 = -1;
  std::string::~string(&a1);
  return v10;
}
