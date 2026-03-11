/*
 * func-name: ?PrepareQueuedBatches@BatchRenderer@@QAEXPAVCamera@@PAVWorld@@@Z
 * func-address: 0x10055360
 * callers: 0x10139890, 0x1016dcd0
 * callees: 0x1001cb70
 */

void __thiscall BatchRenderer::PrepareQueuedBatches(BatchRenderer *this, struct Camera *a2, struct World *a3)
{
  float v3[16]; // [esp+8h] [ebp-40h] BYREF

  dword_10284798 = *((_DWORD *)a2 + 88);
  dword_1028479C = *((_DWORD *)a2 + 89);
  dword_102847A0 = *((_DWORD *)a2 + 90);
  qmemcpy(&unk_102847C8, sub_1001CB70((char *)a2 + 220, v3, (int)a2 + 156), 0x40u);
}
