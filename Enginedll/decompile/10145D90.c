/*
 * func-name: sub_10145D90
 * func-address: 0x10145d90
 * callers: none
 * callees: none
 */

bool __thiscall sub_10145D90(int this)
{
  return (fpclass(*(float *)(this + 108)) & 0x207) == 0
      && (fpclass(*(float *)(this + 112)) & 0x207) == 0
      && (fpclass(*(float *)(this + 116)) & 0x207) == 0
      && *(float *)(this + 108) >= 0.0
      && *(float *)(this + 112) >= 0.0
      && *(float *)(this + 116) >= 0.0
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
