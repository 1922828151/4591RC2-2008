/*
 * func-name: ?FillIndex@TerrainNode@@QAE_NAAPAVMesh@@00@Z
 * func-address: 0x1015f2a0
 * callers: 0x10160e00, 0x10162160
 * callees: 0x1015d580, 0x101a24ac, 0x101a251c, 0x101a252e
 */

char __thiscall TerrainNode::FillIndex(TerrainNode *this, struct Mesh **a2, struct Mesh **a3, struct Mesh **a4)
{
  void *v4; // eax
  void *v5; // eax
  int Val; // [esp+8h] [ebp-4h] BYREF

  Val = (int)this;
  if ( !TerrainNode::s_pwCompleteIndex || !TerrainNode::s_pwReduceIndex )
  {
    TerrainNode::s_pwCompleteIndex = (unsigned __int16 *)operator new(0xBD00u);
    TerrainNode::s_pwReduceIndex = operator new(0x3C00u);
    TerrainNode::GenerateIndex(TerrainNode::s_pwCompleteIndex, (unsigned __int16 *)TerrainNode::s_pwReduceIndex);
  }
  if ( *a2 )
  {
    v4 = (void *)(*(int (__thiscall **)(_DWORD, int *))(*(_DWORD *)*a2 + 136))(*a2, &Val);
    memcpy(v4, TerrainNode::s_pwCompleteIndex, 0xBD00u);
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*a2 + 140))(*a2);
  }
  if ( *a3 )
  {
    v5 = (void *)(*(int (__thiscall **)(_DWORD, int *))(*(_DWORD *)*a3 + 136))(*a3, &Val);
    memcpy(v5, TerrainNode::s_pwReduceIndex, 0x3000u);
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*a3 + 140))(*a3);
  }
  if ( *a4 )
  {
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*a4 + 136))(*a4);
    (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*a4 + 140))(*a4, 3072);
  }
  return 1;
}
