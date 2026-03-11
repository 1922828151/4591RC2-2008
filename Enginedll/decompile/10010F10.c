/*
 * func-name: ??0Camera@@QAE@ABV0@@Z
 * func-address: 0x10010f10
 * callers: 0x10015030, 0x10074170, 0x10074d60, 0x10087a10, 0x10088400, 0x1012e2b0, 0x10139150
 * callees: 0x1000b610, 0x1000fe50
 */

Camera *__thiscall Camera::Camera(Camera *this, const struct Camera *a2)
{
  Camera *result; // eax

  sub_1000B610(this, a2);
  sub_1000FE50((_DWORD *)this + 35, (int)a2 + 140);
  *((float *)this + 39) = 0.0;
  *((float *)this + 40) = 0.0;
  *((float *)this + 41) = 0.0;
  *((float *)this + 43) = 0.0;
  *((float *)this + 44) = 0.0;
  *((float *)this + 45) = 0.0;
  *((float *)this + 47) = 0.0;
  *((float *)this + 48) = 0.0;
  *((float *)this + 49) = 0.0;
  *((float *)this + 51) = 0.0;
  *((float *)this + 52) = 0.0;
  *((float *)this + 53) = 0.0;
  qmemcpy((char *)this + 156, (char *)a2 + 156, 0x40u);
  *((float *)this + 55) = 0.0;
  *((float *)this + 56) = 0.0;
  *((float *)this + 57) = 0.0;
  *((float *)this + 59) = 0.0;
  *((float *)this + 60) = 0.0;
  *((float *)this + 61) = 0.0;
  *((float *)this + 63) = 0.0;
  *((float *)this + 64) = 0.0;
  *((float *)this + 65) = 0.0;
  *((float *)this + 67) = 0.0;
  *((float *)this + 68) = 0.0;
  *((float *)this + 69) = 0.0;
  qmemcpy((char *)this + 220, (char *)a2 + 220, 0x40u);
  *((float *)this + 71) = 0.0;
  *((float *)this + 72) = 0.0;
  *((float *)this + 73) = 0.0;
  *((float *)this + 75) = 0.0;
  *((float *)this + 76) = 0.0;
  *((float *)this + 77) = 0.0;
  *((float *)this + 79) = 0.0;
  *((float *)this + 80) = 0.0;
  *((float *)this + 81) = 0.0;
  *((float *)this + 83) = 0.0;
  *((float *)this + 84) = 0.0;
  *((float *)this + 85) = 0.0;
  qmemcpy((char *)this + 284, (char *)a2 + 284, 0x41u);
  *((_DWORD *)this + 88) = *((_DWORD *)a2 + 88);
  *((_DWORD *)this + 89) = *((_DWORD *)a2 + 89);
  *((_DWORD *)this + 90) = *((_DWORD *)a2 + 90);
  *((_DWORD *)this + 91) = *((_DWORD *)a2 + 91);
  *((_DWORD *)this + 92) = *((_DWORD *)a2 + 92);
  *((_DWORD *)this + 93) = *((_DWORD *)a2 + 93);
  *((_DWORD *)this + 94) = *((_DWORD *)a2 + 94);
  *((_DWORD *)this + 95) = *((_DWORD *)a2 + 95);
  *((_DWORD *)this + 96) = *((_DWORD *)a2 + 96);
  *((float *)this + 97) = *((float *)a2 + 97);
  *((float *)this + 98) = *((float *)a2 + 98);
  result = this;
  *((float *)this + 99) = *((float *)a2 + 99);
  *((float *)this + 100) = *((float *)a2 + 100);
  *((float *)this + 101) = *((float *)a2 + 101);
  *((float *)this + 102) = *((float *)a2 + 102);
  *((float *)this + 103) = *((float *)a2 + 103);
  *((_DWORD *)this + 104) = *((_DWORD *)a2 + 104);
  return result;
}
