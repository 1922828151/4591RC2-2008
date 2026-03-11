/*
 * func-name: sub_10001D90
 * func-address: 0x10001d90
 * callers: none
 * callees: none
 */

char __thiscall sub_10001D90(int this, double *a2)
{
  float v3; // [esp+0h] [ebp-Ch]
  float v4; // [esp+4h] [ebp-8h]

  v3 = *(float *)(this + 368);
  v4 = *(float *)(this + 372) * 0.5 + v3;
  *(_DWORD *)a2 = *(_DWORD *)(this + 272);
  *((_DWORD *)a2 + 1) = *(_DWORD *)(this + 276);
  *((_DWORD *)a2 + 2) = *(_DWORD *)(this + 280);
  *((_DWORD *)a2 + 3) = *(_DWORD *)(this + 284);
  *((_DWORD *)a2 + 4) = *(_DWORD *)(this + 288);
  *((_DWORD *)a2 + 5) = *(_DWORD *)(this + 292);
  *a2 = *a2 - v3;
  a2[1] = a2[1] - v4;
  a2[2] = a2[2] - v3;
  *((_DWORD *)a2 + 6) = *(_DWORD *)(this + 272);
  *((_DWORD *)a2 + 7) = *(_DWORD *)(this + 276);
  *((_DWORD *)a2 + 8) = *(_DWORD *)(this + 280);
  *((_DWORD *)a2 + 9) = *(_DWORD *)(this + 284);
  *((_DWORD *)a2 + 10) = *(_DWORD *)(this + 288);
  *((_DWORD *)a2 + 11) = *(_DWORD *)(this + 292);
  a2[3] = v3 + a2[3];
  a2[4] = v4 + a2[4];
  a2[5] = v3 + a2[5];
  return 1;
}
