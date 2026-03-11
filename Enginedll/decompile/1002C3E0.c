/*
 * func-name: ?_Assign_n@?$vector@UVFormat@VertexManager@@V?$allocator@UVFormat@VertexManager@@@std@@@std@@IAEXIABUVFormat@VertexManager@@@Z
 * func-address: 0x1002c3e0
 * callers: 0x1002f060
 * callees: 0x10026520, 0x100265d0
 */

int __thiscall std::vector<VertexManager::VFormat>::_Assign_n(char **this, unsigned int a2, int *a3)
{
  int v3; // eax
  char *v5; // edi
  bool v6; // cc
  char *v7; // ebx
  char *v8; // edi
  int v10; // [esp+Ch] [ebp-3Ch] BYREF
  int v11[2]; // [esp+14h] [ebp-34h] BYREF
  _BYTE v12[28]; // [esp+1Ch] [ebp-2Ch] BYREF
  int v13; // [esp+38h] [ebp-10h]
  int v14; // [esp+44h] [ebp-4h]

  v3 = *a3;
  v11[1] = a3[1];
  v11[0] = v3;
  std::string::string(v12, a3 + 2);
  v13 = a3[9];
  v5 = this[2];
  v6 = this[1] <= v5;
  v14 = 0;
  if ( !v6 )
    invalid_parameter_noinfo();
  v7 = this[1];
  if ( v7 > this[2] )
    invalid_parameter_noinfo();
  std::vector<VertexManager::VFormat>::erase(this, &v10, (int)this, v7, (int)this, v5);
  v8 = this[1];
  if ( v8 > this[2] )
    invalid_parameter_noinfo();
  std::vector<VertexManager::VFormat>::_Insert_n((int)this, (int)this, v8, a2, v11);
  v14 = -1;
  return std::string::~string(v12);
}
