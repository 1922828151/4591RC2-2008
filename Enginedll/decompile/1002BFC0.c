/*
 * func-name: ??0?$vector@UVFormat@VertexManager@@V?$allocator@UVFormat@VertexManager@@@std@@@std@@QAE@I@Z
 * func-address: 0x1002bfc0
 * callers: none
 * callees: 0x10026280
 */

_DWORD *__thiscall std::vector<VertexManager::VFormat>::vector<VertexManager::VFormat>(_DWORD *this, unsigned int a2)
{
  int v4; // [esp+4h] [ebp-34h] BYREF
  _BYTE v5[32]; // [esp+Ch] [ebp-2Ch] BYREF
  int v6; // [esp+34h] [ebp-4h]

  std::string::string(v5);
  v6 = 0;
  std::vector<VertexManager::VFormat>::_Construct_n(this, a2, &v4);
  v6 = -1;
  std::string::~string(v5);
  return this;
}
