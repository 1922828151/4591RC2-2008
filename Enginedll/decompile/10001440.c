/*
 * func-name: sub_10001440
 * func-address: 0x10001440
 * callers: 0x10003130, 0x10013120, 0x1002b710, 0x1002ed10, 0x100300f0, 0x10050b80, 0x10050e70, 0x100553e0, 0x10063b20, 0x10063d50, 0x10063e40, 0x1007aa60, 0x10080c60, 0x10084f60, 0x100853c0, 0x10087a10, 0x10088400, 0x1008ce00, 0x1008fdf0, 0x1009e990, 0x1009f270, 0x100da530, 0x100de9e0, 0x100dead0, 0x100df590, 0x100eb8b0, 0x100eeba0, 0x100ef5b0, 0x10101a60, 0x10103770, 0x101046b0, 0x10104960, 0x1012fb50, 0x10137580, 0x1013a9b0, 0x1013f190, 0x1013fac0, 0x1015c930
 * callees: 0x1017a090
 */

float *__thiscall sub_10001440(float *this)
{
  float v2; // ecx
  float v3; // edx
  float v4; // eax
  float v6; // [esp+4h] [ebp-Ch] BYREF
  float v7; // [esp+8h] [ebp-8h]
  float v8; // [esp+Ch] [ebp-4h]

  v6 = 0.0;
  v7 = 0.0;
  v8 = 0.0;
  sub_1017A090(&v6);
  *(_DWORD *)this = &BBox::`vftable';
  this[4] = 0.0;
  this[5] = 0.0;
  this[6] = 0.0;
  this[7] = 0.0;
  this[8] = 0.0;
  this[9] = 0.0;
  v6 = -1.0e10;
  this[4] = 1.0e10;
  v7 = -1.0e10;
  v2 = v6;
  v8 = -1.0e10;
  this[5] = 1.0e10;
  v3 = v7;
  this[6] = 1.0e10;
  v4 = v8;
  this[7] = v2;
  this[8] = v3;
  this[9] = v4;
  return this;
}
