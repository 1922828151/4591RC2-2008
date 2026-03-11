/*
 * func-name: sub_10146220
 * func-address: 0x10146220
 * callers: none
 * callees: none
 */

bool __thiscall sub_10146220(int this)
{
  return *(_DWORD *)(this + 108)
      && (fpclass(*(float *)(this + 8)) & 0x207) == 0
      && (fpclass(*(float *)(this + 12)) & 0x207) == 0
      && (fpclass(*(float *)(this + 16)) & 0x207) == 0
      && (fpclass(*(float *)(this + 20)) & 0x207) == 0
      && (fpclass(*(float *)(this + 24)) & 0x207) == 0
      && (fpclass(*(float *)(this + 28)) & 0x207) == 0
      && (fpclass(*(float *)(this + 32)) & 0x207) == 0
      && (fpclass(*(float *)(this + 36)) & 0x207) == 0
      && (fpclass(*(float *)(this + 40)) & 0x207) == 0
      && (fpclass(*(float *)(this + 44)) & 0x207) == 0
      && (fpclass(*(float *)(this + 48)) & 0x207) == 0
      && (fpclass(*(float *)(this + 52)) & 0x207) == 0
      && *(_WORD *)(this + 60) < 0x20u
      && *(int *)(this + 4) < 10
      && *(_WORD *)(this + 62) != 0xFFFF
      && (-1.0 == *(float *)(this + 76) || *(float *)(this + 76) >= 0.0);
}
