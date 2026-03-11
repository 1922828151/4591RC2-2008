/*
 * func-name: ??0ModelFrame@@QAE@PAVStaticModel@@@Z
 * func-address: 0x1009e990
 * callers: 0x10005d50, 0x10035930, 0x100384a0, 0x1003d0f0, 0x1003dda0, 0x10044cf0, 0x100846a0, 0x1009f940, 0x101658e0, 0x10166120
 * callees: 0x10001370, 0x10001440, 0x101786e0, 0x1017a0b0, 0x101a251c
 */

ModelFrame *__thiscall ModelFrame::ModelFrame(ModelFrame *this, struct StaticModel *a2)
{
  float *v3; // eax
  int v4; // edx
  float v6[3]; // [esp+18h] [ebp-4Ch] BYREF
  float v7[3]; // [esp+24h] [ebp-40h] BYREF
  float v8[10]; // [esp+30h] [ebp-34h] BYREF
  int v9; // [esp+60h] [ebp-4h]

  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  v9 = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  std::string::string((char *)this + 44);
  std::string::string((char *)this + 72);
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
  memset((char *)this + 100, 0, 0x40u);
  sub_101786E0(1.0);
  *((float *)this + 40) = 1.0;
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
  memset((char *)this + 164, 0, 0x40u);
  sub_101786E0(1.0);
  *((float *)this + 56) = 1.0;
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
  memset((char *)this + 228, 0, 0x40u);
  sub_101786E0(1.0);
  *((float *)this + 72) = 1.0;
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
  memset((char *)this + 292, 0, 0x40u);
  sub_101786E0(1.0);
  *((float *)this + 88) = 1.0;
  sub_10001440((float *)this + 95);
  *((_DWORD *)this + 106) = 0;
  *((_DWORD *)this + 107) = 0;
  *((_DWORD *)this + 108) = 0;
  *((_DWORD *)this + 110) = 0;
  *((_DWORD *)this + 111) = 0;
  *((_DWORD *)this + 112) = 0;
  *((float *)this + 92) = 1.0;
  LOBYTE(v9) = 6;
  *((_BYTE *)this + 376) = 0;
  *((_BYTE *)this + 16) = 0;
  *((_DWORD *)this + 89) = 0;
  *((_DWORD *)this + 90) = 0;
  *((_DWORD *)this + 113) = 0;
  *((_DWORD *)this + 93) = 0;
  std::string::operator=((char *)this + 72, &unk_101C46D2);
  v6[0] = 0.5;
  v6[1] = 0.5;
  *((_DWORD *)this + 10) = 0;
  v6[2] = 0.5;
  *((_DWORD *)this + 91) = a2;
  v7[0] = -0.5;
  v7[1] = -0.5;
  v7[2] = -0.5;
  v3 = sub_10001370(v8, v7, v6);
  *((float *)this + 96) = v3[1];
  *((float *)this + 97) = v3[2];
  *((float *)this + 98) = v3[3];
  *((float *)this + 99) = v3[4];
  *((float *)this + 100) = v3[5];
  v4 = *((_DWORD *)v3 + 6);
  v3 += 7;
  *((_DWORD *)this + 101) = v4;
  *((float *)this + 102) = *v3;
  *((float *)this + 103) = v3[1];
  *((float *)this + 104) = v3[2];
  sub_1017A0B0(v8);
  return this;
}
