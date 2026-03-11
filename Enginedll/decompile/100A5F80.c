/*
 * func-name: ?SetFont@CREElement@@QAEXIKK@Z
 * func-address: 0x100a5f80
 * callers: 0x100b7400, 0x100bca20, 0x100c14d0, 0x10156140
 * callees: none
 */

void __thiscall CREElement::SetFont(CREElement *this, unsigned int a2, unsigned int a3, unsigned int a4)
{
  float v4; // [esp+0h] [ebp-10h]
  float v5; // [esp+4h] [ebp-Ch]
  float v6; // [esp+8h] [ebp-8h]
  float v7; // [esp+Ch] [ebp-4h]

  *((_DWORD *)this + 2) = a4;
  *((_DWORD *)this + 1) = a2;
  v4 = (double)BYTE2(a3) * 0.003921568859368563;
  v5 = (double)BYTE1(a3) * 0.003921568859368563;
  *((float *)this + 45) = v4;
  *((float *)this + 46) = v5;
  v6 = (double)(unsigned __int8)a3 * 0.003921568859368563;
  *((float *)this + 47) = v6;
  v7 = 0.003921568859368563 * (double)HIBYTE(a3);
  *((float *)this + 48) = v7;
  REBlendColor::Init((CREElement *)((char *)this + 116), a3, 0xC8808080, 0);
}
