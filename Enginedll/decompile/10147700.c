/*
 * func-name: ?onShapeHit@OutpopControllerHitReport@@UAE?AW4NxControllerAction@@ABUNxControllerShapeHit@@@Z
 * func-address: 0x10147700
 * callers: none
 * callees: none
 */

int __stdcall OutpopControllerHitReport::onShapeHit(double *a1)
{
  int v1; // eax
  int v2; // eax
  float v4; // [esp+4h] [ebp-Ch]
  float v5; // [esp+8h] [ebp-8h]
  float v6; // [esp+Ch] [ebp-4h]

  v1 = *(_DWORD *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)a1 + 24))(*(_DWORD *)a1) + 4);
  if ( *(_DWORD *)(v1 + 8) == 2 )
  {
    v2 = *(_DWORD *)(v1 + 12);
    *(_BYTE *)(v2 + 25) = 1;
    v4 = a1[1];
    v5 = a1[2];
    v6 = a1[3];
    *(float *)(v2 + 40) = v4;
    *(float *)(v2 + 44) = v5;
    *(float *)(v2 + 48) = v6;
    *(float *)(v2 + 28) = *((float *)a1 + 8);
    *(float *)(v2 + 32) = *((float *)a1 + 9);
    *(float *)(v2 + 36) = *((float *)a1 + 10);
  }
  return 0;
}
