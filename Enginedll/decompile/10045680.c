/*
 * func-name: sub_10045680
 * func-address: 0x10045680
 * callers: 0x10047d90
 * callees: 0x10015b30, 0x100492d0, 0x1004a5e0
 */

int __thiscall sub_10045680(_DWORD *this, int a2)
{
  int FirstNode; // ebx
  int *v4; // eax
  int v5; // edx
  int v6; // eax
  int String; // eax
  int *v8; // ecx
  char v10; // [esp-1Ch] [ebp-54h] BYREF
  int v11; // [esp-18h] [ebp-50h]
  int v12; // [esp-14h] [ebp-4Ch]
  int v13; // [esp-10h] [ebp-48h]
  int v14; // [esp-Ch] [ebp-44h]
  int v15; // [esp-8h] [ebp-40h]
  int v16; // [esp-4h] [ebp-3Ch]
  char *v17; // [esp+Ch] [ebp-2Ch]
  _BYTE v18[28]; // [esp+10h] [ebp-28h] BYREF
  int v19; // [esp+34h] [ebp-4h]

  v17 = &v10;
  std::string::string(&v10, "LightData");
  FirstNode = XMLSystem::FindFirstNode(a2, v10, v11, v12, v13, v14, v15, v16);
  std::string::string(&v10, "ProjectionMap");
  v4 = (int *)XMLSystem::FindFirstNode(FirstNode, v10, v11, v12, v13, v14, v15, v16);
  v5 = *v4;
  v16 = 0;
  v6 = (*(int (__thiscall **)(int *, const wchar_t *))(v5 + 164))(v4, L"Name");
  String = XMLSystem::GetString(v18, v6, v16);
  v8 = (int *)this[41];
  v19 = 0;
  sub_10015B30(v8, String);
  v19 = -1;
  return std::string::~string(v18);
}
