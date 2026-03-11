/*
 * func-name: ?Load@MaterialSerializer@@QAE_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVMaterialLibrary@@@Z
 * func-address: 0x10043050
 * callers: 0x100e2820
 * callees: 0x10042bf0, 0x100490f0, 0x10049250, 0x1004a5a0, 0x1004ae30, 0x10097220
 */

char __thiscall MaterialSerializer::Load(
        MaterialSerializer *this,
        char a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        char *a9)
{
  char *v10; // ecx
  struct xercesc_2_5::DOMTreeWalker *Walker; // ebp
  struct xercesc_2_5::DOMElement *i; // esi
  int Name; // eax
  char v15; // bl
  char v16; // [esp-1Ch] [ebp-54h] BYREF
  int v17; // [esp-18h] [ebp-50h]
  int v18; // [esp-14h] [ebp-4Ch]
  int v19; // [esp-10h] [ebp-48h]
  int v20; // [esp-Ch] [ebp-44h]
  int v21; // [esp-8h] [ebp-40h]
  char *v22; // [esp-4h] [ebp-3Ch]
  _BYTE v23[28]; // [esp+10h] [ebp-28h] BYREF
  int v24; // [esp+34h] [ebp-4h]

  v24 = 0;
  FindMedia(&a2, "Materials", 0, 0);
  v22 = &a2;
  v10 = a9 + 16;
  *((_DWORD *)this + 23) = a9;
  std::string::operator=(v10, v22);
  a9 = &v16;
  std::string::string(&v16, &a2);
  if ( (unsigned __int8)XMLSystem::Load(v16, v17, v18, v19, v20, v21, v22) )
  {
    Walker = XMLSystem::GetWalker(this);
    for ( i = (struct xercesc_2_5::DOMElement *)(*(int (__thiscall **)(struct xercesc_2_5::DOMTreeWalker *))(*(_DWORD *)Walker + 48))(Walker);
          i;
          i = (struct xercesc_2_5::DOMElement *)(*(int (__thiscall **)(struct xercesc_2_5::DOMTreeWalker *))(*(_DWORD *)Walker + 40))(Walker) )
    {
      if ( (*(__int16 (__thiscall **)(struct xercesc_2_5::DOMElement *))(*(_DWORD *)i + 12))(i) == 1 )
      {
        Name = XMLSystem::GetName(v23, i);
        LOBYTE(v24) = 1;
        v15 = std::operator==<char>(Name, "Material");
        LOBYTE(v24) = 0;
        std::string::~string(v23);
        if ( v15 )
          MaterialSerializer::ReadMaterial(this, i);
      }
    }
    XMLSystem::Destroy(this);
    v24 = -1;
    std::string::~string(&a2);
    return 1;
  }
  else
  {
    v24 = -1;
    std::string::~string(&a2);
    return 0;
  }
}
