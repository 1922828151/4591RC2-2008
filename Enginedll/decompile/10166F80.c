/*
 * func-name: sub_10166F80
 * func-address: 0x10166f80
 * callers: none
 * callees: 0x10013a60
 */

char *__thiscall sub_10166F80(char *this)
{
  char v3; // [esp-24h] [ebp-2Ch] BYREF
  int v4; // [esp-20h] [ebp-28h]
  int v5; // [esp-1Ch] [ebp-24h]
  int v6; // [esp-18h] [ebp-20h]
  int v7; // [esp-14h] [ebp-1Ch]
  int v8; // [esp-10h] [ebp-18h]
  int v9; // [esp-Ch] [ebp-14h]
  int v10; // [esp-8h] [ebp-10h]
  int v11; // [esp-4h] [ebp-Ch]
  char *v12; // [esp+4h] [ebp-4h]

  v11 = 1;
  v10 = 1;
  v12 = &v3;
  std::string::string(&v3, "TerrainNode");
  Factory::Factory(this, v3, v4, v5, v6, v7, v8, v9, v10, v11);
  *(_DWORD *)this = &TypedFactory<TerrainNode>::`vftable';
  return this;
}
