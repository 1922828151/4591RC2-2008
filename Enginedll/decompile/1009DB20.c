/*
 * func-name: ?UpdateMatrices@ModelFrame@@QAEXVMatrix@@@Z
 * func-address: 0x1009db20
 * callers: 0x10006780, 0x10035930, 0x10038ca0, 0x10045740, 0x1009db20, 0x1009dd00, 0x100eee60, 0x100ef9b0, 0x100f1c50, 0x100f5330
 * callees: 0x1009db20, 0x1017810a
 */

int __thiscall ModelFrame::UpdateMatrices(
        _DWORD *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17)
{
  const void *v18; // ebp
  int result; // eax
  _DWORD v20[16]; // [esp-3Ch] [ebp-50h] BYREF

  v18 = this + 41;
  D3DXMatrixMultiply(this + 41, this + 73, this + 25);
  result = D3DXMatrixMultiply(this + 41, this + 41, &a2);
  if ( this[89] )
  {
    qmemcpy(v20, &a2, sizeof(v20));
    result = ModelFrame::UpdateMatrices(
               this[89],
               v20[0],
               v20[1],
               v20[2],
               v20[3],
               v20[4],
               v20[5],
               v20[6],
               v20[7],
               v20[8],
               v20[9],
               v20[10],
               v20[11],
               v20[12],
               v20[13],
               v20[14],
               v20[15]);
  }
  if ( this[90] )
  {
    qmemcpy(v20, v18, sizeof(v20));
    return ModelFrame::UpdateMatrices(
             this[90],
             v20[0],
             v20[1],
             v20[2],
             v20[3],
             v20[4],
             v20[5],
             v20[6],
             v20[7],
             v20[8],
             v20[9],
             v20[10],
             v20[11],
             v20[12],
             v20[13],
             v20[14],
             v20[15]);
  }
  return result;
}
