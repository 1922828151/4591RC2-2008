/*
 * func-name: sub_10001390
 * func-address: 0x10001390
 * callers: none
 * callees: none
 */

char __thiscall sub_10001390(double *this, _DWORD *a2)
{
  double *v2; // eax
  double v3; // st7
  int v4; // ecx
  float v6[3]; // [esp+0h] [ebp-Ch] BYREF

  v2 = this + 1;
  *((_DWORD *)this + 82) = *a2;
  *((_DWORD *)this + 83) = a2[1];
  *((_DWORD *)this + 84) = a2[2];
  *((_DWORD *)this + 85) = a2[3];
  *((_DWORD *)this + 86) = a2[4];
  *((_DWORD *)this + 87) = a2[5];
  *((_DWORD *)this + 76) = *a2;
  *((_DWORD *)this + 77) = a2[1];
  *((_DWORD *)this + 78) = a2[2];
  *((_DWORD *)this + 79) = a2[3];
  *((_DWORD *)this + 80) = a2[4];
  *((_DWORD *)this + 81) = a2[5];
  *((_DWORD *)this + 70) = *a2;
  *((_DWORD *)this + 71) = a2[1];
  *((_DWORD *)this + 72) = a2[2];
  *((_DWORD *)this + 73) = a2[3];
  *((_DWORD *)this + 74) = a2[4];
  *((_DWORD *)this + 75) = a2[5];
  v3 = *(double *)&a2[2 * *((_DWORD *)this + 6)];
  v4 = *((_DWORD *)this + 68);
  v2[43] = v3;
  if ( v4 )
  {
    v6[0] = v2[34];
    v6[1] = v2[35];
    v6[2] = v2[36];
    (*(void (__thiscall **)(int, float *))(*(_DWORD *)v4 + 56))(v4, v6);
  }
  return 1;
}
