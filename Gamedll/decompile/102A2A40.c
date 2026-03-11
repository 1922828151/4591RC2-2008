/*
 * func-name: sub_102A2A40
 * func-address: 0x102a2a40
 * callers: 0x1000f790
 * callees: none
 */

int __thiscall sub_102A2A40(int this, struct CTYDialog *a2)
{
  CHotZonePic::CHotZonePic((CHotZonePic *)this, a2);
  *(float *)(this + 636) = 0.0;
  *(float *)(this + 640) = 0.0;
  *(_DWORD *)this = &CTYRadar::`vftable';
  *(_BYTE *)(this + 644) = 0;
  CREEditBox::CUniBuffer::CUniBuffer((CREEditBox::CUniBuffer *)(this + 648), 1);
  return this;
}
