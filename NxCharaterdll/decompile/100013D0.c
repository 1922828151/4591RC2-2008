/*
 * func-name: sub_100013D0
 * func-address: 0x100013d0
 * callers: none
 * callees: none
 */

char __thiscall sub_100013D0(int this, double *a2)
{
  *(_DWORD *)a2 = *(_DWORD *)(this + 272);
  *((_DWORD *)a2 + 1) = *(_DWORD *)(this + 276);
  *((_DWORD *)a2 + 2) = *(_DWORD *)(this + 280);
  *((_DWORD *)a2 + 3) = *(_DWORD *)(this + 284);
  *((_DWORD *)a2 + 4) = *(_DWORD *)(this + 288);
  *((_DWORD *)a2 + 5) = *(_DWORD *)(this + 292);
  *a2 = *a2 - *(float *)(this + 368);
  a2[1] = a2[1] - *(float *)(this + 372);
  a2[2] = a2[2] - *(float *)(this + 376);
  *((_DWORD *)a2 + 6) = *(_DWORD *)(this + 272);
  *((_DWORD *)a2 + 7) = *(_DWORD *)(this + 276);
  *((_DWORD *)a2 + 8) = *(_DWORD *)(this + 280);
  *((_DWORD *)a2 + 9) = *(_DWORD *)(this + 284);
  *((_DWORD *)a2 + 10) = *(_DWORD *)(this + 288);
  *((_DWORD *)a2 + 11) = *(_DWORD *)(this + 292);
  a2[3] = *(float *)(this + 368) + a2[3];
  a2[4] = *(float *)(this + 372) + a2[4];
  a2[5] = *(float *)(this + 376) + a2[5];
  return 1;
}
