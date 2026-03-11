/*
 * func-name: ?create@Factory@@SAPAVActor@@KPAVWorld@@@Z
 * func-address: 0x10011d80
 * callers: none
 * callees: 0x1000b4e0, 0x1000e0c0, 0x10010a60
 */

struct Actor *__cdecl Factory::create(unsigned int a1, struct World *a2)
{
  _DWORD *v2; // eax
  int v3; // esi
  char v5[32]; // [esp-1Ch] [ebp-4Ch] BYREF
  char *v6; // [esp+4h] [ebp-2Ch]
  _BYTE v7[28]; // [esp+8h] [ebp-28h] BYREF
  int v8; // [esp+2Ch] [ebp-4h]

  Factory::GetClassNameA((int)v7, a1);
  v8 = 0;
  if ( std::string::length(v7) && (v6 = v5, std::string::string(v5, v7), Factory::FoundInRegistry(v5[0])) )
  {
    v2 = sub_10010A60(&_registry, (int)v7);
    v3 = (**(int (__thiscall ***)(_DWORD, struct World *))*v2)(*v2, a2);
    v8 = -1;
    std::string::~string(v7);
    return (struct Actor *)v3;
  }
  else
  {
    v8 = -1;
    std::string::~string(v7);
    return 0;
  }
}
