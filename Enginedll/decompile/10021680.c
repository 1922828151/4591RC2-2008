/*
 * func-name: ??1?$vector@VBBox@@V?$allocator@VBBox@@@std@@@std@@QAE@XZ
 * func-address: 0x10021680
 * callers: 0x10024120, 0x100295d0, 0x100296d0, 0x100300f0, 0x1009e990, 0x1009ec20
 * callees: none
 */

// attributes: thunk
void __thiscall std::vector<BBox>::~vector<BBox>(int this)
{
  std::vector<BBox>::_Tidy(this);
}
