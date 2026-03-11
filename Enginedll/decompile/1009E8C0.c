/*
 * func-name: ?RemoveSceneOffset@ModelFrame@@QAEXXZ
 * func-address: 0x1009e8c0
 * callers: 0x100ee2e0
 * callees: 0x101786e0, 0x101a251c
 */

void __thiscall ModelFrame::RemoveSceneOffset(ModelFrame *this)
{
  int v2; // ecx
  int v3; // esi
  int v4; // ecx
  float v5[16]; // [esp+10h] [ebp-40h] BYREF

  v2 = *((_DWORD *)this + 1);
  if ( !v2
    || !((*((_DWORD *)this + 2) - v2) >> 2)
    || !**((_DWORD **)this + 1)
    || (v3 = *((_DWORD *)this + 89)) == 0
    || (v4 = *(_DWORD *)(v3 + 4)) == 0
    || !((*(_DWORD *)(v3 + 8) - v4) >> 2)
    || !**(_DWORD **)(v3 + 4) )
  {
    memset(v5, 0, sizeof(v5));
    sub_101786E0(1.0);
    v5[15] = 1.0;
    qmemcpy((char *)this + 164, v5, 0x40u);
    memset(v5, 0, sizeof(v5));
    sub_101786E0(1.0);
    v5[15] = 1.0;
    qmemcpy((char *)this + 100, v5, 0x40u);
  }
}
