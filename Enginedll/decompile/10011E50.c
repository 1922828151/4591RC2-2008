/*
 * func-name: ?create@Factory@@SAPAVActor@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVWorld@@@Z
 * func-address: 0x10011e50
 * callers: 0x10006780, 0x10038ca0, 0x10045740, 0x100542a0, 0x10085820, 0x1010ab60
 * callees: 0x1000e0c0, 0x10010a60
 */

int __cdecl Factory::create(char a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  _DWORD *v8; // eax
  int v9; // esi
  char v11[32]; // [esp-1Ch] [ebp-30h] BYREF
  char *v12; // [esp+4h] [ebp-10h]
  int v13; // [esp+10h] [ebp-4h]

  v12 = v11;
  v13 = 0;
  std::string::string(v11, &a1);
  if ( Factory::FoundInRegistry(v11[0]) )
  {
    v8 = sub_10010A60(&_registry, (int)&a1);
    v9 = (**(int (__thiscall ***)(_DWORD, int))*v8)(*v8, a8);
    v13 = -1;
    std::string::~string(&a1);
    return v9;
  }
  else
  {
    v13 = -1;
    std::string::~string(&a1);
    return 0;
  }
}
