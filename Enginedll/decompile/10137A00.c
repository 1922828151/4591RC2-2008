/*
 * func-name: ?FindMeshFrame@World@@QAEPAUModelFrame@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAU2@@Z
 * func-address: 0x10137a00
 * callers: 0x1009d930
 * callees: 0x1009dd90, 0x100ee5c0
 */

ModelFrame *__thiscall World::FindMeshFrame(
        _DWORD *this,
        char a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        struct ModelFrame *a9)
{
  struct ModelFrame *v10; // ebp
  unsigned int v11; // edi
  int v12; // ecx
  int v13; // ecx
  struct ModelFrame *NodeHandle; // eax
  int v15; // ecx
  ModelFrame *v16; // ebx
  char v18; // [esp-20h] [ebp-3Ch] BYREF
  int v19; // [esp-1Ch] [ebp-38h]
  int v20; // [esp-18h] [ebp-34h]
  int v21; // [esp-14h] [ebp-30h]
  int v22; // [esp-10h] [ebp-2Ch]
  int v23; // [esp-Ch] [ebp-28h]
  int v24; // [esp-8h] [ebp-24h]
  struct ModelFrame *v25; // [esp-4h] [ebp-20h]
  int v26; // [esp+18h] [ebp-4h]

  v10 = a9;
  v11 = 0;
  v26 = 0;
  while ( 1 )
  {
    v12 = this[806];
    if ( !v12 || v11 >= (this[807] - v12) >> 2 )
      break;
    if ( *(_DWORD *)(*(_DWORD *)(this[806] + 4 * v11) + 716) )
    {
      v25 = v10;
      a9 = (struct ModelFrame *)&v18;
      std::string::string(&v18, &a2);
      v13 = this[806];
      if ( !v13 || v11 >= (this[807] - v13) >> 2 )
        invalid_parameter_noinfo();
      NodeHandle = StaticModel::GetNodeHandle(
                     *(ModelFrame ***)(*(_DWORD *)(4 * v11 + this[806]) + 716),
                     v18,
                     v19,
                     v20,
                     v21,
                     v22,
                     v23,
                     v24,
                     v25);
      v15 = this[806];
      v16 = NodeHandle;
      if ( !v15 || v11 >= (this[807] - v15) >> 2 )
        invalid_parameter_noinfo();
      if ( v16 && ModelFrame::GetMesh(v16, 0) )
      {
        v26 = -1;
        std::string::~string(&a2);
        return v16;
      }
    }
    ++v11;
  }
  v26 = -1;
  std::string::~string(&a2);
  return 0;
}
