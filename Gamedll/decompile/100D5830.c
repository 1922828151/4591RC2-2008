/*
 * func-name: sub_100D5830
 * func-address: 0x100d5830
 * callers: 0x100169c3
 * callees: none
 */

int __thiscall sub_100D5830(int this, char a2)
{
  int result; // eax

  *(float *)(this + 8) = 1.0;
  result = 0;
  *(float *)(this + 12) = 0.0;
  *(float *)(this + 16) = 0.0;
  *(float *)(this + 20) = 0.0;
  *(float *)(this + 28) = 0.0;
  *(float *)(this + 32) = 0.0;
  *(float *)(this + 36) = 0.0;
  *(float *)(this + 24) = 1.0;
  *(float *)(this + 40) = 1.0;
  *(float *)(this + 52) = 0.0;
  *(float *)(this + 48) = 0.0;
  *(float *)(this + 44) = 0.0;
  *(float *)(this + 76) = -1.0;
  *(_DWORD *)(this + 56) = 1179656;
  *(float *)(this + 72) = -1.0;
  *(_WORD *)(this + 60) = 0;
  *(_WORD *)(this + 62) = 0;
  *(float *)(this + 68) = 1.0;
  *(_DWORD *)(this + 64) = 0;
  *(float *)(this + 108) = 1.0;
  *(_DWORD *)(this + 80) = 0;
  *(float *)(this + 112) = 1.0;
  *(_DWORD *)(this + 84) = 0;
  *(float *)(this + 176) = 1.0;
  *(_DWORD *)(this + 88) = 0;
  *(_DWORD *)(this + 92) = 0;
  *(_DWORD *)(this + 96) = 0;
  *(_DWORD *)(this + 100) = 0;
  *(float *)(this + 184) = 0.0;
  *(_DWORD *)(this + 104) = 0;
  *(float *)(this + 188) = 0.0;
  *(_DWORD *)(this + 180) = 0;
  *(float *)(this + 192) = 0.0;
  *(_DWORD *)(this + 196) = 0;
  if ( !a2 )
  {
    *(float *)(this + 116) = 0.0;
    *(float *)(this + 120) = 0.0;
    *(float *)(this + 124) = 0.0;
    (*(void (**)(void))(*(_DWORD *)(this + 128) + 4))();
    return (*(int (__thiscall **)(int))(*(_DWORD *)(this + 152) + 4))(this + 152);
  }
  return result;
}
