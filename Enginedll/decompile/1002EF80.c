/*
 * func-name: ?resize@?$vector@UVFormat@VertexManager@@V?$allocator@UVFormat@VertexManager@@@std@@@std@@QAEXI@Z
 * func-address: 0x1002ef80
 * callers: none
 * callees: 0x1002c1f0
 */

int __thiscall std::vector<VertexManager::VFormat>::resize(void *this, unsigned int a2)
{
  int v4[2]; // [esp-28h] [ebp-30h] BYREF
  char v5; // [esp-20h] [ebp-28h] BYREF
  int v6; // [esp-1Ch] [ebp-24h]
  int v7; // [esp-18h] [ebp-20h]
  int v8; // [esp-14h] [ebp-1Ch]
  int v9; // [esp-10h] [ebp-18h]
  int v10; // [esp-Ch] [ebp-14h]
  int v11; // [esp-8h] [ebp-10h]
  int v12; // [esp-4h] [ebp-Ch]
  int *v13; // [esp+4h] [ebp-4h]

  v13 = v4;
  std::string::string(&v5);
  return std::vector<VertexManager::VFormat>::resize((int)this, a2, v4[0], v4[1], v5, v6, v7, v8, v9, v10, v11, v12);
}
