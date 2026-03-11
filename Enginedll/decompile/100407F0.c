/*
 * func-name: ?Save@MaterialSerializer@@QAE_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVMaterialLibrary@@@Z
 * func-address: 0x100407f0
 * callers: 0x100e28d0
 * callees: 0x100405a0, 0x10049140, 0x1004b530
 */

char __thiscall MaterialSerializer::Save(
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
  int Document; // eax
  struct xercesc_2_5::DOMElement *v12; // eax
  char v14; // [esp-1Ch] [ebp-2Ch] BYREF
  int v15; // [esp-18h] [ebp-28h]
  int v16; // [esp-14h] [ebp-24h]
  int v17; // [esp-10h] [ebp-20h]
  int v18; // [esp-Ch] [ebp-1Ch]
  int v19; // [esp-8h] [ebp-18h]
  char *v20; // [esp-4h] [ebp-14h]
  int v21; // [esp+Ch] [ebp-4h]

  v20 = &a2;
  v10 = a9 + 16;
  v21 = 0;
  *((_DWORD *)this + 23) = a9;
  std::string::operator=(v10, v20);
  a9 = &v14;
  std::string::string(&v14, "MaterialLibrary");
  Document = XMLSystem::CreateDocument(v14, v15, v16, v17, v18, v19, v20);
  v12 = (struct xercesc_2_5::DOMElement *)(*(int (__thiscall **)(int))(*(_DWORD *)Document + 48))(Document);
  MaterialSerializer::WriteMaterials(this, v12);
  a9 = &v14;
  std::string::string(&v14, &a2);
  XMLSystem::Save(v14, v15, v16, v17, v18, v19, v20);
  v21 = -1;
  std::string::~string(&a2);
  return 1;
}
