/*
 * func-name: ?Blend@REBlendColor@@QAEXIMM@Z
 * func-address: 0x100a5e50
 * callers: 0x100a9560, 0x100bb2f0, 0x100bb510, 0x100bbba0, 0x100bc1e0, 0x100bc320, 0x100bc680, 0x100bca20, 0x100bcdf0, 0x100bd160, 0x100bd450, 0x100bd6f0, 0x100bdb80, 0x100bdfc0, 0x100bf3d0, 0x100bfe60, 0x100c0020, 0x100c02d0, 0x100c03b0, 0x100c0490, 0x100c0ad0, 0x100c0c50, 0x100c14d0, 0x100c1ce0, 0x100c30e0, 0x100c33b0, 0x100c3c90, 0x100c4d20, 0x10150600, 0x101507a0, 0x101517d0, 0x10153a50, 0x10153f50, 0x10154190, 0x10154210, 0x101543d0, 0x10155030, 0x10156140
 * callees: 0x101a28f2
 */

void __thiscall REBlendColor::Blend(REBlendColor *this, unsigned int a2, float a3, float a4)
{
  unsigned int v4; // eax
  float v5; // [esp+4h] [ebp-10h]
  float v6; // [esp+8h] [ebp-Ch]
  float v7; // [esp+Ch] [ebp-8h]
  float v8; // [esp+10h] [ebp-4h]
  float v9; // [esp+18h] [ebp+4h]
  float v10; // [esp+18h] [ebp+4h]
  float v11; // [esp+18h] [ebp+4h]

  v4 = *((_DWORD *)this + a2);
  v5 = (double)BYTE2(v4) * 0.003921568859368563;
  v6 = (double)BYTE1(v4) * 0.003921568859368563;
  v7 = (double)(unsigned __int8)v4 * 0.003921568859368563;
  v8 = 0.003921568859368563 * (double)HIBYTE(v4);
  v9 = a3 * 30.0;
  v10 = pow(0.0, v9);
  v11 = 1.0 - v10;
  *((float *)this + 16) = (v5 - *((float *)this + 16)) * v11 + *((float *)this + 16);
  *((float *)this + 17) = (v6 - *((float *)this + 17)) * v11 + *((float *)this + 17);
  *((float *)this + 18) = (v7 - *((float *)this + 18)) * v11 + *((float *)this + 18);
  *((float *)this + 19) = v11 * (v8 - *((float *)this + 19)) + *((float *)this + 19);
}
