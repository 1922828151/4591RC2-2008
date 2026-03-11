/*
 * func-name: ??0ModelFrame@@QAE@ABU0@@Z
 * func-address: 0x10024120
 * callers: none
 * callees: 0x1000d780, 0x10021240, 0x10021590, 0x10021bc0
 */

ModelFrame *__thiscall ModelFrame::ModelFrame(ModelFrame *this, const struct ModelFrame *a2)
{
  sub_10021BC0(this, (int)a2);
  *((_BYTE *)this + 16) = *((_BYTE *)a2 + 16);
  *((_DWORD *)this + 5) = *((_DWORD *)a2 + 5);
  std::vector<BBox>::vector<BBox>((_DWORD *)this + 6, (int)a2 + 24);
  *((_DWORD *)this + 10) = *((_DWORD *)a2 + 10);
  std::string::string((char *)this + 44, (char *)a2 + 44);
  std::string::string((char *)this + 72, (char *)a2 + 72);
  *((float *)this + 25) = 0.0;
  *((float *)this + 26) = 0.0;
  *((float *)this + 27) = 0.0;
  *((float *)this + 29) = 0.0;
  *((float *)this + 30) = 0.0;
  *((float *)this + 31) = 0.0;
  *((float *)this + 33) = 0.0;
  *((float *)this + 34) = 0.0;
  *((float *)this + 35) = 0.0;
  *((float *)this + 37) = 0.0;
  *((float *)this + 38) = 0.0;
  *((float *)this + 39) = 0.0;
  qmemcpy((char *)this + 100, (char *)a2 + 100, 0x40u);
  *((float *)this + 41) = 0.0;
  *((float *)this + 42) = 0.0;
  *((float *)this + 43) = 0.0;
  *((float *)this + 45) = 0.0;
  *((float *)this + 46) = 0.0;
  *((float *)this + 47) = 0.0;
  *((float *)this + 49) = 0.0;
  *((float *)this + 50) = 0.0;
  *((float *)this + 51) = 0.0;
  *((float *)this + 53) = 0.0;
  *((float *)this + 54) = 0.0;
  *((float *)this + 55) = 0.0;
  qmemcpy((char *)this + 164, (char *)a2 + 164, 0x40u);
  *((float *)this + 57) = 0.0;
  *((float *)this + 58) = 0.0;
  *((float *)this + 59) = 0.0;
  *((float *)this + 61) = 0.0;
  *((float *)this + 62) = 0.0;
  *((float *)this + 63) = 0.0;
  *((float *)this + 65) = 0.0;
  *((float *)this + 66) = 0.0;
  *((float *)this + 67) = 0.0;
  *((float *)this + 69) = 0.0;
  *((float *)this + 70) = 0.0;
  *((float *)this + 71) = 0.0;
  qmemcpy((char *)this + 228, (char *)a2 + 228, 0x40u);
  *((float *)this + 73) = 0.0;
  *((float *)this + 74) = 0.0;
  *((float *)this + 75) = 0.0;
  *((float *)this + 77) = 0.0;
  *((float *)this + 78) = 0.0;
  *((float *)this + 79) = 0.0;
  *((float *)this + 81) = 0.0;
  *((float *)this + 82) = 0.0;
  *((float *)this + 83) = 0.0;
  *((float *)this + 85) = 0.0;
  *((float *)this + 86) = 0.0;
  *((float *)this + 87) = 0.0;
  qmemcpy((char *)this + 292, (char *)a2 + 292, 0x55u);
  *((_DWORD *)this + 95) = &Volume::`vftable';
  *((_DWORD *)this + 96) = *((_DWORD *)a2 + 96);
  *((_DWORD *)this + 97) = *((_DWORD *)a2 + 97);
  *((_DWORD *)this + 98) = *((_DWORD *)a2 + 98);
  *((_DWORD *)this + 95) = &BBox::`vftable';
  *((_DWORD *)this + 99) = *((_DWORD *)a2 + 99);
  *((_DWORD *)this + 100) = *((_DWORD *)a2 + 100);
  *((_DWORD *)this + 101) = *((_DWORD *)a2 + 101);
  *((_DWORD *)this + 102) = *((_DWORD *)a2 + 102);
  *((_DWORD *)this + 103) = *((_DWORD *)a2 + 103);
  *((_DWORD *)this + 104) = *((_DWORD *)a2 + 104);
  std::vector<Matrix *>::vector<Matrix *>((_DWORD *)this + 105, (int)a2 + 420);
  sub_1000D780((_DWORD *)this + 109, (int)a2 + 436);
  *((_DWORD *)this + 113) = *((_DWORD *)a2 + 113);
  return this;
}
