/*
 * func-name: ?AddFxMaterial@AdapterActor@GameClient@@QAEHABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z_0
 * func-address: 0x100f3cf0
 * callers: 0x1001640a
 * callees: 0x1000b1a9, 0x100161b2, 0x102c9d62
 */

int __thiscall GameClient::AdapterActor::AddFxMaterial(_DWORD *this, void *a2, void *a3)
{
  int Material; // esi
  int v5; // esi
  int v7; // [esp+4h] [ebp-68h] BYREF
  int v8; // [esp+8h] [ebp-64h]
  int v9; // [esp+Ch] [ebp-60h]
  int v10; // [esp+10h] [ebp-5Ch]
  int v11; // [esp+14h] [ebp-58h]
  int v12; // [esp+18h] [ebp-54h]
  int v13; // [esp+1Ch] [ebp-50h]
  int *v14; // [esp+34h] [ebp-38h]
  int v15; // [esp+38h] [ebp-34h] BYREF
  _BYTE v16[32]; // [esp+3Ch] [ebp-30h] BYREF
  int v17; // [esp+68h] [ebp-4h]

  if ( (unsigned __int8)std::operator==<char>(a2, &unk_1031116A) )
    return -1;
  if ( (unsigned __int8)std::operator==<char>(a3, &unk_1031116B) )
    return -1;
  v14 = &v7;
  std::string::string(&v7, a2);
  Material = StaticModel::FindMaterial(this[179], v7, v8, v9, v10, v11, v12, v13);
  if ( !Material )
    return -1;
  v14 = &v7;
  std::string::string(&v7, a3);
  if ( !Material::FindVar(Material, v7, v8, v9, v10, v11, v12, v13) )
    return -1;
  std::string::string(v16);
  v17 = 0;
  v15 = Material;
  std::string::operator=(v16, a3);
  sub_1000B1A9((int)&v15);
  v5 = sub_100161B2() - 1;
  v17 = -1;
  std::string::~string(v16);
  return v5;
}
