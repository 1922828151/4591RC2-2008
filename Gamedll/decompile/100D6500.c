/*
 * func-name: sub_100D6500
 * func-address: 0x100d6500
 * callers: 0x10016275
 * callees: none
 */

bool __thiscall sub_100D6500(int this)
{
  return (_fpclass(*(float *)(this + 108)) & 0x207) == 0
      && *(float *)(this + 108) > 0.0
      && (_fpclass(*(float *)(this + 112)) & 0x207) == 0
      && *(float *)(this + 112) >= 0.0
      && (_fpclass(*(float *)(this + 176)) & 0x207) == 0
      && *(float *)(this + 176) > 0.0
      && (_fpclass(*(float *)(this + 184)) & 0x207) == 0
      && (_fpclass(*(float *)(this + 188)) & 0x207) == 0
      && *(float *)(this + 188) >= 0.0
      && (_fpclass(*(float *)(this + 192)) & 0x207) == 0
      && *(float *)(this + 116) >= 0.0
      && *(float *)(this + 120) >= 0.0
      && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)(this + 128) + 8))(this + 128)
      && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)(this + 152) + 8))(this + 152)
      && (_fpclass(*(float *)(this + 8)) & 0x207) == 0
      && (_fpclass(*(float *)(this + 12)) & 0x207) == 0
      && (_fpclass(*(float *)(this + 16)) & 0x207) == 0
      && (_fpclass(*(float *)(this + 20)) & 0x207) == 0
      && (_fpclass(*(float *)(this + 24)) & 0x207) == 0
      && (_fpclass(*(float *)(this + 28)) & 0x207) == 0
      && (_fpclass(*(float *)(this + 32)) & 0x207) == 0
      && (_fpclass(*(float *)(this + 36)) & 0x207) == 0
      && (_fpclass(*(float *)(this + 40)) & 0x207) == 0
      && (_fpclass(*(float *)(this + 44)) & 0x207) == 0
      && (_fpclass(*(float *)(this + 48)) & 0x207) == 0
      && (_fpclass(*(float *)(this + 52)) & 0x207) == 0
      && *(_WORD *)(this + 60) < 0x20u
      && *(int *)(this + 4) < 10
      && *(_WORD *)(this + 62) != 0xFFFF
      && (-1.0 == *(float *)(this + 76) || *(float *)(this + 76) >= 0.0);
}
