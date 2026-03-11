/*
 * func-name: ?_Ufill@?$vector@VBBox@@V?$allocator@VBBox@@@std@@@std@@IAEPAVBBox@@PAV3@IABV3@@Z
 * func-address: 0x100217e0
 * callers: 0x10025440
 * callees: 0x1001ecd0
 */

_DWORD *__stdcall std::vector<BBox>::_Ufill(_DWORD *a1, int a2, _DWORD *a3)
{
  sub_1001ECD0(a1, a2, a3);
  return &a1[10 * a2];
}
