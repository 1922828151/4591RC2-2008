/*
 * func-name: sub_10047170
 * func-address: 0x10047170
 * callers: 0x10047a80
 * callees: 0x10015b30, 0x100492d0, 0x1004a5e0
 */

char __thiscall sub_10047170(int **this, int a2)
{
  int FirstNode; // edi
  int *v5; // eax
  int v6; // edx
  int v7; // eax
  char v8; // [esp-1Ch] [ebp-54h] BYREF
  int v9; // [esp-18h] [ebp-50h]
  int v10; // [esp-14h] [ebp-4Ch]
  int v11; // [esp-10h] [ebp-48h]
  int v12; // [esp-Ch] [ebp-44h]
  int v13; // [esp-8h] [ebp-40h]
  int v14; // [esp-4h] [ebp-3Ch]
  char *v15; // [esp+Ch] [ebp-2Ch]
  _BYTE v16[28]; // [esp+10h] [ebp-28h] BYREF
  int v17; // [esp+34h] [ebp-4h]

  v15 = &v8;
  std::string::string(&v8, "SphericalHarmonics");
  FirstNode = XMLSystem::FindFirstNode(a2, v8, v9, v10, v11, v12, v13, v14);
  if ( !FirstNode )
    return 0;
  std::string::string(&v8, "File");
  v5 = (int *)XMLSystem::FindFirstNode(FirstNode, v8, v9, v10, v11, v12, v13, v14);
  if ( v5 )
  {
    v6 = *v5;
    v14 = 0;
    v7 = (*(int (__thiscall **)(int *, const wchar_t *))(v6 + 164))(v5, L"PRTFile");
    XMLSystem::GetString(v16, v7, v14);
    v17 = 0;
    if ( (unsigned __int8)std::operator!=<char>(v16, &unk_101BCE86) )
      sub_10015B30(this[41], (int)v16);
    v17 = -1;
    std::string::~string(v16);
  }
  return 1;
}
