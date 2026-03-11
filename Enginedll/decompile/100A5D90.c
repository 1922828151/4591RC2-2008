/*
 * func-name: ?Init@REBlendColor@@QAEXKKK@Z
 * func-address: 0x100a5d90
 * callers: 0x100a5f30, 0x100a5f80, 0x100a74b0, 0x100a7590, 0x100a76a0, 0x100a8d90, 0x100ab740, 0x100ab850, 0x100aec90, 0x100b1d20, 0x100b1e40, 0x100b1f60, 0x100b7400, 0x100baf70, 0x100bb130, 0x100bf690, 0x100bf870, 0x100c14d0, 0x100c3910, 0x100c3b20, 0x100c68a0, 0x100c6b30, 0x100c7520, 0x100cb5e0, 0x100cbcc0
 * callees: none
 */

void __thiscall REBlendColor::Init(REBlendColor *this, unsigned int a2, unsigned int a3, unsigned int a4)
{
  float v4; // [esp+0h] [ebp-10h]
  float v5; // [esp+4h] [ebp-Ch]
  float v6; // [esp+8h] [ebp-8h]
  float v7; // [esp+Ch] [ebp-4h]

  *(_DWORD *)this = a2;
  *((_DWORD *)this + 3) = a2;
  *((_DWORD *)this + 4) = a2;
  *((_DWORD *)this + 5) = a2;
  *((_DWORD *)this + 6) = a2;
  *((_DWORD *)this + 7) = a2;
  *((_DWORD *)this + 8) = a2;
  *((_DWORD *)this + 9) = a2;
  *((_DWORD *)this + 10) = a2;
  *((_DWORD *)this + 11) = a2;
  *((_DWORD *)this + 12) = a2;
  *((_DWORD *)this + 13) = a2;
  *((_DWORD *)this + 14) = a2;
  *((_DWORD *)this + 15) = a2;
  *((_DWORD *)this + 1) = a3;
  v4 = (double)BYTE2(a4) * 0.003921568859368563;
  *((_DWORD *)this + 2) = a4;
  v5 = (double)BYTE1(a4) * 0.003921568859368563;
  *((float *)this + 16) = v4;
  *((float *)this + 17) = v5;
  v6 = (double)(unsigned __int8)a4 * 0.003921568859368563;
  *((float *)this + 18) = v6;
  v7 = 0.003921568859368563 * (double)HIBYTE(a4);
  *((float *)this + 19) = v7;
}
