/*
 * func-name: ?UpdateChildrenMatrices@ModelFrame@@QAEXXZ
 * func-address: 0x1009dd00
 * callers: 0x101430d0
 * callees: 0x1009db20
 */

void __thiscall ModelFrame::UpdateChildrenMatrices(ModelFrame *this)
{
  int v1[16]; // [esp-40h] [ebp-48h] BYREF

  if ( *((_DWORD *)this + 90) )
  {
    qmemcpy(v1, (char *)this + 164, sizeof(v1));
    ModelFrame::UpdateMatrices(
      *((_DWORD **)this + 90),
      v1[0],
      v1[1],
      v1[2],
      v1[3],
      v1[4],
      v1[5],
      v1[6],
      v1[7],
      v1[8],
      v1[9],
      v1[10],
      v1[11],
      v1[12],
      v1[13],
      v1[14],
      v1[15]);
  }
}
