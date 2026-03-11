/*
 * func-name: sub_10048070
 * func-address: 0x10048070
 * callers: 0x10048730
 * callees: 0x10044ab0, 0x10047d90, 0x10049250
 */

unsigned int __thiscall sub_10048070(char *this, int a2)
{
  unsigned int result; // eax
  int Name; // eax
  char v4; // bl
  int v5; // eax
  char v6; // bl
  int v7; // eax
  char v8; // bl
  _BYTE v10[28]; // [esp+Ch] [ebp-60h] BYREF
  _BYTE v11[28]; // [esp+28h] [ebp-44h] BYREF
  _BYTE v12[28]; // [esp+44h] [ebp-28h] BYREF
  int v13; // [esp+68h] [ebp-4h]

  result = (*(__int16 (__thiscall **)(int))(*(_DWORD *)a2 + 12))(a2) - 1;
  if ( !result )
  {
    Name = XMLSystem::GetName(v10, a2);
    v13 = 0;
    v4 = std::operator==<char>(Name, "SceneInfo");
    v13 = -1;
    result = std::string::~string(v10);
    if ( !v4 )
    {
      v5 = XMLSystem::GetName(v11, a2);
      v13 = 1;
      v6 = std::operator==<char>(v5, "MaterialList");
      v13 = -1;
      std::string::~string(v11);
      if ( v6 )
      {
        return sub_10044AB0((int)this, a2);
      }
      else
      {
        v7 = XMLSystem::GetName(v12, a2);
        v13 = 2;
        v8 = std::operator==<char>(v7, "Node");
        v13 = -1;
        result = std::string::~string(v12);
        if ( v8 )
          return sub_10047D90(this, a2);
      }
    }
  }
  return result;
}
